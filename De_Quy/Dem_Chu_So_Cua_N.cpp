#include<iostream>
#include<iomanip>
using namespace std;
#define ll long long

int Count(ll n){
    if(n < 10) return 1;
    return 1 + Count(n/10);
}

int main(){
    ll n; cin >> n;
    cout << Count(n);
}

