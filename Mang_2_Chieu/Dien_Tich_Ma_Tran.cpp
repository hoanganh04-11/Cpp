#include<bits/stdc++.h>
using namespace std;

int n, m, a[501][501];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int res = 0;

void loang(int i, int j){
	a[i][j] = 0;
	++res;
	for(int k=0; k<4; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 < 0 || i1 >= n || j1 < 0 || j1 >= m || a[i1][j1] == 0) continue;
		loang(i1, j1);
	}
}


int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	int ans = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j]){
				res = 0;
				loang(i, j);
				ans = max(ans, res);
			}
		}
	}
	cout << ans << endl;
}
