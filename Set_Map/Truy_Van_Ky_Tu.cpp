#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin >> s;
	int max_val = INT_MIN;
	int min_val = INT_MAX;
	map<char, int> mp;
	for(int i=0; i<s.size(); i++){
		mp[s[i]]++;
	}
	for(auto x : mp){
		max_val = max(max_val, x.second);
		min_val = min(min_val, x.second);
	}
	for(auto x : mp){
		if(x.second == max_val){
			cout << x.first << " " << x.second << endl;
			break;
		}
	}
	for(auto it = mp.rbegin(); it != mp.rend(); it++){
		if((*it).second == min_val){
			cout << (*it).first << " " << (*it).second << endl;
			break;
		}
	}
	cout << mp.size() << endl;
}
