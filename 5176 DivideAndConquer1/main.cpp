#include<bits/stdc++.h>
using namespace std;
long Mayor(long n1,long n2);
long MaxSumSubArreglo(long *arreglo,long inicio, long final);

int main(){
	long n; 
 	cin >> n; 
 	long arreglo[n]; 
 	for(int i=0; i<n; i++) 
 		cin >> arreglo[i]; 
 	long aux = MaxSumSubArreglo(arreglo, 0, n-1); 
 	cout << aux; 
	return 0;
}

long Mayor(long n1,long n2){
	if (n1 > n2) return n1;
	else return n2;
}

long MaxSumSubArreglo(long *arreglo,long inicio, long final){
	if(inicio >= final) return arreglo[inicio];
	long suma = 0;
	long m = (inicio + final) / 2;
	long MSSIzq = MaxSumSubArreglo(arreglo,inicio,m);
	long MSSDer = MaxSumSubArreglo(arreglo,m+1,final);
	long SumIzq =  INT_MIN;
	long SumDer = INT_MIN;
	
	for(int j = m;j >= inicio;j--){
		suma += arreglo[j];
		if(suma > SumIzq) SumIzq = suma;
	}
	suma = 0;
	for(int j = m+1;j <= final;j++){
		suma += arreglo[j];
		if(suma > SumDer) SumDer = suma;
	}
	suma = SumIzq + SumDer;
	return Mayor(Mayor(MSSIzq,MSSDer),suma);
}