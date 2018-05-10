#include<stdio.h>
int main(void){
	int s,m,h;
	scanf("%d",&s);
	h=s/3600;
	s-=3600*h;
	m=s/60;
	s-=60*m;
	printf("%d:%d:%d\n",h,m,s);
}
