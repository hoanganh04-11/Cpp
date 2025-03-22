#include<iostream>
using namespace std;
#define ll long long

ll s(int n){
    if(n==1) return n;
    return n*n*n + s(n-1);
}

int main(){
    int n; cin >> n;
    cout << s(n);
}

