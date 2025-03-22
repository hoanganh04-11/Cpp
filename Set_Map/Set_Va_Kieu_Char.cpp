#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	set<char> se; 
	for(int i=0; i<n; i++){
		char c; cin >> c;
		se.insert(c);
	}
	cout << se.size() << endl;
	for(auto x : se){
		cout << x << " ";
	}
	cout << endl;
	for(auto it = se.rbegin(); it != se.rend(); it++){
		cout << *it << " ";
	}
	cout << endl;
}
