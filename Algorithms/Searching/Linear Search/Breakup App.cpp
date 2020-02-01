#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n, count_19=0, count_21=0;
    cin>>n;
    while(n--)
    {
        string s;
        getline(cin,s);
        if(s[0]=='G')
        {
            for(int i = 0; s[i] != '\0'; i++)
            {
                if(s[i] == '1' && s[i+1] == '9' || s[i] == '2' && s[i+1] == '0')
                {
                    count_19 += 2;
                }
                else if(s[i] >= '0' && s[i] <= '9' && s[i+1] >= '0' && s[i+1] <= '9')
                {
                    count_21 += 2;
                }
            }
        }
        if(s[0] == 'M')
        {

            for(int i = 0; s[i] != '\0'; i++)
            {
                if(s[i] == '1' && s[i+1] =='9' || s[i] == '2' && s[i+1] == '0')
                {
                    count_19++;
                }
                else if(s[i] >= '0' && s[i] <= '9' && s[i+1] >= '0' && s[i+1] <= '9')
                {
                    count_21++;
                }
            }
        }
    }
    if(count_19 > count_21)
    {
        cout <<"Date";
    }
    else
    {
        cout<<"No Date";
    }
    return 0;
}