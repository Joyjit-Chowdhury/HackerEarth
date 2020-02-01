#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    int n,m,g,i,j,sum = 0,count = 0;
    cin >> n >> m >> g;
    int t[n], a[m];
    
    for(i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    for(j = 0; j < m; j++)

    {
        cin >> a[j];
    }
    
    for(i = 1; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if((t[i] - t[i-1]) >= a[j] &&a[j]!=-1 )
            {
                a[j] = -1;
                count++;
            }
        }
    }
    
    cout << count;
    return 0;
}