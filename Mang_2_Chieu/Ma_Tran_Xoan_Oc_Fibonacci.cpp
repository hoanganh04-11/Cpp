#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n; cin >> n;
	ll a[100][100];
	ll F[100];
	F[0] = 0; F[1] = 1;
	for(int i=2; i<n*n; i++){
		F[i] = F[i-1] + F[i-2];
	}	
	int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
	int dem = 0;
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1; i <= c2; i++){
			a[h1][i] = F[dem]; ++dem;
		}
		++h1;
		for(int i = h1; i <= h2; i++){
			a[i][c2] = F[dem]; ++dem;
		}
		--c2;
		for(int i = c2; i >= c1; i--){
			a[h2][i] = F[dem]; ++dem;
		}
		--h2;
		for(int i = h2; i >= h1; i--){
			a[i][c1] = F[dem]; ++dem;
		}
		++c1;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
