//g++ -std=c++11 valarray.cpp -o valarray && ./valarray
#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main()
{
    valarray<int> val = {10, 20, 15, 11};

    val = val.apply([](int x)
                    { return (x > 13 ) ? x += 5 : x += 10; });
    for(auto it: val)
        cout << it << " ";

    
    return 0;
}