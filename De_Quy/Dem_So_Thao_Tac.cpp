#include<iostream>
#include<cmath>
using namespace std;
const int MOD = 1e9+7;
long long tt1(int n){
	if(n==1) return 0;
	int x = MOD, y = MOD, z = MOD;
	if(n % 2 == 0) x = 1 + tt1(n/2);
	if(n % 3 == 0) y = 1 + tt1(n/3);
	if(n>1)  z = 1 + tt1(n-1);
	return min(min(x, y), z);
}

int main(){
	int n; cin >> n;
	cout << tt1(n);
}

