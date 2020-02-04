#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    int n, a[11], b[11];
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] < b[i])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}