#include <iostream>
#include <vector>
using namespace std;

using VE = vector <int>;

int n,x;
VE v;


void f(int k) {
    if (k == n) {
	cout << '{';
	for (int i = 0; i < n; ++i) 
	    for (int j = 0; j < v[i]; ++j) 
		cout << (i || j ?  "," : "") << to_string(i+1);
	cout << '}' << endl;
    }
    else {
	for (int i = 0; i <= x; ++i) {
	    v[k] = i;
	    f(k+1); 
	}
    }
}

int main() {
    cin >> n >> x;
    v = VE (n);
    f(0);
}
