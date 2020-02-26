#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef vector<string> VS;
typedef vector<VS> VVS;
typedef vector<bool> VB;

VB  b;
VVS vvs;

void printVectors(VVS& vvs){
	for (int i = 0; i < (int)vvs.size(); ++i) {
		cout << "subset " << i+1 << ": {";
		for (int j = 0; j < (int)vvs[i].size(); ++j){
			if (j == (int)vvs[i].size()-1) cout << vvs[i][j];
			else cout << vvs[i][j] << ",";
		}
		cout << "}" << endl;
	}
	cout << endl;
}

void backtracking(int i, VVS& vvs, VS& vs){
	if (i == (int)vs.size()) printVectors(vvs);
	else{
		if (not b[i]){
			for (int j = 0; j < (int)vvs.size(); ++j){
				b[i] = true;
				vvs[j].push_back(vs[i]);
				backtracking(i+1, vvs, vs);
				vvs[j].pop_back();
				b[i] = false;
			}
		}
	}
}

int main () {
	int n; cin >> n;

	VS vs(n);
	b = VB(n);

	for (int i = 0; i < n; ++i)
		cin >> vs[i];

	cin >> n;

	VS vsn;
	vvs = VVS(n, vsn);

	backtracking(0, vvs, vs);
}

