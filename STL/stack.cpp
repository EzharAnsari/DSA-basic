#include<iostream>
#include<stack>
using namespace std;

int main() {

    stack<int> s;

    for(int i=1; i<=10; i++) {
        s.emplace(i);
    }

    cout << s.size() << endl;

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}