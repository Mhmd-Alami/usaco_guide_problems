#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("censor.in","r",stdin);
	freopen("censor.out","w",stdout);
    string s, t, result;
    cin >> s >> t;
    int t_len = t.size();
    result.reserve(s.size());
    for (char c:s){
        result.push_back(c);

        if (result.size()>=t_len){
            bool match = true;
            for (int i=0 ; i<t_len ; i++){
                if (result[result.size()-t_len+i] != t[i]){
                    match = false;
                    break;
                }
            }
            if (match){
                for (int i=0 ; i<t_len ; i++){
                    result.pop_back();
                }
            }
        }
    }
    cout << result ;



	
	return 0;
}