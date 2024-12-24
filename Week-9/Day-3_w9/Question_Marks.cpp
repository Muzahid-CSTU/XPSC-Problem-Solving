#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char,int> mp;
        for(auto x : s){
            if(x != '?'){
                mp[x]++;
            }
        }
        int ans = 0;
        for(auto [x,y] : mp){
            if(y > n) ans += n;
            else ans += y;
        }
        cout << ans << endl;
    }
}