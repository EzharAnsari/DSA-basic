#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

int main1() {
    
    priority_queue<int> pq_max;  // default priority queue are based on maxHeap you can change that using comparator
    priority_queue<int, vector<int>, greater<int>> pq;            // this is based on minHeap

    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int no;
        cin >> no;
        pq.push(no);  // O(LogN)
    }

    while(!pq.empty()) {
        cout << pq.top() << " ";    // O(1)
        pq.pop();  // O(LogN)
    }
    
    
    return 0;
}

class Person {
public:
    string name;
    int age;

    Person() {}
    Person(string s, int n) {
        name = s;
        age = n;
    }
};

class PersonCompare {
    public:
    bool operator() (Person A, Person B) {
        return A.age < B.age;
    }
};

int main() {

    priority_queue<Person, vector<Person>, PersonCompare > pq;

    int n;
    cin >> n;

    for (int i=0; i< n; i++) {
        string s;
        int a;
        cin >> s >> a;
        Person p(s, a);
        pq.push(p);
    }

    // find top 3 oldest Person
    int k=3;
    for(int i=0; i<k; i++) {
        Person newPer = pq.top();
        cout << newPer.name << "  " << newPer.age << endl;
        pq.pop();
    }


    return 0;
}