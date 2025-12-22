#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int x;
    for (int i = 0 ; i < 7 ; i++){
        cin >> x ;
        v.push_back(x);
    }

    sort(v.begin() , v.end());
    int mn1 = v[0];
    int mn2 = v[1];
    int mx = v.back() - mn1 - mn2 ;

    cout << mn1 << " " << mn2 << " " << mx ;
    return 0;
}