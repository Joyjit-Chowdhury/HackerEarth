#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    string n;
    int count_zero = 0, count_one = 0, count_two = 0, count_three = 0, count_four = 0, count_five = 0, count_six = 0,
            count_seven = 0, count_eight = 0, count_nine = 0;
    cin >> n;
    for(int i = 0; i < n.size(); i++)
    {
        switch(n[i])
        {
            case '0':
                count_zero++;
                break;
            case '1':
                count_one++;
                break;
            case '2':
                count_two++;
                break;
            case '3':
                count_three++;
                break;
            case '4':
                count_four++;
                break;
            case '5':
                count_five++;
                break;
            case '6':
                count_six++;
                break;
            case '7':
                count_seven++;
                break;
            case '8':
                count_eight++;
                break;
            case '9':
                count_nine++;
                break;
        }
    }

    cout << "0 " << count_zero << endl;
    cout << "1 " << count_one << endl;
    cout << "2 " << count_two << endl;
    cout << "3 " << count_three << endl;
    cout << "4 " << count_four << endl;
    cout << "5 " << count_five << endl;
    cout << "6 " << count_six << endl;
    cout << "7 " << count_seven << endl;
    cout << "8 " << count_eight << endl;
    cout << "9 " << count_nine << endl;

    return 0;
}