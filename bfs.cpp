//g++ -std=c++11 bfs.cpp -o bfs && ./bfs
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void print(vector<int>& v){
    for(auto it: v)
        cout << it << " ";
    cout << "\n";
}

int main()
{
    vector<int> va = {1, 2, 4, 5, 7, 8, 5, 4};
    print(va);
    va.clear();
    va.resize(3, 1);
    print(va);
    return 0;
}