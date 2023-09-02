#include<bits/stdc++.h>
using namespace std;

struct Node{
	Node* links[26];
	bool flag = false;
	int ew = 0;
	int cp = 0;

	bool containKey(char ch) {
		return (links[ch - 'a'] != NULL);
	}

	void put(char ch, Node* node){
		links[ch - 'a'] = node;
	}

	Node* get(char ch) {
		return links[ch - 'a'];
	}

	void increaseEW() {
		ew++;
	}

	void increaseCP() {
		cp++;
	}

	int getEW() {
		return ew;
	}

	int getCP() {
		return cp;
	}

	void reduceCP() {
		cp--;
	}
	
	void reduceEW() {
		ew--;
	}

};

class Trie {
private:
	Node* root;
public:
	Trie() {
		root = new Node();
	}

	void insert(string word) {
		Node* node = root;
		for(int i=0; i<word.length(); i++) {
			if(!node -> containKey(word[i])) {
				node->put(word[i],new Node());
			}
			node = node->get(word[i]);
			node->increaseCP();
		}
		node->increaseEW();
	}

	int countWordsEndWith(string word) {
		Node* node = root;
		for(int i=0; i<word.length(); i++) {
			if(!node->containKey(word[i])) {
				return 0;
			}
			node = node->get(word[i]);
		}
		return node->getEW();
	}

	int countWordsStartWith(string word) {
		Node* node = root;
		for(int i=0; i<word.length(); i++) {
			if(!node->containKey(word[i])) {
				return 0;
			}
			node = node->get(word[i]);
		}
		return node->getCP();
	}

	void erase(string word) {
		Node* node = root;
		for(int i=0; i<word.length();i++) {
			if (node -> containKey(word[i])) {
				node = node -> get(word[i]);
				node -> reduceCP();
			} else {
				return;
			}
		}
		node->reduceEW();
	}

	bool search(string word) {
		Node* node = root;
		for(int i=0;i<word.length(); i++) {
			if(!node->containKey(word[i])) {
				return false;
			}
			node = node->get(word[i]);
		}

		return (node->getEW() > 0);
	}

	bool startsWith(string word) {
		Node* node = root;
		for(int i=0; i<word.length(); i++) {
			if(!node->containKey(word[i])) {
				return false;
			}
			node = node->get(word[i]);
		}
		return true;
	}
};

int main() {
  Trie T;
  T.insert("apple");
  T.insert("apple");
  T.insert("apps");
  T.insert("apps");
  string word1 = "apps";
  cout<<"Count Words Equal to "<< word1<<" "<<T.countWordsEndWith(word1)<<endl;
  string word2 = "abc";
  cout<<"Count Words Equal to "<< word2<<" "<<T.countWordsEndWith(word2)<<endl;
  string word3 = "ap";
  cout<<"Count Words Starting With "<<word3<<" "<<T.countWordsStartWith(word3)
  <<endl;
  string word4 = "appl";
  cout<<"Count Words Starting With "<< word4<<" "<<T.countWordsStartWith(word4)
  <<endl;
  T.erase(word1);
  cout<<"Count Words equal to "<< word1<<" "<<T.countWordsEndWith(word1)<<endl;
  return 0;
}