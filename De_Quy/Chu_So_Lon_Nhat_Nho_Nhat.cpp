#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll maxVal(ll n){
    if(n < 10) return n;
    return max(maxVal(n/10), n%10);
}

ll minVal(ll n){
    if(n < 10) return n;
    return min(minVal(n/10), n%10);
}

int main(){
    ll n; cin >> n;
    cout << maxVal(n) << " " << minVal(n);
}

