#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int a[], int l, int r){
    if(l >= r) return true;
    else if(a[l] != a[r]) return false;
    else return check(a, l+1, r-1);
}

int main(){
    int n; cin >> n;
    int a[n];
    int l = 0, r = n-1;
    for(int &x : a){
        cin >> x;
    }
    if(check(a, l, r)) cout << "YES";
    else cout << "NO";
}

