#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
      int n, XOR = 0;
      cin >> n;
      vector<int> a(n);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
         XOR ^= a[i];
      }
      int ans = XOR;
      for (int i = 0;i < n;i++) {
         int cXOR = (XOR ^ a[i]);
         ans = min(ans,cXOR);
      }
      cout << ans << endl;
   }
   return 0;
}