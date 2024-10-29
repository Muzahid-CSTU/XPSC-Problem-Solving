#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v(n,0);
        int a,b;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                a = i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                b = i;
            }
        }
        int ans = b-a+1;
        cout << ans << endl;
    }
}