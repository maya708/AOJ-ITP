#include<stdio.h>
int main(){
	int i,j=0,alf[26]={};
	char a[1200],b[1200];
	for(i=0;i<=1200;i++){
		scanf("%c",&a[i]);
		if(a[i]=='\n'){
			break;
		}else if(a[i]>='a' && a[i]<='z'){
			b[j]=a[i];
			j++;
		}else if(a[i]>='A' && a[i]<='Z'){
			b[i]=a[i]+32;
			j++;
		}
	}
	for(i=0;i<j;i++){
		printf("%c",b[i]);
	}
	printf("\n");
	for(i=0;i<j;i++){
		alf[b[i]-'a']++;
	}
	for(i=0;i<26;i++){
		printf("%c : %d\n",'a'+i,alf[i]);
	}
}
