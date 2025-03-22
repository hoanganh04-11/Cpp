#include<iostream>
using namespace std;

void hexa(long long n){
    if(n >0){
        hexa(n/16);
        if(n%16 < 10) cout << n%16;
        else cout << char(n%16 + 55);
    }
}
int main(){
    long long n; cin >> n;
    if(n == 0) cout << 0;
    else{
        hexa(n);
    }
}

