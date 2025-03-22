#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n; cin >> n;
	int a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	ll max_val = 0;
	for(int i=0; i < n-2; i++){
		for(int j=0; j < n-2; j++){
			ll sum = 0;
			for(int m = i; m < i+3; m++){
				for(int k = j; k < j+3; k++){
					sum += a[m][k];
				}
			}
			max_val = max(sum, max_val);
		}
	}
	cout << max_val << endl;
}
