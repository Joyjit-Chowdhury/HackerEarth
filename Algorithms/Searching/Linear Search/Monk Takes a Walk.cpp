#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    int n,count_alpha = 0;
    cin >> n;
    string a;

    while(n--)
    {
        string s;
        cin >> s;
        int len = s.length();

        for(int i = 0; i < len; i++)
        {
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
               s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count_alpha++;
            }
        }
        cout << count_alpha << endl;
        count_alpha = 0;
    }
    
    return 0;

}
