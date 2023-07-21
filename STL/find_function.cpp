#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 4, 8, 6, 9, 4, 5, 7};
    int n = sizeof(arr) / sizeof(int);

    int k;
    cin >> k;

    auto it = find(arr, arr+n, k);
    int ind = it - arr;
    if(ind == n) {
        cout << k << " is not found" << endl;
    }
    else {
        cout << k<< " is found and it's index is "<< ind << endl;
    }

    return 0;
}