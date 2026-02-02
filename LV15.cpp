#include <iostream>
using namespace std;

void a_ocjene();

int main()
{
    a_ocjene();

    return 0;
}


void a_ocjene() {
    int bocjena; cout << "Upisi broj ocjena: "; cin >> bocjena;

    int niz_1f[30];
    for (int i = 0;i < bocjena;i++) {
        cin >> niz_1f[i];
    }
    int niz_1g[30];
    for (int i = 0;i < bocjena;i++) {
        cin >> niz_1g[i];
    }

    for (int i = 0;i < bocjena;i++) {
        if (niz_1f[i] > niz_1g[i]) cout << "1.F ";
        else if (niz_1f[i] < niz_1g[i]) cout << "1.G ";
        else cout << "ISTO ";
    }

}