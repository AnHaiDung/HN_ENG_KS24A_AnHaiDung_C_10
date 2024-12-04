#include<stdio.h>
int main(){
	int arr[3][3]={{9,7,2},{6,4,5},{6,1,2}};
	int array[3]={0};
	for(int i=0;i<3;i++){
		array[i]=arr[i][2-i];
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3-i-1;j++){
		    if(array[j+1]<array[j]){
		    	int temp = array[j+1];
			    array[j+1]=array[j];
			    array[j]=temp;
		    }
		}
	}
	for(int i=0;i<3;i++){
		arr[i][2-i]=array[i];
	}	
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		    printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
