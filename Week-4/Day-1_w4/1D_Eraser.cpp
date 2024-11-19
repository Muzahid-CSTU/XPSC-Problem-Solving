#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0, r = 0 ;
        int b = 0, bb = 0;
        for(int i=0;i<n;i++){
            if(s[i] == 'B'){
                b++;
            }
        }
        if(k != n){
            while(r<n){
                if(s[r] == 'B'){
                    bb++;
                }
                if(r == n-1 && bb > 0){
                    b -= bb;
                    b++;
                }
                else if(r-l+1 == k){
                    if(s[l] == 'B'){
                        bb--;
                        b -= bb;
                        bb = 0;
                        l=r;
                    }
                    l++;
                }
                r++;
            }
        }
        else{
            if(b>0){
                b = 1;
            }
            
        }
        cout << b << endl;
    }
}