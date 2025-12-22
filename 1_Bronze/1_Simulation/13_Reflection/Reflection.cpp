#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,u;
    cin >> n >> u;
    vector<string> canvas(n);
    vector<vector<int>> change(u,vector<int>(2,0));
    for (int i=0; i<n; i++){
        cin >> canvas[i];
    }
    for (int i=0; i<u; i++){
        cin >> change[i][0] >> change[i][1];
        change[i][0]--;
        change[i][1]--;
    }

    int change_count=0;
    for (int j=0 ; j<n/2; j++){
        for (int k=0; k<n/2; k++){
            int count = 0;
            if (canvas[j][k] == '.') count++;
            if (canvas[j][n-1-k] == '.') count++;
            if (canvas[n-1-j][k] == '.') count++;
            if (canvas[n-1-j][n-1-k] == '.') count++;
            change_count += min(count, 4-count);
        }
    }
    cout << change_count << '\n';
    for (int i=0 ; i<u ; i++){
        int ii=change[i][0], jj= change[i][1];
        int count = 0;
        int dif = 0;
        if (canvas[ii][jj] == '.') count++;
        if (canvas[ii][n-1-jj] == '.') count++;
        if (canvas[n-1-ii][jj] == '.') count++;
        if (canvas[n-1-ii][n-1-jj] == '.') count++;
        dif = min(count, 4-count);
        if (canvas[ii][jj] == '.'){
            canvas[ii][jj] = '#';
        }
        else {
            canvas[ii][jj] = '.';
        }
        count = 0;
        if (canvas[ii][jj] == '.') count++;
        if (canvas[ii][n-1-jj] == '.') count++;
        if (canvas[n-1-ii][jj] == '.') count++;
        if (canvas[n-1-ii][n-1-jj] == '.') count++;
        dif -= min(count, 4-count);
        change_count -= dif;
        cout << change_count << '\n';    
    }





    // for (int i=0 ; i<u+1 ; i++){
    //     int count =0;
    //     int change_count=0;
    //     if (i!=u){ // i!=u change + print
    //         for (int j=0 ; j<n/2; j++){
    //             for (int k=0; k<n/2; k++){
    //                 count = 0;
    //                 if (canvas[j][k] == '.') count++;
    //                 if (canvas[j][n-1-k] == '.') count++;
    //                 if (canvas[n-1-j][k] == '.') count++;
    //                 if (canvas[n-1-j][n-1-k] == '.') count++;
    //                 change_count += min(count, 4-count);
    //             }
    //         }
    //         cout << change_count << '\n';

    //         if (canvas[change[i][0]][change[i][1]] == '.'){
    //             canvas[change[i][0]][change[i][1]] = '#';
    //         }
    //         else {
    //             canvas[change[i][0]][change[i][1]] = '.';
    //         }
    //     }

    //     else { // i = u no change print
    //         for (int j=0 ; j<n/2; j++){
    //             for (int k=0; k<n/2; k++){
    //                 count = 0;
    //                 if (canvas[j][k] == '.') count++;
    //                 if (canvas[j][n-1-k] == '.') count++;
    //                 if (canvas[n-1-j][k] == '.') count++;
    //                 if (canvas[n-1-j][n-1-k] == '.') count++;
    //                 change_count += min(count, 4-count);
    //             }
    //         }
    //         cout << change_count << '\n';
    //     }
    // }

	return 0;
}