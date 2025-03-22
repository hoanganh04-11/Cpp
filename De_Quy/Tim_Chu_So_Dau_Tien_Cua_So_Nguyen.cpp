#include<iostream>
#include<iomanip>
using namespace std;
#define ll long long

int First(ll n){
    if(n < 10) return n;
    return First(n/10);
}

int main(){
    ll n; cin >> n;
    cout << First(n);
}

