#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    string s;
    int n;
    cin >> n;
    
    while(n--)
    {
        cin >> s;
        
        if((s.find("21") != string::npos)|| (stoi(s) % 21 == 0))
        {
            cout<<"The streak is broken!\n";
        }
        else
        {
            cout<<"The streak lives still in our heart!\n";
        }
    }
    return 0;
}