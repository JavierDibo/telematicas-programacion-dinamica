#include <stdio.h>
#include "ivector.h"

// Ejercicio 1
int stern(int n) {

    ivector vec = icreavector(n + 1);

    vec[0] = 0;
    vec[1] = 1;

    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            vec[i] = vec[i / 2];
        } else {
            vec[i] = vec[(i - 1) / 2] + vec[(i - 1) / 2 + 1];
        }
    }

    int resultado = vec[n];

    ifreevector(&vec);

    return resultado;
}

//Ejercicio 2
int tarificacionPostal(int t, int j) {

    ivector vec = icreavector(n + 1);

    vec[0] = 0;
    vec[1] = 1;

    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            vec[i] = vec[i / 2];
        } else {
            vec[i] = vec[(i - 1) / 2] + vec[(i - 1) / 2 + 1];
        }
    }

    int resultado = vec[n];

    ifreevector(&vec);

    return resultado;

}
int main() {
    int n = 30;

    stern(n);

    return 0;
}
