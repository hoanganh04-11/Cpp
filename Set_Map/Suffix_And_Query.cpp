#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	set<int> se;
	int f[n];
	for(int i=n-1; i>=0; i--){
		se.insert(a[i]);
		f[i] = se.size();
	}
	int q; cin >> q;
	while(q--){
		int l; cin >> l;
		cout << f[l] << endl;
	}
}
