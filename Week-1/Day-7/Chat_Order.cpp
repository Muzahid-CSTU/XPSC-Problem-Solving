#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string > v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    reverse(v.begin(),v.end());
    map<string,int> mp;
    for(auto x : v){
        mp[x]++;
        if(mp[x]==1){
            cout << x << endl;
        }
    }
    return 0;
}