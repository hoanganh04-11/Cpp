#include<iostream>
using namespace std;
#define ll long long

ll s(int n){
    if(n==1) return -1;
    else{
        if(n%2==0) return n + s(n-1);
        else return -n + s(n-1);
    }
}

int main(){
    int n; cin >> n;
    cout << s(n);
}

