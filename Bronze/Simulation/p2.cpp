//Mixing Milks - Easy Bronze Problem
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("mixmilk.in", "r", stdin);
    vector<pair<lli, lli>> max_cap(3);
    for(int i = 0; i < 3; i++){
        lli max_c, c;
        cin>>max_c>>c;
        max_cap[i] = {max_c,c};
    }
    for(int i = 0; i < 100; i++){
        lli aux;
        aux = max_cap[i%3].second;
        max_cap[i%3].second = max_cap[i%3].second - min(max_cap[i%3].second, (max_cap[(i+1)%3].first - max_cap[(i+1)%3].second));
        max_cap[(i+1)%3].second = min(max_cap[(i+1)%3].first, max_cap[(i+1)%3].second + aux);
    }
    freopen("mixmilk.out", "w", stdout); 
    cout << max_cap[0].second << '\n' << max_cap[1].second << '\n' << max_cap[2].second;
    return 0;
}