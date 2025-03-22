#include<iostream>
#include<cmath>
using namespace std;

int lB(int a[], int l, int r, int x, int res){
	if(l > r) return res;
	int m = (l+r)/2;
	if(a[m] >= x){
		res = m;
		return lB(a, l, m-1, x, res);
	}
	else{
		return lB(a, m+1, r, x, res);
	}
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int x; cin >> x;
	cout << lB(a, 0, n-1, x, n);
}

