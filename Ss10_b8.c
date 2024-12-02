#include <stdio.h>

int main(){
	int n,m;
	printf("nhap so hang ");
	scanf("%d",&n);
	printf("nhap so cot ");
	scanf("%d",&m);
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
    for(int i=0;i<n;i++){
		for(int j=0;j<m-1;j++){
			for(int e=0;e<m-i-1;e++){
				if(arr[e][j]>arr[e+1][j]){
				int number;
				number=arr[e][j];
				arr[e][j]=arr[e+1][j];
				arr[e+1][j]=number;
			   }
			}
		}
	}
	for(int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	} 

	return 0;
}
