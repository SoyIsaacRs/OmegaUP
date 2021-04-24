#include<iostream>
using namespace std;

int main(){
  int n = 0,m = 0,suma1=0,suma2 = 0;
  cin>>n;
  m = n /2;
  int vector[n];
  for (size_t i = 0; i < n; i++)
    cin>>vector[i];
  
  for (size_t i = 0; i < n; i++){
    if (i < m) suma1 += vector[i];
    else suma2 += vector[i];  
  }
  
  if (suma1 == suma2) cout<<suma1<<" "<<1;
  else cout<<suma1+suma2<<" "<<0;
  
  return 0;
}