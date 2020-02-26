#include <iostream>
#include <vector>

using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre) {
	/* Feu una funciรณ recursiva eficient que retorni la posiciรณ on es troba x dins del 
	 * subvector v[esq..dre]. Si x no pertany a v[esq..dre] o si esq > dre, cal retornar -1.*/
	 
    if (esq > dre ) return -1;
    int mid = (esq+dre)/2;
    if (x < v[mid]) return posicio(x,v,esq,mid-1);
    if (x > v[mid]) return posicio(x,v,mid+1,dre);
    return mid;
}
 
 
int main() {
    return 0;	
	
}
