#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("cownomics.in","r",stdin);
	freopen("cownomics.out","w",stdout);
    int n, m, ans=0;
    char c;
    cin >> n >> m ;
    vector<vector<char>> cow1(m, vector<char>(n)), cow2(m, vector<char>(n));
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++){
            cin >> c;
            cow1[j][i] = c;
        }
    }
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++){
            cin >> c;
            cow2[j][i] = c;
        }
    }

    for (int i=0 ; i<m ; i++){
        bool check = false;
        for (int a=0 ; a<n ; a++){
            for (int b=0 ; b<n ; b++){
                if (cow1[i][a] == cow2[i][b]){
                    check = true;
                    break;
                }
            }
            if (check) break;
        }
        if (!check) ans++;
    }
    cout<<ans;

	
	return 0;
}