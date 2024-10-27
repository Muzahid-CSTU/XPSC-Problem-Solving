#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int ans = 0,t=2;
    while(t--)
    {
        if(a>b)
        {
            ans += a--;
        }
        else
        {
            ans += b--;
        }
    }
    cout << ans;
}