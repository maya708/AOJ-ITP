#include<stdio.h>
int main(){
	int a,b;
	double d,r,f;
	scanf("%d %d",&a,&b);
	d=a/b;
	r=a%b;
	f=1.0*a/b;
	printf("%.0f %.0f %.5f\n",d,r,f);
}
