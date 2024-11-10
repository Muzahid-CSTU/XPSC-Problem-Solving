#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        deque<int> s(n);
        for(int i=0;i<n;i++){
            cin >> s[i];
        }
        if(n < 4){
            cout << "0" << endl;
        }
        else{
            sort(s.begin(),s.end());
            int top = *s.rbegin() , mn = *s.begin();
            s.pop_back();
            int ans = top - mn;
            int mx = top;
            top = *s.rbegin();
            int mx2 = top;
            int a = top - mn;
            if(a < ans) ans = a;
            s.pop_back();
            top = *s.rbegin();
            a = top - mn;
            if(a < ans) ans = a;

            s.pop_front();
            mn = *s.begin();
            a = mx - mn;
            if(a < ans) ans = a;
            a = mx2 - mn;
            if(a < ans) ans = a;
            s.pop_front();
            mn = *s.begin();
            a = mx - mn;
            if(a < ans) ans = a;

            cout << ans << endl;
        }
    }
}
