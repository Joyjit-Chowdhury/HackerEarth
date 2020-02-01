#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    int loop, m, n;
    cin >> loop;
    vector <string> v;
    string s;

    for(int i = 0; i < loop; i++)
    {
        cin >> s >> m >> n;
        sort(s.begin()+m, s.begin()+n+1, greater<char>());
        v.push_back(s);
    }
    for(int i = 0; i < loop; i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}