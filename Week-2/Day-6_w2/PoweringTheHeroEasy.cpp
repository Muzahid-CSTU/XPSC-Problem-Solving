#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        multiset<int> s;
        long long int ans = 0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(v[i]>0){
                s.insert(v[i]);
            }
            else{
                if(!s.empty()){
                    int ss = *s.rbegin();
                    ans += ss;
                    s.erase(--s.end());
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}