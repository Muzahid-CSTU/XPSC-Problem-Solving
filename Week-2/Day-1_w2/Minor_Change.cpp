#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,t;
    cin >> s >> t;
    int l = s.size();
    int op = 0;
    for(int i=0;i<l;i++){
        if(s[i]!=t[i]) op++;
    }
    cout << op;
    return 0;
}