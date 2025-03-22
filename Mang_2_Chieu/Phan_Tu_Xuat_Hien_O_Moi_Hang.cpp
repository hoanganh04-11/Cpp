#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
//	int a[n][n];
//	map<int, int> mp;
//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			cin >> a[i][j];
//			mp[a[i][j]]++;
//		}
//	}
//	for(pair<int, int> it : mp){
//		if(it.second >= n){
//			cout << it.first << " ";
//		}
//	}
	map<int, int> mp;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			int x; cin >> x;
			if(i==1) mp[x] = 1;
			else{
				if(mp[x] == i-1) mp[x] = i;
			}
		}
	}
	for(auto x : mp){
		if(x.second == n) cout << x.first << " ";
	}
}
