#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    map<string,int> mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
        if(mp[v[i]]==1){
            cout<< "OK" << endl;
        }
        else{
            cout<< v[i] << mp[v[i]]-1 << endl;
        }
    }
}