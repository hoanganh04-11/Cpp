#include<iostream>
using namespace std;
#define ll long long

ll gt(int n){
    if(n==0 || n==1) return 1;
    return n * gt(n-1);
}
int main(){
    int n; cin >> n;
    cout << gt(n);
}

