#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    long long int d = 0,p=1;
    while(!s.empty()){
        auto it = s.lower_bound(p);
        if(it != s.end()){
            d++;
            s.erase(it);
        }
        else{
            break;
        }
        p++;
    }
    cout << d;
    return 0;
}