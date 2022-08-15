//g++ -std=c++11 partition.cpp -o partition && ./partition
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void stable_partition_vector(vector<int>& vect){

    // will preserve the state
    stable_partition(vect.begin(), vect.end(), [](int x)
                     { return x % 2; });
}

void partition_vector(vector<int> &vect){

    //will not preserver the state 

    partition(vect.begin(), vect.end(), [](int x)
                     { return x % 2; });
}

void print_Vector(vector<int> &vect){
    for(auto it: vect)
        cout << it << " ";
}

int main()
{
    vector<int> vect = {1, 2, 3, 4, 5, 6, 7, 8};
    
    // stable Partition
    stable_partition_vector(vect);
    print_Vector(vect);
    return 0;
}