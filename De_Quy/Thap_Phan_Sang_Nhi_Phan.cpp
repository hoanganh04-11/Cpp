#include<iostream>
using namespace std;

void binary(long long n){
    if(n/2==0) cout << n%2;
    else{
        binary(n/2);
        cout << n % 2;
    }
}
int main(){
    long long n; cin >> n;
    binary(n);
}

