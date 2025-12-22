#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("shuffle.in","r",stdin);
	freopen("shuffle.out","w",stdout);
    int n;
    cin >> n ;
    vector<int> change(n);
    vector<int> reverse_change(n);
    vector<long long> ids(n);
    vector<int> i_place(n);
    for (int i = 0 ; i < n ; i++){
        cin >> change[i];
        reverse_change[change[i]-1] = i ;
    }
    for (int i = 0 ; i < n ; i++){
        cin >> ids[i];
    }
    for (int i = 0 ; i < n ; i++){
        int last = i;
        for (int j = 0 ; j < 3 ; j++){
            last = reverse_change[last];
        }
        i_place[last] = i;
    }
    for (int i = 0 ; i < n ; i++){
        cout << ids[i_place[i]] << "\n";
    }
    
    
	
	return 0;
}