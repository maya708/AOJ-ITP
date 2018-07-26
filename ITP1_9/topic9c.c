#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j,taro=0,hana=0,naga;
	char t[100],h[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%s",t,h);
		if(strcmp(t,h)==0){
			taro++;
			hana++;
		}else{
			if(strlen(t)>strlen(h)){
				for(j=0;j<strlen(h);j++){
					if(t[j]-'0'>h[j]-'0'){
						taro+=3;
						break;
					}else if(t[j]-'0'<h[j]-'0'){
						hana+=3;
						break;
					}
				}
				if(j==strlen(h)){
					taro+=3;
				}
			}else{
				for(j=0;j<strlen(t);j++){
					if(t[j]-'0'>h[j]-'0'){
						taro+=3;
						break;
					}else if(t[j]-'0'<h[j]-'0'){
						hana+=3;
						break;
					}
				}
				if(j==strlen(t)){
					hana+=3;
				}
			}
		}
	}
	printf("%d %d\n",taro,hana);
}
	
	
