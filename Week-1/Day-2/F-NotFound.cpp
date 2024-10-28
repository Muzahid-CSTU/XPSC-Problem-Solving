#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[26];
    for(int i=0;i<26;i++)
    {
        a[i] = 1;
    }
    string ss="abcdefghijklmnopqrstuvwxyz";
    for(auto x : s)
    {
        int xx = x-97;
        a[xx] = 0;
    }
    int flg = 0;
    for(int i=0;i<26;i++)
    {
        if(a[i]==1)
        {
            cout << ss[i];
            flg = 1;
            break;
        }
    }
    if(flg == 0)
    {
        cout <<"None";
    }
}