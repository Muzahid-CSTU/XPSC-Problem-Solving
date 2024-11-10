#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int d = 0,l = n;
        for(int i=0;i<n/2;i++){
            if(s[i] == '0' && s[--l] == '1'){
                d++;
            }
            else if(s[i] == '1' && s[--l] == '0'){
                d++;
            }
            else{
                break;
            }
        }
        cout << n - (d*2) << endl;
    }
    return 0;
}