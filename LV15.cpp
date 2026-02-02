#include <iostream>
using namespace std;

void a_ocjene();
void b_natjecanje();
void c_artefakt();

int main()
{
    //a_ocjene();
    //b_natjecanje();
    c_artefakt();

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

void c_artefakt() {
    int n, pi; cin >> n;
    int p[10];

    int najmanji = 101;
    bool jedinstven = false;


    for (int i = 0;i < n;i++) {
        cin >> p[i];
    }

    for (int i = 0;i < n;i++) {
        if (p[i] < najmanji) {
            jedinstven = true;
            for (int j = 0;j < n;j++) {
                if (p[i] == p[j] && i != j) {
                    jedinstven = false;
                }
            }
            if (jedinstven) {
                najmanji = p[i];
            }

        }
    }
    cout << najmanji;
}