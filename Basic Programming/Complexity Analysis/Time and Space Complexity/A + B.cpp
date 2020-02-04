#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>

using namespace std;
using boost::multiprecision::cpp_int;

int main()
{
    cpp_int a, b;
    
    while(cin >> a>> b)
    {
        cout << a+b << "\n";
    }
}

/*
Boost libraries are intended to be widely useful, and usable across a broad spectrum of applications. For example, 
they are helpful for handling large numbers having range beyond the long long, long double data type (264) in C++.

for more details check:
-----------------------

https://www.geeksforgeeks.org/advanced-c-boost-library/
*/
