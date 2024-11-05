#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s,ss;
        cin >> s >> ss;
        int a = 1;
        for(int i=0;i<n;i++){
            if(s[i]=='R' && ss[i]!='R'){
                a = 0;
                break;
            }
            else if(ss[i]=='R' && s[i]!='R'){
                a = 0;
                break;
            }
        }
        if(a==0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}