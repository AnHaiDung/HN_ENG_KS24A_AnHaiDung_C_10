#include <stdio.h>

int main(){
	int arr[8]={1,4,3,6,7,2,3,4};
	int item;
	int length=sizeof(arr)/sizeof(arr[0]);
	int flag=-1;
	printf("moi ban nhap gia tri can tim kiem ");
	scanf("%d",&item);
	for(int i=0;i<length;i++){
		if(arr[i]==item){
			printf("phan tu %d co vi tri la %d\t",item,i);
			flag=i;
		}
	}
	if(flag==-1){
		printf("khong tim thay phan tu %d trong mang",item);
	}
	return 0;
}
