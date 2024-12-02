#include <stdio.h>

int main(){
	int arr[5]={1,2,3,4,5},a;
	int flag;
	printf("nhap gia tri bat ki : ");
	scanf("%d",&a);
	for(int i=0; i<5;i++){
		if(arr[i]==a){
			printf("so %d o vi tri %d",a,i);
			flag=1;
		}
	}
	if(flag==0){
		printf("khong co trong mang");
	}
	return 0;
}
