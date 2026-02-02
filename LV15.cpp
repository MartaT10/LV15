#include <iostream>
using namespace std;

void a_ocjene();
void b_natjecanje();
void c_artefakt();
void d_orehnjaca();
void e_brojevi();

int main()
{
    //Marta Topolnjak 1.RM

    //a_ocjene();
    //b_natjecanje();
    //c_artefakt();
    //d_orehnjaca();
    //e_brojevi();

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
    int n; cin >> n;
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

void d_orehnjaca() {
    int l, n, p, k; cin >> l >> n;
    int orehnjaca[1000] = {0};
    int izlaza = 0, najvecia = 0, izlazb = 0, najvecib = 0, brojac;

    for (int i = 1;i <= n;i++) {
        cin >> p >> k;
        if (k - p > najvecia) {
            najvecia = k - p;
            izlaza = i;
        }

        brojac = 0;
        for (int j = p - 1;j < k;j++) {
            if (orehnjaca[j] == 0) {
                brojac++;
                orehnjaca[j] = i;
            }
        }

        if (brojac > najvecib) {
            najvecib = brojac;
            izlazb = i;
        }
    }
    cout << izlaza << endl << izlazb;
}

void e_brojevi() {
    int n, broj; cin >> n;
    int najveci = 0;
    int skoro_najveci = 0;

    for (int i=0; i < n;i++) {
        cin >> broj;
        
        if (broj > najveci) {
            skoro_najveci = najveci;
            najveci = broj;
        }
        else if (broj < najveci && broj > skoro_najveci) {
            skoro_najveci = broj;
        }
    }
    cout << skoro_najveci;
}