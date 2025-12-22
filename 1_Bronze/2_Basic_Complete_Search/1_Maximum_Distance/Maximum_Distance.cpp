#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll max_dis =0;
    cin >> n;
    vector<ll> x(n), y(n);
    for (int i=0 ; i<n ; i++) cin >> x[i];
    for (int i=0 ; i<n ; i++) cin >> y[i];

    
    for (int i=0 ; i<n ; i++) {
        for (int j=i+1 ; j<n ; j++){
            max_dis = max<ll>(pow((x[i] - x[j]),2) + pow((y[i] - y[j]),2), max_dis);
        }
    }

    cout << max_dis;

	
	return 0;
}