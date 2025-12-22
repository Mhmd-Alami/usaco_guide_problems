#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , maxx = 0, s=0;
    cin >> n ;
    vector<pair<int, char>> lie(n);
    for (int i=0 ; i<n ; i++) {
        cin >> lie[i].second >> lie[i].first;
        if (lie[i].second == 'L') s++;
    }
    maxx = s;
    sort(lie.begin(), lie.end());

    for (int i=0 ; i<n ; i++){
        if (lie[i].second == 'G'){
            s++;
            maxx = max(s, maxx);
        }
        else {
            s--;
        }
    }
    cout << n - maxx;

	
	return 0;
}