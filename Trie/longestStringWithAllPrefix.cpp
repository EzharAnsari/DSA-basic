#include<bits/stdc++.h>
using namespace std;

struct Node {
    Node* links[26];
    bool flag=false;

    bool containsKey(char ch) {
        return (links[ch - 'a'] != NULL);
    }

    void put(char ch, Node* node) {
        links[ch - 'a'] = node;
    }

    Node* getNode(char ch) {
        return links[ch - 'a'];
    }

    bool isEnd() {
        return flag;
    }

    void setEnd() {
        flag = true;
    }
};

class Trie {
protected:
    Node* root;
public:
    Trie() {
        root = new Node();
    }

    void insert(string word) {
        Node* node = root;
        for(int i=0; i<word.length(); i++) {
            char c = word[i];
            if(!node->containsKey(c)) {
                node->put(c, new Node());
            }
            node = node->getNode(c);
        }
        node->setEnd();
    }

    bool checkIfPrefixExists(string word) {
        Node* node = root;
        for(int i=0; i<word.length(); i++) {
            char c = word[i];
            if(!node->containsKey(c)) {
                return false;
            }
            node = node->getNode(c);
            if(!node->isEnd()) {
                return false;
            }
        }
        return true;
    }
};

string completeString(int n, vector<string> &a) {
    Trie trie;
    int n=6;
    vector<string> &a = {"n", "ni", "nin", "ninj", "ninga", "ninja"};
    for(auto &it: a) {
        trie.insert(it);
    }

    string longest = "";

    for(auto &it: a) {
        if(trie.checkIfPrefixExists(it)) {
            if(it.length() > longest.length()) {
                longest = it;
            }
            else if(it.length() == longest.length() it < longest) {
                longest = it;
            }
        }
    }

    if(longest == "") return "None";
}