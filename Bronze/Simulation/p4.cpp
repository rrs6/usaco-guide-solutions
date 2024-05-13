//Speeding Ticket - Easy Bronze Problem
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("speeding.in", "r", stdin);
    int n, m; cin>>n>>m;
    vector<pair<int,int>> len_spd(n);
    int max_ans = 0;
    for(int i = 0; i < n; i++){
        int l, s;
        cin>>l>>s;
        len_spd[i] = {l, s};
    }
    vector<pair<int,int>> bessie_len_spd(m);
    for(int i = 0; i < m; i++){
        int l, s;
        cin>>l>>s;
        bessie_len_spd[i] = {l,s};
    }
    int i = 0, j = 0;
    while(i < n && j < m){
        max_ans = max(max_ans, (bessie_len_spd[j].second - len_spd[i].second));
        if(bessie_len_spd[j].first > len_spd[i].first){
            bessie_len_spd[j].first -= len_spd[i].first;
            i++;
        }else if(bessie_len_spd[j].first < len_spd[i].first){
            len_spd[i].first -= bessie_len_spd[j].first;
            j++;
        }else{
            i++; 
            j++;
        }
    }
    cout << max_ans << '\n';
    freopen("speeding.out", "w", stdout);
    return 0;
}