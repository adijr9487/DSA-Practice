// g++ -std=c++11 valarray.cpp -o valarray && ./valarray
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void apply_method(valarray<int> &val)
{
    // apply an operation of each element
    // or the conditional ones

    val = val.apply([](int x)
                    { return (x > 13) ? x += 5 : x += 10; });
}

void print_array(valarray<int> &val){
    for(auto it: val)
        cout << it << " ";
}

int main()
{
    valarray<int> val = {10, 20, 15, 11};

    apply_method(val);
    print_array(val);

    val.sum();
    val.max();
    val.min();

    

    return 0;
}