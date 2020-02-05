#include<iostream>
using namespace std;

int main()
{
    int x, y, s, t, step=0;
    cin >> x >> y >> s >> t;
    
    for(int i = x; i <= x+s; i++)
    {
        for(int j = y; j <= y+s; j++)
        {
            if((i+j)<=t)
            {
                step++;
            }
        }
    }
    cout << step;
    return 0;
}