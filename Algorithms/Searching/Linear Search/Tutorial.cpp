#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int i,num,k=-1,n;

    cin>>num>>n;
    int arr[num];
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<num; i++)
    {
        if(arr[i]==n)
        {
            k=i+1;
            //cout<<i;
        }
    }
    if(k!=-1)
        cout<<k<<endl;
    
return 0;
}