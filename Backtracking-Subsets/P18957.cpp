#include <iostream>
#include <vector>
using namespace std;

using VS = vector<string>;
using VB = vector<bool>;

VS v;
VB b;
int n;

void f(int k) {
    if (k == n) { //acabar
	int count = 0;
	cout << '{';
	for (int i = 0; i < n; ++i)
	    if (b[i]) {
	        cout << (count ? "," + v[i] : v[i]);
		++count;
	    }
	cout << "}" << endl;
    }
    else {
	b[k] = 0; f(k+1);
	b[k] = 1; f(k+1);
    }
}


int main() {
    cin >> n;
    v = VS(n);
    b = VB(n);
    for (int i = 0; i < n; ++i)
	cin >> v[i];
    f(0);
}
