#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    long long int s=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        s += a[i];
    }
    sort(a,a+n);
    if(s%2!=0)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2 != 0)
            {
                s -= a[i];
                break;
            }
        }
    }
    cout << s;
}