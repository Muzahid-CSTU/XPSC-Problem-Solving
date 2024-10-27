#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n>999)
    {
        cout << n;
    }
    else if(n>99)
    {
        cout << '0' << n;
    }
    else if(n>9)
    {
        cout << "00" << n;
    }
    else
    {
        cout << "000" << n;
    }
}