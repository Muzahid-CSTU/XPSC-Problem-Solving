#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int a = min(x,y);
	    cout << a%3 << endl;
	}
}
