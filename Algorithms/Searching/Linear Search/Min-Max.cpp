#include<bits/stdc++.h>
using namespace std;

typedef long long int lln;
int main()
{
    ios::sync_with_stdio(0);

    lln arr[100001];
    lln max = 0, min = 0;
    int i,n;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    sort(arr,arr + n );
    for(i = 0; i < n-1; i++)
    {
        max = max + arr[i];
    }
    for(i = 1; i < n; i++){
        min = min + arr[i];
    }

    cout << max << " " << min;
    return 0;
}