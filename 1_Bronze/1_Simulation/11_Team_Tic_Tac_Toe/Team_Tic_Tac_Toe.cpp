#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("tttt.in","r",stdin);
	freopen("tttt.out","w",stdout);

    set<char> c1;
    set<set<char>> c2;
    vector<char> ttt(9);
    for (int i=0 ; i<9 ; i++) {
        cin >> ttt[i];
    }
    vector<vector<int>> wins;
    for (int i=0 ; i<3 ; i++){
        wins.push_back(vector<int>{i,i+3,i+6});
        wins.push_back(vector<int>{3*i,3*i+1,3*i+2});
    }
    wins.push_back(vector<int>{0,4,8});
    wins.push_back(vector<int>{2,4,6});

    for (int i=0 ; i < wins.size() ; i++){
        char a = ttt[wins[i][0]] ,b = ttt[wins[i][1]],c = ttt[wins[i][2]];
        if ((a == b) and (a == c)){
            c1.insert(a) ;
        }
        else {
            if ((a == b) or (a == c) or (b == c)){
                c2.insert(set<char>{a,b,c});
            }
        }
    }
    cout << c1.size() << '\n' << c2.size();
	
	return 0;
}