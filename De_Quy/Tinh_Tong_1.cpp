#include<iostream>
using namespace std;

int s(int n){
    if(n == 1) return n;
    return n + s(n-1); 
}


int main(){
    int n; cin >> n;
    cout << s(n);
}

