#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    vector<vector<int>> mat(4, vector<int>(2, 0));
    for(int i=0 ; i<4 ; i++){
        for(int j=0; j<2; j++){
            cin >> mat[i][j];
        }
    }
    int a, b, c;
    c = mat[3][1] - mat[3][0];
    b = mat[2][1] - mat[2][0] + c;
    a = mat[1][1] - mat[1][0] + b;

    cout << a << endl << b << endl << c ;
}