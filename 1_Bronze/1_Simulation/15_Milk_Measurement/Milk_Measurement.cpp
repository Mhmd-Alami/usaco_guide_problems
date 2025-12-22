#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("measurement.in","r",stdin);
	freopen("measurement.out","w",stdout);
    int n;
    int change_num = 0;
    cin >> n ;
    int place = 0;
    vector<int> days(101,-1);
    vector<pair<string,int>> changes;
    for (int i=0 ; i<n ; i++){
        int day;
        string a;
        int b;
        cin >> day;
        days[day] = place;
        place++;
        cin >> a >> b ;
        changes.push_back(make_pair(a,b));
    }
    vector<int> milk = {7,7,7};
    int who;
    string cow_c;
    int milk_c;
    for (int i=0 ; i<101 ; i++){
        if (days[i] != -1){
            cow_c = changes[days[i]].first ;
            milk_c = changes[days[i]].second ;
            if (cow_c == "Bessie") who = 0;
            if (cow_c == "Elsie") who = 1;
            if (cow_c == "Mildred") who = 2;
            if (milk_c > 0) {
                if (milk[who] == *max_element(milk.begin(),milk.end())) {
                    int hold = milk[who];
                    milk[who] = -1;
                    if (hold == *max_element(milk.begin(),milk.end())) {
                        change_num++;
                    }
                    milk[who] = hold;
                }
                else {
                    if (milk[who]+milk_c >= *max_element(milk.begin(),milk.end())) {
                        change_num++;
                    }
                }
            }
            else {
                if (milk[who] == *max_element(milk.begin(),milk.end())){
                    int hold = milk[who];
                    milk[who] = -1;
                    if (hold+milk_c <= *max_element(milk.begin(),milk.end())) {
                        change_num++;
                    }
                    milk[who] = hold;
                }
            }
            milk[who] += changes[days[i]].second;
        }
    }
    cout << change_num ;

	return 0;
}