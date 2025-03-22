#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll chan(ll n){
    if(n == 0) return 0;
    else{
        if(n % 2 == 0) return n%10 + chan(n/10);
        else return chan(n/10);
    }
}
ll le(ll n){
    if(n == 0) return 0;
    else{
        if(n % 2 == 1) return n%10 + le(n/10);
        else return le(n/10);
    }
}

int main(){
    ll n; cin >> n;
    cout << chan(n) << endl;
    cout << le(n) << endl;
}

