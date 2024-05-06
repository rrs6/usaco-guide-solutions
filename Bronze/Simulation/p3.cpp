//The Cow-Signal - Easy Bronze Problem
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("cowsignal.in", "r", stdin);
    int n, m, k;
    cin>>n>>m>>k;
    vector<string> w(n);
    for(int i = 0; i < n; i++) cin>>w[i];
    vector<string> ans;
    for(int i = 0; i < n; i++){
        string l = "";
        for(int j = 0; j < m; j++){
            for(int c = 0; c < k; c++)
                l+=w[i][j];
        }
        for(int c = 0; c < k; c++)
            ans.push_back(l);
    }
    freopen("cowsignal.out", "w", stdout);
    for(int i = 0; i < n*k; i++)
        cout << ans[i] << '\n';
}