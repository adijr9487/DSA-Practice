// g++ -std=c++11 merge_sort.cpp -o merge_sort && ./merge_sort
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

vector<int> merge(vector<int> v1, vector<int> v2)
{
    int left = 0;
    int right = 0;
    vector<int> res;
    while (left < v1.size() && right < v2.size())
    {
        if (v1[left] <= v2[right])
        {
            res.push_back(v1[left++]);
        }
        else
        {
            res.push_back(v2[right++]);
        }
    }
    if (right < v2.size())
    {
        res.insert(res.end(), v2.begin() + right, v2.end());
    }
    else if (left < v1.size())
    {
        res.insert(res.end(), v1.begin() + left, v1.end());
    }
    return res;
}

vector<int> divide(vector<int> &v, int start, int end)
{
    if (start == end)
    {
        return vector<int>{v[start]};
    }

    int mid = (start + end) / 2;

    vector<int> left = divide(v, start, mid);
    vector<int> right = divide(v, mid + 1, end);

    return merge(left, right);
}

// void generating_vector(vector<int> &v, int range, int size){
//     for (int i = 0; i < size; i++){
//         v.push_back()
//     }
// }

int main()
{

    vector<int> v = {5, 2, 4, 5, 1, 4, 6, 8, 12, 523, 64, 23, 62};


    auto start = high_resolution_clock::now();
    
    v = divide(v, 0, v.size());
    
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
   
    for (auto it : v)
        cout << it << " ";

    cout << "\n"
         << duration.count() << " ";
    return 0;
}