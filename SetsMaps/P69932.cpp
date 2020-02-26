#include <iostream>
#include <set>
#include <sstream>
using namespace std;


int main() {
    int n;
    string s;
    while (getline(cin,s)) {
        istringstream ss(s);
        set <int> list;
        while (ss >> n) 
            list.insert(n);
        set<int>::const_iterator it1,it2,aux;

        it1 = it2 = list.begin();

        while (it2 != list.end()) {
            if (it1 == it2) 
                ++it2;
            else {
                if ((*it1 + *it2) % 2 != 0) { //No mateixa paritat
                    ++it1;
                    ++it2;
                }
                else {
                    aux = it2;
                    ++it2;
                    list.erase(aux);
                }
            }
        }
        cout << list.size() << endl; 
    }
}
