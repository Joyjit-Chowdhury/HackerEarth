#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    string a,b;
    cin >> a >> b;
    int yes = 1;

    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] > b[i])
        {
           yes = 0;
           break;
        }
    }

    if(yes)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
