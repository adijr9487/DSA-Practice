//g++ -std=c++11 Array_algo.cpp -o Array_algo && ./Array_algo
#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main()
{
    int arr[] = {2,4,6,8,-10,12};
    
    //to check if all eelement following something
    // all_of(arr, arr + 5, [](int x)
    //        { return x > 0; })
    //     ? cout << "All Positive"
    //     : cout << "All are not positive";

    // to check any of them are following something
    // any_of(arr, arr + 6, [](int x)
    //        { return x % 2; })
    //     ? cout << "Any of them is not divisible by 2"
    //     : cout << "All of them is divisible by 2";

    // if none of them are returning true 
    // none_of(arr, arr + 6, [](int x)
    //         { return x < 0; })
    //     ? cout << "None of them are less then 0"
    //     : cout << "Any of them is less then 0";

    
    return 0;
}