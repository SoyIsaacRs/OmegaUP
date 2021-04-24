#include<iostream>
using namespace std;

int main(){
    int count = 0, vector1[10];
    for (size_t i = 0; i < 10; i++){
        cin>>vector1[i];
    }
    for (size_t i = 0; i < 10; i++){
        if((vector1[i] % 4 == 0) && (vector1[i] % 100 != 0) || (vector1[i]) % 400 == 0){
            count++;
        }
    }
    cout<<count;
    return 0;
}