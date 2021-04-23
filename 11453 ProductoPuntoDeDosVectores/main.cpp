#include<iostream>
using namespace std;

int main(){
    int suma = 0,n = 0;
    cin>>n;
    int vector1[n],vector2[n];
    for (size_t i = 0; i < n; i++){
        cin>>vector1[i];
    }

    for (size_t i = 0; i < n; i++){
        cin>>vector2[i];
    }

    for (size_t i = 0; i < n; i++){
       suma = suma + (vector1[i] * vector2[i]);
    }

    cout<<suma<<endl;
   
    return 0;
}