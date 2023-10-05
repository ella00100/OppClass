#include <iostream>
using namespace std;

int addmult(int ii, int jj, int ctrl);

int main() {
    int i = 3, j = 4, k, l;
    k = addmult(i, j, 0);
    l = addmult(i, j, 1);
    cout << "\n" << k << ", " << l << endl;

    return 0;
}

int addmult(int ii, int jj, int ctrl) {
    int kk, ll;
    kk = ii + jj;
    ll = ii * jj;
    if (ctrl == 0) return kk;
    else return ll;
}