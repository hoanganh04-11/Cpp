#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	map<int, int> mp;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			int x; cin >> x;
			if(i==1) mp[x] = 1;
			else{
				if(mp[x] == (i-1)) mp[x] = i;
			}
		}
	}
	bool ok = false;
	for(auto x : mp){
		if(x.second == n){
			cout << x.first << endl;
			ok = true;
		}
	}
	if(!ok) cout << "NOT FOUND" << endl;
}
