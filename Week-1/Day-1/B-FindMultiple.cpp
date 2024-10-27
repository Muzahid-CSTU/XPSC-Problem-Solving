#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,ans;
    bool flg = false;
    cin >> a >> b >> c;
    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            flg = true;
            ans = i;
            break;
        }
    }
    if(flg)
    {
        cout << ans;
    }
    else
    {
        cout <<"-1";
    }
}