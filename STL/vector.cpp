#include<iostream>
#include<vector>
using namespace std;

int main() {

    // Initialization of vector
    vector<int> a;
    vector<int>b(5, 10);     // five int with value is 10
    vector<int> c(b.begin(), b.end());
    vector<int> d{1,2,3,6,5};


    // iterate over the vector
    for(int i=0; i<c.size(); i++) {
        cout<<c[i]<<" ";
    }
    cout << endl;

    for(vector<int>::iterator it=c.begin(); it!=c.end(); it++) {
        cout<<*it<<" ";
    }
    cout << endl;

    // for each loop
    for(auto x:d) {
        cout <<x<<" ";
    }
    cout << endl;

    // some vector class methods
    int n;
    cin >> n;
    vector<int> v;

    for(int i=0; i<n; i++) {
        int temNo;
        cin >> temNo;
        v.push_back(temNo);   // insert an element at the end of vector O(1) (most of the case)
    }

    for(auto x:v) {
        cout <<x<<" ";
    }
    cout << endl;


    // understanding at memory level, what are the difference b/w 'v' vector and 'd' vector
    cout << v.size() << endl;  // 5
    cout << v.capacity() << endl;  // size of underling array  == 8
    cout << v.max_size()<< endl;   // max no of elements a vector can hold in the worst case acc to avbl memory in the system 

    cout << d.size() << endl;  // 5
    cout << d.capacity() << endl;  // size of underling array == 5
    cout << d.max_size()<< endl;   // max no of elements a vector can hold in the worst case acc to avbl memory in the system 

    // Pop back / Removes the last element O(1)
    d.pop_back();

    // isert an element at some position
    d.insert(d.begin()+3, 10);  // it will insert 10 at position 4  eg preVec = {1,2,3,4,5} after inserting curVec = {1,2,3,10,4,5}
    d.insert(d.begin()+3, 2, 10); // it will insert 2 elements having 10 as value from postion 4 eg preVec = {1,2,3,4,5} --> preVec = {1,2,3,10,10,5}

    // erase some elements in the middle
    d.erase(d.begin()+2);  // it will remove 1 element at index 3
    d.erase(d.begin()+2, d.begin()+5); // remove multiple elements

    // we avoid shrink
    d.resize(18);

    // remove all elements of the vector, does't delete the memory occupied by the array
    d.clear();

    // checking empty
    bool IsDEmpty= d.empty();

    // for getting first element of vector
    int first = d.front();

    // for getting last element of vector
    int last = d.back();

    // reserve
    // to avoid doubling, we will use reserve function
    v.reserve(1000);

    return 0;
}