#include<bits/stdc++.h>
using namespace std;
#define ll long long

void traiqua(int a[], int n){
    if(n == 0){
        return;
    }
    else{
        traiqua(a, n-1);
        cout << a[n-1] << " ";
    }
}
void phaiqua(int a[], int n){
    if(n==0) return;
    else{
        cout << a[n-1] << " ";
        phaiqua(a, n-1);
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    traiqua(a, n);
    cout << endl;
    phaiqua(a, n);
}

