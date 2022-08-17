// g++ -std=c++11 median_sorted.cpp -o median_sorted && ./median_sorted
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getMedia(int arr1[], int arr2[], int n, int m)
{
    int a = 0;
    int b = 0;
    int end = (n + m) / 2 ;
    int curr = 0;
    int pre = 0;
    int arr[end] = {};
    int k = 1;
    while(a+b<=end){
        if(a < n && b < m){
            if(arr1[a] < arr2[b]){
                // cout << arr1[a] << " ";
                a++;
                arr[k++] = arr1[a];
            }else{
                // cout << arr2[b] << " ";
                b++;
                arr[k++] = arr2[b];
            }
        }else if(a < n){
            // cout << arr1[a] << " ";
            a++;
            arr[k++] = arr1[a];
        }else{
            // cout << arr2[b] << " ";
            b++;
            arr[k++] = arr2[b];
        }
    }
    // cout << a << " " << b << "\n";
    for (int i = 0; i < k; i++){
        cout << arr[i] << " ";
    }
        return 1;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {-2, 3, 8, 9, 11};

    getMedia(arr1, arr2, 5, 4);
    return 0;
}

// 1   11--    21      31       41      51      61       71       81        91       101--    111--   121--  131--     
// 2   12      22--    32       42      52      62       72       82        92       102      112--   122--  132  
// 3   13      23      33--     43      53      63       73       83        93       103      113--   123    133--
// 4   14      24      34       44--    54      64       74       84        94       104      114--   124    134
// 5   15      25      35       45      55--    65       75       85        95       105      115--   125    135
// 6   16      26      36       46      56      66--     76       86        96       106      116--   126   
// 7   17      27      37       47      57      67       77--     87        97       107      117--   127   
// 8   18      28      38       48      58      68       78       88--      98       108      118--   128   
// 9   19      29      39       49      59      69       79       89        99--     109      119--   129   
// 1   20      30      40       50      60      70       80       90        100--    110--    120--   130   
