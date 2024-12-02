#include <stdio.h>

int main(){
	int arr[5]={1,5,9,7,8};
	for(int i=1; i<5; i++){
		int key=arr[i];
		int j = i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	for(int i=0; i<5; i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
