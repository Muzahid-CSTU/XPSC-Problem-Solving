#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int v[n];
    int ss = 0;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        ss += v[i];
    }
    int s1=0,s2=0;
    for(int i=0;i<n;)
    {
        if(v[i]>v[n-1])
        {
            s1 += v[i];
            i++;
            if(v[i]>v[n-1])
            {
                i++;
            }
            else
            {
                n--;
            }
        }
        else
        {
            s1 += v[n-1];
            n--;
            if(n<=0) break;
            if(v[i]>v[n-1])
            {
                i++;
            }
            else{
                n--;
            }
        }
    }
    s2 = ss - s1;
    cout << s1 <<' '<< s2;
}