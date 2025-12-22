#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    int x;
    vector<int> v(n,0);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> x;
            v[i] += x;
        }
        if(v[i] >= 2) count++;
    }
    cout << count << endl;
    return 0;
}