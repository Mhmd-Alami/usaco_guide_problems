#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("blocks.in","r",stdin);
	freopen("blocks.out","w",stdout);
    int n;
    string a,b;
    cin >> n ;
    vector<int> count(26,0);
    for (int i=0 ; i<n ; i++){
        vector<int> in_line_a(26,0);
        vector<int> in_line_b(26,0);
        cin >> a >> b ;
        for (char c : a){
            in_line_a[c-'a']++ ;
        }
        for (char c : b){
            in_line_b[c-'a']++ ;
        }
        for (int j=0 ; j<26 ; j++){
            count[j] = count[j] + max(in_line_a[j], in_line_b[j]);
        }
    }

    for (int i=0 ; i<26 ; i++){
        cout << count[i] << '\n';
    }    

	
	return 0;
}