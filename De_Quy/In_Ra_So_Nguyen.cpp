#include<bits/stdc++.h>
using namespace std;
#define ll long long

void right(ll n){
    if(n < 10) cout << n << " ";
    else{
        cout << n%10 << " ";
        right(n/10);
    }
}
void left(ll n){
    if(n < 10) cout << n << " ";
    else{
        left(n/10);
        cout << n%10 << " ";
    }
}

int main(){
    ll n; cin >> n;
    left(n);
    cout << endl;
    right(n);
}

