#include<stdio.h>

int suma(int a,int b,int res){
	int sum = 0;
	sum = a + b;
	if(sum == res){
		return 1;
	}
	return 0;
}

int multiplicacion(int a,int b,int res){
	int mult = 0;
	mult = a * b;
	if(mult == res){
		return 1;
	}
	return 0;
}

int resta(int a,int b,int res){
	int resta = 0;
	resta = a-b;
	if(resta==res){
		return 1;
	}
	return 0;
}

int division(int a,int b,int res){
	int div = 0;
	if(b==0){
		return 0;
	}else{
		div = a / b;
	}
	
	if(div==res){
		return 1;
	}
	return 0;
}
int main(){
    int a,b,res;
	scanf("%d %d %d",&a,&b,&res);
	
	if(suma(a,b,res)){
		printf("+");
	}else if(multiplicacion(a,b,res)){
		printf("*");
	}else if(resta(a,b,res)){
		printf("-");
	}else if(division(a,b,res)){
		printf("/");
	}else{
		printf("D:");
	}
		
	return 0;
}