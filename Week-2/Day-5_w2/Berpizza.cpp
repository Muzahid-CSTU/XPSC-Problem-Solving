#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, c = 1;
   cin >> n;
   set<pair<int, int>> s;
   multiset<pair<int, int>> ml;
   vector<int> ans;
   for (int i = 1;i <= n;i++) {
      int t;
      cin >> t;
      if (t == 1) {
         int m;
         cin >> m;
         s.insert({ c,m });
         ml.insert({ m,-c });
         c++;
      }
      else if (t == 2) {
         int p = s.begin()->first, m = s.begin()->second;
         ans.push_back(p);
         s.erase(s.begin());
         ml.erase({ m,-p });
      }
      else {
         int p = -ml.rbegin()->second, m = ml.rbegin()->first;
         ans.push_back(p);
         ml.erase(--ml.end());
         s.erase({ p,m });
      }
   }

   for (auto v : ans) {
      cout << v << " ";
   }
   cout << endl;

   return 0;
}