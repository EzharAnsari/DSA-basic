#include <bits/stdc++.h>
using namespace std;
void pattern1()
{
	int n,i,j ;
	cin >> n;
	for( i=1; i<=n; i++) {
		// spaces
		for(j=1; j<=n-i; j++) {
			cout<<" ";
		}
		// increasing numbers
		for( j=0; j<i; j++) {
			cout << i+j;
		}
		// decreasing numbers
		for( j=0; j<i-1; j++) {
			cout << 2*i-j-2;
		}
		// spaces
		for( j=1; j<=n-i; j++) {
			cout<<" ";
		}
		cout<<"\n";
	}
}
void pattern2()
{
	int n,i,j ;
	cin >> n;
	for( i=1; i<=n; i++) {
		// spaces
		for(j=1; j<=n-i; j++) {
			cout<<" ";
		}
		// increasing numbers
		for( j=0; j<i; j++) {
			cout << i+j;
		}
		cout<<"\n";
	}
}
void pattern3()
{
	int n,i,j;
	cin >> n;
	
	for(i=1; i<=n; i++) {
		// numbers
		for(j=1; j<=i; j++) {
			cout << j;
		}

		// spaces
		for(j=1; j<=2*(n-i); j++)
			cout << " ";
		
		// numbers
		for(j=i; j>0; j--) {
			cout << j;
		}
		cout << "\n";
	}
}

void pattern4() {
	int n, i, j;
	cin >>n;
	for(i=1; i<=(n+1)/2; i++) {
		// spaces
		for(j=1; j<i; j++)  cout << "-";

		// for * patterns
		for(j=1; j<=(2*i-1); j++) {
			if(j%2 == 1) cout << "*";
			else cout << "-";
		}
		cout << "\n";
	}
	i = n/2;
	for(i; i>0; i--) {
		// spaces
		for(j=1; j<i; j++)  cout << "-";

		// for * patterns
		for(j=1; j<=(2*i-1); j++) {
			if(j%2 == 1) cout << "*";
			else cout << "-";
		}
		cout << "\n";
	}
}

int main() {
	pattern4();
	return 0;
}