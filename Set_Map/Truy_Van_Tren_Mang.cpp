#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	multiset<int> se;
	for(int i=0; i<n; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	int q; cin >> q;
	while(q--){
		int x; cin >> x;
		if(x==1){
			int i; cin >> i;
			se.insert(i);
		}
		else if(x==2){
			int i; cin >> i;
			if(se.find(i) != se.end()){
				se.erase(i);
			}
		}
		else if(x==3){
			int i; cin >> i;
			if(se.find(i) != se.end()){
				cout << "YES" << endl;
			}
			else cout << "NO" << endl;
		}
	}
}
