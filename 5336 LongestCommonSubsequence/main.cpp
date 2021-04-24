#include <bits/stdc++.h>
using namespace std;
int LCSLength(string A, string B);

int main(){
	string A, B;
	cin >> A;
	cin >> B;
	if (A.length() > B.length())
		cout << LCSLength(A, B);
	else
		cout << LCSLength(B, A);
	return 0;
}
int LCSLength(string A, string B){
	int m = A.length(), n = B.length();
	int actual[n+1], anterior;
	for (int i = 0; i <= m; i++){
		anterior = actual[0];
		for (int j = 0; j <= n; j++){
			int backup = actual[j];
			if (i == 0 || j == 0)
				actual[j] = 0;
			else{
				if (A[i-1] == B[j-1])
					actual[j] = anterior+1;
				else
					actual[j] = max(actual[j], actual[j-1]);
			}
			anterior = backup;
		}
	}
	return actual[n];
}