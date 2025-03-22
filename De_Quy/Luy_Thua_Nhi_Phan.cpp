#include<iostream>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

ll luythua(ll a, ll b){
    if(b == 0) return 1;
    else{
        if(b % 2 == 0) return (luythua(a, b/2)%MOD * luythua(a, b/2)%MOD)%MOD;
        else return (luythua(a, b/2)%MOD * luythua(a, b/2)%MOD * a%MOD)%MOD;
    }
}

int main(){
    ll a, b; cin >> a >> b;
    cout << luythua(a, b);
}

