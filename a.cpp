//g++ -std=c++11 a.cpp -o a && ./a
#include<bits/stdc++.h>

using namespace std;

int get_max(int n){
    int maxi = 0;
    while(n){
        maxi = max(maxi, n % 10);
        n /= 10;
    }
    return maxi;
}

int pattern(int n){
    int counter = 0;
    while(n){
        // cout << n << " ";
        n -= get_max(n);
        counter++;
    }
    return counter;
}

int main()
{
    map<int, int> m;
    for (int i = 1; i <= 1000; i++){
        int res = pattern(i);
        // cout << pattern(i) << " ";
        m[res]++;
    }
    cout << "\n\n\n\n";
    for(auto it: m){
        if(it.first%2==0)
        cout << it.first << " " << it.second << "\n";
    }
        return 0;
}