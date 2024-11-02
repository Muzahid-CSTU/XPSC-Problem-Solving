#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string > v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    map<string,int> mp;
    for(auto x : v){
        mp[x]++;
        if(mp[x]>1){
            cout<<"YES"<<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}