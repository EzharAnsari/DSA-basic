#include<iostream>
#include<list>
#include<string>
using namespace std;

int main() {

    list<int> l;

    // Initialize
    list<int> l1{1, 2,4,5,7};

    list<string> l2 = {"apple", "mango", "pineapple", "banana"};

    // inserting an element at end of list
    l2.push_back("guava");

    // sort
    l2.sort();

    // reverse
    l2.reverse();

    // pop front
    cout << l2.front() << endl;
    l2.pop_front();

    // add to front list
    l2.push_front("kiwi");
    cout << l2.back() << endl;
    l2.pop_back();

    l2.push_back("orange");
    l2.push_back("guava");

    // remove element
    string f = "guava";
    l2.remove(f);              // It will remove all occurance of guava string;  this is also acceptable l2.remove("orange")

    // erase one or more elements
    auto it = l2.begin();
    it++; it++;            // we can't direct access in list just like vector or arrayy  means list[3] is not acceptable
    l2.erase(it);

    // We can insert element in the list
    it = l2.begin();
    it++;
    l2.insert(it, "apple");

    // Iterate over the list
    for(auto s:l2) {
        cout << s << " ->";
    }
    cout << endl;

    for(auto it=l2.begin(); it!=l2.end(); it++) {      // list<string>::iterator
        cout << (*it) << " -->";
    }
    cout << endl;

    return 0;
}