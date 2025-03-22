#include<bits/stdc++.h>
using namespace std;
#define ll long long

int upperBound(int a[], int l, int r, int res, int x){
	if (l > r) return res;
	int m = (l + r) / 2;
	if (a[m] > x){
		res = m;
		return upperBound(a, l, m - 1, res, x);
	}
	else return upperBound(a, m+1, r , res, x);
}

int lowerBound(int a[], int l, int r, int res, int x){
	if (l > r) return res;
	int m = (l + r) / 2;
	if (a[m] >= x){
		res = m;
		return lowerBound(a, l, m - 1, res, x);
	}
	else return lowerBound(a, m+1, r , res, x);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int x; cin >> x;
    cout << upperBound(a, 0, n-1, n, x) - lowerBound(a, 0, n-1, n, x);
}

