#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("gymnastics.in","r",stdin);
	freopen("gymnastics.out","w",stdout);
    int k ,n, ans=0, c;
    cin >> k >> n;
    vector<vector<int>> points(k, vector<int>(n,0));
    for (int i=0 ; i<k ; i++){
        for (int j=0 ; j<n ; j++){
            cin >> c;
            points[i][c-1] = j ;
        }
    }
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            if (i==j) continue;
            bool check = true;
            for (int a=0 ; a<k ; a++){
                if (points[a][i] > points[a][j]) {
                    check = false;
                    continue;
                }
            }
            if (check) ans++;
        }
    }

	cout << ans;
	return 0;
}