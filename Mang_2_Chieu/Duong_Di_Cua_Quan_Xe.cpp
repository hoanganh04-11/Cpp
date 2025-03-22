#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, s, t, a[21][21];
int cnt = 0;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void loang(int i, int j){
	++cnt;
	a[i][j] = 1;
	for(int k=0; k<4; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && !a[i1][j1]){
			loang(i1, j1);
		}
	}
}


int main(){
	cin >> n >> s >> t;
	s--; t--;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	loang(s, t);
	cout << cnt << endl;
} 
