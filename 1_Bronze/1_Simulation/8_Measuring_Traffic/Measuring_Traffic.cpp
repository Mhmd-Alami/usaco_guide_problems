#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("traffic.in","r",stdin);
	freopen("traffic.out","w",stdout);
    int n;
    cin >> n;
    vector<string> str(n);
    vector<int> low(n);
    vector<int> high(n);
    for (int i=0 ; i<n ; i++){
        cin >> str[i] >> low[i] >> high[i];
    }
    pair<int, int> p1 = make_pair(-MOD , MOD);
    for (int i=0 ; i<n ; i++){
        if (str[i] == "none"){
            p1.first = max(p1.first, low[i]) ;
            p1.second = min(p1.second, high[i]) ;
        }
        else if (str[i] == "on"){
            p1.first += low[i];
            p1.second += high[i];
        }
        else {
            p1.first -= high[i];
            p1.second -= low[i];
            if (p1.first < 0) p1.first = 0;
            if (p1.second < 0) p1.second = 0;
        }
    }
    pair<int, int> p2 = make_pair(-MOD , MOD);
    for (int i=n-1 ; i>=0 ; --i){
        if (str[i] == "none"){
            p2.first = max(p2.first, low[i]) ;
            p2.second = min(p2.second, high[i]) ;
        }
        else if (str[i] == "off"){
            p2.first += low[i];
            p2.second += high[i];
        }
        else {
            p2.first -= high[i];
            p2.second -= low[i];
            if (p2.first < 0) p2.first = 0;
            if (p2.second < 0) p2.second = 0;
        }
    }
    cout << p2.first << " " << p2.second << "\n" ;
    cout << p1.first << " " << p1.second ;

	return 0;
}