#include<stdio.h>
int main(){
	int n,b,f,r,v,h[5][4][11]={},i,j,k,l;
	scanf("%d",&n);
	for(l=1;l<=n;l++){
		scanf("%d %d %d %d",&b,&f,&r,&v);
		for(i=1;i<=4;i++){
			for(j=1;j<=3;j++){
				for(k=1;k<=10;k++){
					if((b==i && f==j) && r==k){
						h[i][j][k]+=v;
					}
				}
			}
		}
	}
	for(i=1;i<=4;i++){
		for(j=1;j<=3;j++){
			for(k=1;k<=10;k++){
				printf(" %d",h[i][j][k]);
			}
			printf("\n");
		}
		if(i!=4){
			for(l=0;l<20;l++){
				printf("#");
			}
			printf("\n");
		}
	}
}
