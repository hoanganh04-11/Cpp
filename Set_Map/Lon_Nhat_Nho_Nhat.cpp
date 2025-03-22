#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	set<int> se;
	for(int i=0; i<n; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	int q; cin >> q;
	while(q--){
		int tt; cin >> tt;
		if(tt==1){
			int x; cin >> x;
			se.insert(x);
		}
		else if(tt==2){
			int x; cin >> x;
			if(se.find(x) != se.end()){
				se.erase(x);
			}
		}
		else if(tt==3){
			auto it = se.begin();
			cout << *it << endl;
		}
		else{
			auto it1 = se.end();
			--it1;
			cout << *it1 << endl;
		}
	}
}
