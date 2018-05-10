#include<stdio.h>
int main(void){
	int w,h,x,y,r;
	scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
	if(x-r>=0 && y-r>=0){
		if(x+r<=w && y+r<=h){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}else{
		printf("No\n");
	}
}
