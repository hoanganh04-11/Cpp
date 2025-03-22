#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	map<string, string> mp;
	cin.ignore();
	for(int i=0; i<n; i++){
		string msv, ten;
		getline(cin, msv);
		getline(cin, ten);
		mp.insert({msv, ten});
	}
	int q; cin >> q;
	while(q--){
		cin.ignore();
		string ma;
		getline(cin, ma);
		auto it = mp.find(ma);
		if(it != mp.end()){
			cout << (*it).second << endl; 
		}
		else cout << "NOT FOUND" << endl;
	}
}
