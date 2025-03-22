#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	map<char, int> mp;
	for(int i=0; i<n; i++){
		char x; cin >> x;
		mp[x]++;
	}
	map<char, int>::iterator it = mp.begin();
	cout << (*it).first << " " << (*it).second << endl;
	cout << endl;
	map<char, int>::iterator it1 = mp.end();
	--it1;
	cout << (*it1).first << " " << (*it1).second << endl;
	cout << endl;
	for(auto x : mp){
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	for(auto it2 = mp.rbegin(); it2 != mp.rend(); it2++){
		cout << (*it2).first << " " << (*it2).second << endl;
	}
}
