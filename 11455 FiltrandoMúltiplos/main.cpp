#include<iostream>
using namespace std;

int main(){
    int n,multiple;
    cin>>n;
    int array[n];
    
    for (size_t i = 0; i < n; i++){
        cin>>array[i];
    }
    cin>>multiple;
    for (size_t i = 0; i < n; i++){
        if(array[i] % multiple == 0){
            cout<<array[i];
        }else{
            cout<<"X";
        }
        cout<<" ";
    }
    
    return 0;
}