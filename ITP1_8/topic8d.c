#include<stdio.h>
#include<string.h>
int main(){
	char s[202],p[101],a[101];
	int i;
	scanf("%s%s",s,p);
	strcpy(a,s);
	strcat(s,a);
	if(strstr(s,p)){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
}
	
