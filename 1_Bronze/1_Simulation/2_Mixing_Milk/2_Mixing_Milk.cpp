#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("mixmilk.in" ,"r",stdin);
    freopen("mixmilk.out","w",stdout);
    vector<int> c(3);
    vector<int> m(3);

    for (int i=0; i<3; i++){
        cin >> c[i] >> m[i];
    }
    for (int i=0; i<4; i++){
        int b1 = (i)%3;
        int b2 = (i+1)%3;
        int change = min(m[b1], c[b2]-m[b2]);
        m[b1] -= change;
        m[b2] += change;
    }

    for (int i=0; i<3; i++){
        cout << m[i] << "\n";
    }
}
