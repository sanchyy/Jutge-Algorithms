#include <iostream>
#include <vector>
using namespace std;

using VF = vector <float>;
void f() {

}

int main() {
    int n; 
    while (cin >> n) {
        VF v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        f();

    }
    
}
