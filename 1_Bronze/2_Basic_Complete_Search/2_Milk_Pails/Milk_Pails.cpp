#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("pails.in","r",stdin);
	freopen("pails.out","w",stdout);
    int x, y, m, maxx = 0;
    cin >> x >> y >> m ;
    int n_x = floor(m/x);
    int n_y = floor(m/y);
    for (int i=0 ; i<=n_x ; i++){
        for (int j=0 ; j<=n_y ; j++){
            if (x*i+y*j <= m){
                maxx = max(maxx , x*i+y*j);
            }
        }
    }
    cout << maxx;

	
	return 0;
}