#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<string, string>> vp(n);
    for(int i = 0; i < n; i++) {
        cin >> vp[i].first >> vp[i].second;
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(vp[i].first == vp[j].first && vp[i].second == vp[j].second) {
                for(int k = j; k < n - 1; k++) {
                    vp[k] = vp[k + 1];
                }
                j--;
                n--;
            }
        }
    }
    cout << n << endl;
    return 0;
}
