#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	map<int, int> mp;
	for(int i=0; i<n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	for(auto x : mp){
		if(x.second % 2 == 0){
			cout << x.first << " " << x.second << endl;
		}
	}
	cout << endl;
	for(auto it = mp.rbegin(); it != mp.rend(); it++){
		if((*it).second % 2 == 0){
			cout << (*it).first << " " << (*it).second << endl;
		}
	}
}
