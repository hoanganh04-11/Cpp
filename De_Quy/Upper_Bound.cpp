#include<iostream>
#include<cmath>
using namespace std;

int uB(int a[], int l, int r, int x, int res){
	if(l > r) return res;
	int m = (l+r)/2;
	if(a[m] > x){
		res = m;
		return uB(a, m+1, r, x, res);
	}
	else return uB(a, l, m-1, x, res);
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int x; cin >> x;
	cout << uB(a, 0, n-1, x, n);
}

