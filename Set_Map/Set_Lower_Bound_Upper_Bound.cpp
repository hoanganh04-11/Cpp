#include<bits/stdc++.h>
using namespace std;

int first_pos(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] >= x){
			res = m;
			r = m-1;
		}
		else if(a[m] < x){
			l = m+1;
		}
	}
	return res;
}
int last_pos(int a[], int l, int r, int x){
	int res = -1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] <= x){
			res = m;
			l = m+1;
		}
		else if(a[m] > x){
			r = m-1;
		}
	}
	return res;
}

int main(){
	int n; cin >> n;
	int a[n];
	multiset<int> se;
	for(int i=0; i<n; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	sort(a, a+n);
	int tt; cin >> tt;
	while(tt--){
		int x; cin >> x;
		if(x==1){
			int b; cin >> b;
			se.insert(b);
		}
		else if(x==2){
			int b; cin >> b;
			if(se.find(b) != se.end()){
				se.erase(b);
			}
		}
		else if(x==3){
			int b; cin >> b;
			int cs = first_pos(a, 0, n-1, b);
			if(cs != -1){
				cout << a[cs] << endl;
			}
			else cout << -1 << endl;
		}
		else{
			int b; cin >> b;
			int cs = last_pos(a, 0, n-1, b);
			if(cs != -1){
				cout << a[cs] << endl;
			}
			else cout << -1 << endl;
		}
	}
}
