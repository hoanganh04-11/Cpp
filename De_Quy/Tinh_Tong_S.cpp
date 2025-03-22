#include<iostream>
#include<iomanip>
using namespace std;
#define ll long long

double S(int n){
    if(n == 1) return 1;
    return 1.0/n + S(n-1);
}
int main(){
    int n; cin >> n;
    cout << fixed << setprecision(3) << S(n) << endl;
}

