#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n][n];
	int dem = 1;
	int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
	while(h1 <= h2 && c1 <= c2){
		//xay dung canh tren: hang 1 tu c1 -> c2
		for(int i=c1; i<=c2; i++){
			a[h1][i] = dem; dem++;
		}
		++h1;
		// tang h1 de xay dung canh ben phai, cot c2 tu hang h1 den hang h2
		for(int i=h1; i<=h2; i++){
			a[i][c2] = dem; dem++; 
		}
		--c2;
		//giom c2 de xay dung canh duoi, hang h2 tu c2 -> c1
		for(int i=c2; i>=c1; i--){
			a[h2][i] = dem; dem++;
		}
		--h2;
		// giam h2 de xay dung canh ben trai, cot c1 tu hang h2 -> h1
		for(int i=h2; i>=h1; i--){
			a[i][c1] = dem; dem++;
		}
		++c1;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
