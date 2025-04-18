#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n, m;
	cin >> n >> m;
	int a[n+1][m+1];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> a[i][j];
		}
	}
	ll dp[n+1][m+1];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(i==1 && j==1) dp[i][j] = a[i][j];
			else if (i==1) dp[i][j] = dp[i][j-1] + a[i][j];
			else if(j==1) dp[i][j] = dp[i-1][j] + a[i][j];
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + a[i][j];
		}
	}
	cout << dp[n][m] << endl;
}
