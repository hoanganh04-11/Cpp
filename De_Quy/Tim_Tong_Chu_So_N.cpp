#include<iostream>
#include<iomanip>
using namespace std;
#define ll long long

int S(ll n){
    if(n < 10) return n;
    return n%10 + S(n/10);
}

int main(){
    ll n; cin >> n;
    cout << S(n);
}

