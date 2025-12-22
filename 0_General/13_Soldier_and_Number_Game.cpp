#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long t;
    cin >> t;
    vector<vector<long>> nums(t, vector<long>(2));
    long max_a = 0;
    for (int i = 0 ; i < t ; i++){
        cin >> nums[i][0] >> nums[i][1];
        max_a = max(max_a, nums[i][0]);
    }
    vector <long> spf(max_a, 0);
    // spf[1] = 1 ;
    for (int i = 2 ; i <= max_a ; i++) {
        if (spf[i] == 0) {
            spf[i] = i;
            for (long long j = i * i ; j <= max_a ; j += i) {
                if (spf[j] == 0) spf[j] = i ;
            }
        }
    }
    vector <long> p(max_a, 0);
    for (int j = 2 ; j <= max_a ; j++) {
        long numnum = j;
        while (numnum != 1){
            numnum /= spf[numnum];
            p[j] += 1;
            }
        p[j] += p[j-1];
        }
        
    for (int i = 0 ; i < t ; i++){
        cout << p[nums[i][0]] - p[nums[i][1]] << "\n";
    }
    return 0;
}