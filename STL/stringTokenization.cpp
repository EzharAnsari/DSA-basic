#include<iostream>
#include<cstring>
using namespace std;


// char *strtok(char *s, char *delimiters)

int main() {

    char s[100] = "I love learing data structure and algorithm";

    char *ptr = strtok(s, " ");
    cout << ptr << endl;

    ptr = strtok(NULL, " ");  // for accessing the second word we have to pass NULL as first argument (Internally strtok maintain stack for string)
    cout << ptr << endl;

    while(ptr != NULL) {
        ptr = strtok(NULL, " "),
        cout << ptr << endl;
    }


    return 0;
}