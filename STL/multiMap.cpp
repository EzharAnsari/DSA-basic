#include<iostream>
#include<map>
#include<cstring>
using namespace std;

int main() {

    multimap<char, string> m;
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        char c;
        string s;
        cin >> c >> s;
        m.insert(make_pair(c, s));
    }

    // erase
    auto it = m.begin();
    // m.erase(it);

    auto it1 = m.lower_bound('b');
    auto it2 = m.upper_bound('d');
    for(auto it3 = it1; it3!=it2; it3++) {
        cout << it3->first << " : " << it3->second << endl;
    }

    // find key and value
    auto f = m.find('b');
    while(f->second != "bu0sy" && f!=m.end()) {
        // f++;
        cout << f->second << endl;
        f++;
    }
    m.erase(f);

    // print all element from the map
    for(auto p:m) {
        cout << p.first << " -> " << p.second << endl;
    }




    return 0;
}