#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    set<int> s;
    int a[n];
    for(int i=n-1;i>=0;i--){
        s.insert(v[i]);
        a[i] = s.size();
    }
    while(m--){
        int l;
        cin >> l;
        cout<< a[--l] << endl;
    }
    return 0;
}