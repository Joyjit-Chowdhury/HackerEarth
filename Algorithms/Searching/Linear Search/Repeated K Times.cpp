#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    int a[100001];
    int n, k;
    cin >> n;
    int b;
    
    for(int i = 0; i < n; i++)
    {
        cin >> b;
        a[b-1]++;
    }
    
    cin >> k;
    for(int i = 0; i < 100001; i++)
    {
        if(a[i] == k)
        {
            cout << i+1;
            break;
        }
    }
    
    return 0;
}