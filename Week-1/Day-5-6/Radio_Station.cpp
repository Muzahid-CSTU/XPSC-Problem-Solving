#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<pair<string,string>> pn(n);
    vector<pair<string,string>> pm(m);
    for(int i=0;i<n;i++){
        cin >> pn[i].first >> pn[i].second;
    }
    for(int i=0;i<m;i++){
        cin >> pm[i].first >> pm[i].second;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            string s = pm[i].second;
            s.pop_back();
            if(s == pn[j].second){
                cout<< pm[i].first <<' ' << pm[i].second << ' ' << '#' << pn[j].first << endl;
            }
        }
    }
}