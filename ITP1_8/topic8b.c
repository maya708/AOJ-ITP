#include<stdio.h>
int main(){
	char su[1001];
	int i,sum=0;
	while(1){
		scanf("%s",&su);
		if(su[0]=='0'){
			break;
		}
		for(i=0;i<1001;i++){
			if(su[i]=='\0') break;
			sum+=su[i]-'0';
		}
		printf("%d\n",sum);
		sum=0;
	}
}
