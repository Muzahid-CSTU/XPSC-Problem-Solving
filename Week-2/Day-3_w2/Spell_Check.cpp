#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,a=0;
        cin >> n;
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            if(mp[s[i]]>1 || n!=5){
                a=0;
                break;
            }
            if(s[i] == 'T' || s[i] =='i' || s[i] =='m' || s[i] =='u' || s[i] =='r'){
                a=1;
            }
            else{
                a=0;
                break;
            }
        }
        if(a==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}