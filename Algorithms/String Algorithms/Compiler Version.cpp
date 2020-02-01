#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    char str[68];

    while(gets(str)!=NULL)
    {
        int len = strlen(str);

        for (int i = 0; i < len; i++)
        {
            if (str[i] == '/' && str[i+1] == '/')
            {
                break;
            }
            if (str[i] == '-' && str[i+1] == '>')
            {
                str[i] = '.';
                for (int j = i+1; j < len; j++)
                {
                    str[j] = str[j+1];
                }
                len--;
            }
        }
        //cout << str << endl;
        puts(str);
    }
    return 0;
}