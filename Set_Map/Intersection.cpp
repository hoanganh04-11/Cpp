#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int a[n], b[m];
	map<int, int> mp;
	for(int i=0; i<n; i++){
		cin >> a[i];
		mp[a[i]] = 1;
	}
	for(int j=0; j<m; j++){
		cin >> b[j];
		if(mp[b[j]] == 1){
			mp[b[j]] = 2;
		}
	}
	for(auto x : a){
		if(mp[x] == 2){
			cout << x << " ";
			mp[x] = 0;
		}
	}
}
