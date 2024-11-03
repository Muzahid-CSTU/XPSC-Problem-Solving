#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin >> n >> x;
    vector<int> v;
    for(int i=0;i<n;i++){
        int s;
        cin >> s;
        if(s!=x) v.push_back(s);
    }
    n = v.size();
    for(int i=0;i<n;i++){
        cout << v[i] << ' ';
    }
    return 0;
}