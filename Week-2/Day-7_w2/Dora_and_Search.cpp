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
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        map<pair<int,int>> mp,mpr;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x==0) mp.insert({v[i],i});
            else sr.insert({v[i],i});
        }
        for(int i=1;i<=s.size();i++){
            
        }
    }
    return 0;
}