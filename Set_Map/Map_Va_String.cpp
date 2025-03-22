#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	map<string, int> mp;
	cin.ignore();
	int max_val = INT_MIN;
	int min_val = INT_MAX;
	for(int i=0; i<n; i++){
		string s;
		getline(cin, s);
		mp[s]++;
	}
	for(auto x : mp){
		min_val = min(min_val, x.second);
		max_val = max(max_val, x.second);
	}
	for(auto x : mp){
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	for(auto x : mp){
		if(x.second == min_val){
			cout << x.first << " " << x.second << endl;
			break;
		}
	}
	cout << endl;
	for(auto x : mp){
		if(x.second == max_val){
			cout << x.first << " " << x.second << endl;
			break;
		}
	}
}
