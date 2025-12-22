#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("diamond.in","r",stdin);
	freopen("diamond.out","w",stdout);
    int n, k ;
    cin >> n >> k ;
    vector<int> diamonds(n);
    for (int i=0 ; i<n ; i++) cin >> diamonds[i];
    sort(diamonds.begin(), diamonds.end());
    int r=0 , summ=0;
    for (int l=0 ; l<n ; l++){
        while (r<n and diamonds[r] - diamonds[l] <= k){
            r++;
        }
        summ = max(summ,r-l);
    }
    cout << summ ;

	return 0;
}