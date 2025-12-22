#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("balancing.in","r",stdin);
	freopen("balancing.out","w",stdout);
    int n, b, ans = INT_MAX, maxx=0;
    cin >> n >> b ;
    vector<pair<int , int>> coordinatex(n), coordinatey(n);
    vector<vector<int>> xy(n, vector<int> (n,0));
    for (int i=0 ; i<n ; i++){
        cin >> coordinatex[i].first >> coordinatex[i].second ;
        coordinatey[i].first = coordinatex[i].second;
        coordinatey[i].second = coordinatex[i].first;
    }
    sort(coordinatex.begin(), coordinatex.end());
    sort(coordinatey.begin(), coordinatey.end());

    for (int i=0 ; i<n ; i++){
        if (i!=n-1 and coordinatex[i].first == coordinatex[i+1].first) continue;
        for (int j=0 ; j<n ; j++){
            int count = 0;
            if (j!=n-1 and coordinatey[j].first == coordinatey[j+1].first) continue;
            for (int k=0 ; k<=j ; k++){
                if (coordinatey[k].second <= coordinatex[i].first) count++;
            }
            maxx = max(max(count, (j+1)-count) , max((i+1)-count , n+count-(j+1)-(i+1)));
            ans = min (maxx , ans);
            
        }
    }
    cout << ans;	
	return 0;
}