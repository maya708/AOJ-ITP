#include<stdio.h>
int main(void){
	int a[3],temp;
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	if(a[0]>a[1]){
		temp=a[0];
		a[0]=a[1];
		a[1]=temp;
	}
	if(a[0]>a[2]){
		temp=a[0];
		a[0]=a[2];
		a[2]=temp;
	}
	if(a[1]>a[2]){
		temp=a[1];
		a[1]=a[2];
		a[2]=temp;
	}
	printf("%d %d %d\n",a[0],a[1],a[2]);
}
