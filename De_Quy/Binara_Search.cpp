#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool binary(int a[], int l, int r, int x){
    if(l > r) return false;
    int m = (l+r)/2;
    if(a[m] == x) return true;
    else if(a[m] < x) return binary(a, l, m-1, x);
    else return binary(a, m+1, r, x);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int l = 0, r = n-1;
    int x; cin >> x;
    cout << binary(a, l, r, x);
}

