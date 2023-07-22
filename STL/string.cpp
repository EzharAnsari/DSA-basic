#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

void stringSorting();
bool compare(string, string);

bool compare(string s1, string s2) {
    if(s1.length() == s2.length()) {
        return s1>s2;
    }
    return s1.length() > s2.length();
}

int main() {

    // initialization string
    string s0;

    string s1("Hello world!");
    string s2 = "Hello world too!";

    string s3(s1);
    string s4 = s2;

    char a[] = {'a', 'b', 'c', 'd', '\0'};
    string s5(a);
    string s6 = a;

    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;

    // check string is empty or not
    if(s0.empty()) {
        cout << "Yes this string is empty" << endl;
    }

    // Append
    s0.append("We are added this whole string");
    s0 += " and this way";
    cout << s0 << endl;

    // clearing whole string
    cout << s0.length() << endl;
    s0.clear();
    cout << s0.length() << endl;

    // compare two string
    string s11 = "apple";
    string s21 = "mango";
    cout << s11.compare(s21) << endl;

    // overloaded operator operators
    if (s11 > s21) {
        cout << "apple is lexicographically greater than mango" << endl;
    }
    else {
        cout << "apple is lexicographically smaller than mango" << endl;
    }

    // accessing element by its index
    cout << s11[2] << endl;

    // find substring in a string
    string s = "I want to have apple juice";
    int idx = s.find("apple");
    cout << idx << endl;

    // Remove a substring from a string
    string subs = "apple";
    int len = subs.length();
    cout << s << endl;
    auto res = s.erase(idx, len+1);
    cout << s << endl;
    cout << res << endl;

    // iterate over all the characters in the string
    // using for loop 
    for(int i=0; i<s.length(); i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    for(string::iterator it=s.begin(); it != s.end(); ++it) {   // here we can use auto
        cout << (*it) << " * ";
    }
    cout << endl;

    for (char c:s) {    // here we can also use auto
        cout << c << ",";
    }
    cout << endl;

    stringSorting();

    return 0;
}


void stringSorting() {
    int n;
    cin >> n;
    cin.get();
    string s[100];
    for (int i=0; i<n; i++) {
        getline(cin, s[i]);
    }

    sort(s, s+n, compare);
    for (int i=0; i<n; i++) {
        cout << s[i] << endl;
    }
}