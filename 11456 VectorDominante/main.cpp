#include <iostream>
using namespace std;

int main(){
    int n,naux,dominante;
    cin >> n;
    int vector1[n];
    int vector2[n];
    
    for (size_t i = 0; i < n; i++){
        cin >> naux;
        vector1[i] = naux;
    }

    for (size_t i = 0; i < n; i++){
        cin >> naux;
        vector2[i] = naux;
    }

    for (size_t i = 0; i < n; i++){
        if (vector1[i] > vector2[i]){
            dominante = 1;
        }else{
            dominante = 0;
            break;
        }
    }

    cout << dominante <<endl;   
    return 0;
}