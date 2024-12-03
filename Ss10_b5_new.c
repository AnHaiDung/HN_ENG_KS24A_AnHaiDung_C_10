#include <stdio.h>

int main(){
	int a;
	int arr[5]={5,3,2,4,1};
	int flag=0;
	int mid;
	int start=0;
	int length=sizeof(arr)/sizeof(arr[0]);
	int end=length-1;
	for (int i=0;i<5;i++){
		for (int j=0;j<5-i-1;j++){
			if (arr[j]>arr[j+1]){
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("nhap so bat ki ");
	scanf("%d",&a);
	while(start<=end){
		mid=(start+end)/2;
		if(arr[mid]>a){
			end=mid-1;
		}else if(arr[mid]<a){
			start=mid+1;
		}else{
		printf("phan tu %d co vi tri la %d",a,mid);
		flag++;
	   	break;
		}
	}
	if(flag==0){
		printf("khong co trong mang");
	}
	return 0;
}
