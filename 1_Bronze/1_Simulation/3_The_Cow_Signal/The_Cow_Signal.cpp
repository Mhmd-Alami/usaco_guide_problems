#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out","w", stdout);


    int m, n, k;
    cin >> m >> n >> k;
    vector<string> list(m);
    for (int i=0 ; i<m ; i++){
        cin >> list[i];
    }

    for (int i=0 ; i<m ; i++){
        string result = "";
        for (char c : list[i]){
            for (int a = 0 ; a<k; a++){
                result += c;
            }
        }
        for (int a = 0 ; a<k; a++){
            cout << result << "\n" ;
        }
    }




    return 0;
}