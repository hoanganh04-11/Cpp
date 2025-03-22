#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool rev(int n){
	int tmp = n, rev = 0;
	while(n){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev == tmp;
}

int main(){
	int n; cin >> n;
	int a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			if(rev(a[i][j])){
				++cnt;
			} 
		}
	}
	cout << cnt << endl;
}
