#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("blist.in","r",stdin);
    freopen("blist.out","w",stdout);
    int n ;
    cin >> n;
    vector<int> start(n);
    vector<int> end(n);
    vector<int> buckets(n);
    vector<int> listing(1000,0);
    for (int i=0 ; i<n ; i++){
        cin >> start[i] >> end[i] >> buckets[i];
        for (int j=start[i] ; j<=end[i] ; j++){
            listing[j] += buckets[i];
        }
    }

    cout << *max_element(listing.begin(), listing.end()) ;

    return 0;
}