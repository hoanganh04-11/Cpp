#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; 
	getline(cin, s);
	stringstream ss(s);
	set<string> se;
	string w;
	while(ss >> w){
		se.insert(w);
	}
	cout << se.size() << endl;;
	for(auto x : se){
		cout << x << " ";
		break;
	}
	for(auto it = se.rbegin(); it != se.rend(); it++){
		cout << *it << endl;
		break;
	}
}
