#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
 
    map<string, int> m;        // self balancing BST and key's are in the ordered
                               // insert, find, and erase all methods will take timem O(LogN)

    // Insert data into map
    m.insert(make_pair("Apple", 150));

    pair<string, int> p;
    p.first = "Mango";
    p.second = 100;
    m.insert(p);

    m["Banana"] = 10;

    // search
    string key;
    cin >> key;

    map<string, int>::iterator it = m.find(key);

    m[key] += 20;

    if(it != m.end()) {
        // m[key] += 20;                    // update the price
        cout << "Price of " << key << " is " << m[key] << endl;
    }
    else {
        cout << "Fruit is not present!" << endl;
    }

    // erase
    m.erase(key);

    // Another way to find a particular map
    // it stores unique keys only once
    if (m.count(key)) {
        cout << "Price is " << m[key] << endl;
    }
    else {
        cout << "Could't find "<< endl;
    }

    // Iterate over all the key and value
    for(auto it=m.begin(); it!=m.end(); it++) {
        pair p = (*it);
        // cout << "Key is "<< p.first<< " and value is " << p.second << endl;
        cout << "Key is "<< it->first<< " and value is " << it->second << endl;
    }

    // for each
    for(auto p:m) {
        cout << p.first << " : " << p.second << endl;
    }

    












    return 0;
}