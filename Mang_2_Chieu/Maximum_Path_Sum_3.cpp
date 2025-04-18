#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n; cin >> n;
	int a[n][n];
	// ma tran chuyen vi
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int x; cin >> x;
			a[j][i] = x;
		}
	}
	ll dp[n][n]; // dp[i][j]: luu tong lon nhat di tu dong 1 den cot j, o dong i
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){ 
			if(i==0) dp[i][j] = a[i][j];
			else if(j == 0) dp[i][j] = max(dp[i-1][j], dp[i-1][j+1]) + a[i][j];
			else if(j == n-1) dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + a[i][j];
			else dp[i][j] = max({dp[i-1][j-1], dp[i-1][j], dp[i-1][j+1]}) + a[i][j];
		}
	}
	cout << *max_element(dp[n-1], dp[n-1] + n);
}
