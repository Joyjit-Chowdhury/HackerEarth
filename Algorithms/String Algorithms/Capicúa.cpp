#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    string a,b;
    
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        b.clear();
        for(int j = a.size()-1; j >=0 ; j--)
        {
            b.push_back(a[j]);
        }
        if(a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}