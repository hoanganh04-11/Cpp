#include<iostream>
using namespace std;
#define ll long long

ll fibo(int n){
    if(n == 1 || n ==2) return n-1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n; cin >> n;
    cout << fibo(n);
}

