#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	set<int> se;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	for(int x : a){
		if(se.find(x) != se.end()){
			cout << x << " ";
			se.erase(x);
		}
	}
}
