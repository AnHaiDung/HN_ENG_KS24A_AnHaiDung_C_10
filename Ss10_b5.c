#include <stdio.h>

int main(){
	int a;
	int array[5]={5,3,2,4,1};
	int flag=-1;
	for (int i=0;i<5;i++){
		for (int j=0;j<5-i-1;j++){
			if (array[j]>array[j+1]){
				int temp;
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("nhap so bat ki ");
	scanf("%d",&a);
	int i;
	for ( i=0;i<5;i++){
		if (a==array[i]){
			flag=i;
			break;
		}
	}
	if (flag!=-1){
		printf("so %d o vi tri %d ",a,i);
	} else {
		printf("khong co trong mang ");
	}
	return 0;
}
