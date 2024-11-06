#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int> mp;
        for(auto x : s){
            mp[x]++;
        }
        int od = 0;
        for(auto [x,y] : mp){
            if(mp[x]%2 != 0){
                od++;
            }
        }
        if(od == k ||  od-1 == k || od < k){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}