#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);

    int k;
    cin >> k;
    // it takes O(log(n)) used when array is sorted
    bool result = binary_search(arr, arr + n, k);

    if (result)
    {
        cout << k << " is found" << endl;
    }
    else
    {
        cout << k << " is not found" << endl;
    }

    // lower bound ( gives you the index of first occurence of >= key value)
    /*
    Input: 10 20 30 40 50
    Output: lower_bound for element 30 at index 2

    Input: 10 20 30 40 50
    Output: lower_bound for element 35 at index 3

    Input: 10 20 30 40 50
    Output: lower_bound for element 55 at index 5 (Basically, 55 is not present, so it returns end() iterator)

    Input: 10 20 30 30 30 40 50
    Output: lower_bound for element 30 at index 2
    */

    int arr1[] = {1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9, 10};
    int n1 = sizeof(arr1) / sizeof(int);

    auto it1 = lower_bound(arr1, arr1 + n1, 5);
    cout << it1 - arr1;

    // Upped bound (gives you the index of first occurence of > key value)
    /*
    Input : 10 20 30 30 40 50
    Output : upper_bound for element 30 is at index 4

    Input : 10 20 30 40 50
    Output : upper_bound for element 45 is at index 4

    Input : 10 20 30 40 50
    Output : upper_bound for element 60 is at index 5
    */

    int arr2[] = {1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9, 10};
    int n2 = sizeof(arr2) / sizeof(int);

    auto it2 = upper_bound(arr2, arr2 + n2, 5);
    cout << it2 - arr2;

    // if you to find the frequecy of any key the subtract upper-bound-value to lower-bound-value
    // here ub = 7 and lb = 4 and it's differnce is 3 and it is also the frequency of key(5)

    return 0;
}