#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("cownomics.in","r",stdin);
	freopen("cownomics.out","w",stdout);
	int n, m, ans=0;
    char c;
    cin >> n >> m ;
    vector<vector<char>> cow1(m, vector<char>(n)), cow2(m, vector<char>(n));
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++){
            cin >> c;
            cow1[j][i] = c;
        }
    }
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++){
            cin >> c;
            cow2[j][i] = c;
        }
    }
	for (int i=0 ; i<m ; i++){
		for (int j=i+1 ; j<m ; j++){
			for (int k=j+1 ; k<m ; k++){
                set<string> cow1s;
                bool check = false;
                string vocab = "";
				for (int a=0 ; a<n ; a++){
                    vocab = "";
					vocab += cow1[i][a];
                    vocab += cow1[j][a];
                    vocab += cow1[k][a];
                    cow1s.insert(vocab);
				}
                for (int a=0 ; a<n ; a++){
                    vocab = "";
					vocab += cow2[i][a];
                    vocab += cow2[j][a];
                    vocab += cow2[k][a];
                    if (cow1s.find(vocab) != cow1s.end()){
                        check = true;
                        break;
                    }
                }
                if (!check) {
                    ans++;
                }
			}
		}	
	}
    cout << ans;
	
	return 0;
}