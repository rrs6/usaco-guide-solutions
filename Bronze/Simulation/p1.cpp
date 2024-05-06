// Shell Game - Easy Bronze Problem.
#include <bits/stdc++.h>
using namespace std;

int main() {
    //For this problem, we need to know that, initially all the shell were in your positions and after one operation, the shell changes with another.
    //For every guess we need to see, what's the shell is in that position.
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("shell.in", "r", stdin); //use to get input from the file.
    int n;
    cin>>n;
    vector<int> shells_pos(3);
    for(int i = 0; i < 3; i++) shells_pos[i] = i;

    vector<int> counter(3);
    for(int i = 0; i < n; i++){
        int a,b,g;
        cin>>a>>b>>g;
        a--, b--, g--;
        swap(shells_pos[a], shells_pos[b]);
        counter[shells_pos[g]]++;
    }
    freopen("shell.out", "w", stdout); //output the answer in a file.
    cout << max({counter[0], counter[1], counter[2]});
    return 0;
}