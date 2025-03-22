#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m; cin >> n >> m;
	set<int> a;
	set<int> b;
	set<int> se;
	for(int i=0; i<n; i++){
		int x; cin >> x;
		a.insert(x);
	}
	for(int i=0; i<m; i++){
		int x; cin >> x;
		b.insert(x);
	}
	for(int x : a){
		if(!b.count(x)) se.insert(x);
	}
	for(int x : b){
		if(!a.count(x)) se.insert(x);
	}
	for(int x : se){
		cout << x << " ";
	}
}
