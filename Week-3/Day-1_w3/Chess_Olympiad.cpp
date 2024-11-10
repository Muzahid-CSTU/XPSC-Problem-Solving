#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y,z;
    cin >> x >> y >> z;
    int mb = 4 - (x + y + z);
    float a = x + y*0.5;
    float b = z + y*0.5;
    if( mb > (b-a)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
