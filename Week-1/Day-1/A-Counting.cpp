#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(a>b)
    {
        cout << '0';
        return 0;
    }
    int cnt = b-a + 1;
    cout << cnt;
}