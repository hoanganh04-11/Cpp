#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return false;
		}
	}
	return n>1;
}

int main(){
	int n; cin >> n;
	int a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	set<int> cnt;
	for(int i=0; i<n; i++){
		if(prime(a[i][i])) cnt.insert(a[i][i]);
		if(prime(a[i][n-i-1])) cnt.insert(a[i][n-i-1]);
	}
	cout << cnt.size() << endl;
}
