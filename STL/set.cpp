/*
    used to store unique collection of elements.
    Set elements are ordered in nature.
    It uses Red Black tree as its underlying data structure.  

    The common operations take O(logn) time.
    You can't update the elements.
    Remove the old element and push the new element in the set.
*/
#include <iostream>
#include <set>
using namespace std;

int main() {

    int arr[] = {10, 20, 11, 9, 8, 11, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    set<int> s;
    for(int i = 0; i < n; i++) 
        s.insert(arr[i]);
    
    // removing an element
    s.erase(10);
    auto it = s.find(20);
    s.erase(it);
    
    for(set<int>::iterator it = s.begin(); it != s.end(); it++) 
        cout << *it << " ";
    cout << endl;

    return 0;
}
int main1() {

    // pairs are going to be sorted according to their first value and then second value

    set< pair<int, int> > s;
    // insert elements
    s.insert({10, 1});
    s.insert({10, 5});
    s.insert({20, 1});
    s.insert({20, 100});
    s.insert({5, 1});
    s.insert({5, 3});
    s.insert({5, 2});

    // erase element
    if(s.find(make_pair(5, 3)) != s.end()) {
        s.erase(make_pair(5, 3));
        s.insert(make_pair(5, 5));
    }
    
     cout << "size of the set : " << s.size() << endl; 

    // print the set
    // for(auto it = s.begin(); it != s.end(); it++) 
    //     cout << it->first << " " << it->second << endl;
   
    for(pair<int, int> p : s) 
        cout << p.first << " " << p.second << endl;

    //auto ub = s.upper_bound({10, 1}); // {10,5}
    auto ub = s.upper_bound({10, INT_MAX}); // {20,5}
    if(ub != s.end()) 
        cout << ub -> first << " " << (*ub).second << endl;

    

    return 0;
}