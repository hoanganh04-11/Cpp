#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	cin.ignore();
	map<string, vector<string>> mp;
	for(int i=0; i<n; i++){
		string line;
		getline(cin, line);
		auto it = line.find('-');
		string name1 = line.substr(0, it-1);
		string name2 = line.substr(it + 2);
		mp[name1].push_back(name2);
		mp[name2].push_back(name1);
	}
	for(auto it : mp){
		cout << it.first << " : ";
		for(int i=0; i<it.second.size(); ++i){
			cout << it.second[i];
			if(i < it.second.size() - 1){
				cout << ", ";
			}
		}
		cout << endl;
	}
}
