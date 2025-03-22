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
	for(int i=0; i<n; i++){
		swap(a[i][i], a[i][n-1-i]);
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
