#include<stdio.h>
int main(){
	int i,j,r,c,a[101][101],yoko=0,tate=0;
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
			yoko+=a[i][j];
		}
		a[i][c]=yoko;
		yoko=0;
	}
	for(i=0;i<c+1;i++){
		for(j=0;j<r;j++){
			tate+=a[j][i];
		}
		a[r][i]=tate;
		tate=0;
	}
	for(i=0;i<r+1;i++){
		for(j=0;j<c+1;j++){
			printf("%d",a[i][j]);
			if(j!=c){
				printf(" ");
			}
		}
		printf("\n");
	}
}
	
	
