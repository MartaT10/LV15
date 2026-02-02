#include <iostream>
using namespace std;

void a_ocjene();
void b_natjecanje();

int main()
{
    //a_ocjene();
    b_natjecanje();

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

void b_natjecanje() {
    int n, k; cin >> n >> k;
    int bodovi[100];

    for (int i = 0;i < n;i++) {
        cin >> bodovi[i];
    }

    for (int i = 0;i < n;i++) {
        if (bodovi[i] > bodovi[k - 1]) {
            cout << i + 1 << " ";
        }
    }
}