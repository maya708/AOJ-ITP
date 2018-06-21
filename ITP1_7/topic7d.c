#include<stdio.h>
int main(){
	long n,m,l,i,j,k,sum=0,a[100][100],b[100][100];
	scanf("%ld %ld %ld",&n,&m,&l);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%ld",&a[i][j]);
		}
	}
	for(j=0;j<m;j++){
		for(k=0;k<l;k++){
			scanf("%ld",&b[j][k]);
		}
	}
	for(i=0;i<n;i++){
		for(k=0;k<l;k++){
			for(j=0;j<m;j++){
				sum+=a[i][j]*b[j][k];
			}
			printf("%ld",sum);
			sum=0;
			if(k!=l-1){
				printf(" ");
			}else{
				printf("\n");
			}
		}
	}
}
