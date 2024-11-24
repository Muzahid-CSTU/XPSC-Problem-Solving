#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2 == 0){
            cout << "YES" << endl;
            while(n>0){
                cout << "AA";
                n -= 2;
                if(n==0) break;
                cout << "BB";
                n -= 2;
            }
            cout << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}