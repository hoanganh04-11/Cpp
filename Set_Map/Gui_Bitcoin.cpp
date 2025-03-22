#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n; cin >> n;
	map<string, string> mp;
	for(int i=0; i<n; i++){
		cin.ignore();
		string ten, dc;
		getline(cin, ten);
		getline(cin, dc);
		mp[dc] = ten;
	}
	int q; cin >> q;
	while(q--){
		cin.ignore();
		string send, receive, bc;
		cin >> send >> receive >> bc;
		string ten1, ten2;
		if(mp.count(send)) ten1 = mp[send];
		else ten1 = "Unknown wallet";
		if(mp.count(receive)) ten2 = mp[receive];
		else ten2 = "Unknown wallet";
		
		cout << ten1 << " send " << bc << " bitcoin to " << ten2 << endl;
	}
}
