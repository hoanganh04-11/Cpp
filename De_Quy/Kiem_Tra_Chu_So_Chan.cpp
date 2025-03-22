#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll n){
    if(n == 0) return true;
    else if(n % 2 == 1) return false;
    return check(n/10);
}
int main(){
    ll n; cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
}

