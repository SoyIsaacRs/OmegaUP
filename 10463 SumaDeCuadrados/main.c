#include<stdio.h>

int main(){
	int n=0,suma=0,i=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		suma = suma + (i*i);
	}
	printf("%d",suma);
	return 0;
}