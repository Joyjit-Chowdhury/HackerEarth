#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int size_a, size_b;
    cin >> size_a;
    int a[size_a];
    for(int i = 0; i < size_a; i++)
    {
        cin >> a[i];
    }
    cin >> size_b;
    int c[size_b];
    for(int i = 0; i < size_b; i++)
    {
        cin >> c[i];
    }
    int y = max(a[size_a-1],c[size_b-1]);

    for(int i = 0; i < y; i++)
    {
        int w = 0;
        for(int j = 0; j < size_a; j++)
        {
            for(int k = 0; k < size_b; k++)
            {
                if(i + a[j] == c[k])
                {
                    w++;
                    break;
                }
            }
        }
        if(w==size_a)
            cout << i << " ";
    }
    return 0;
}