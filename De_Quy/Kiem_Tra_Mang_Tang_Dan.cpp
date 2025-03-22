#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int a[], int n){
    if(n==1) return true;
    else if(a[n-2] >= a[n-1]) return false;
    return check(a, n-1);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    if(check(a, n)) cout << "YES";
    else cout << "NO";
}

