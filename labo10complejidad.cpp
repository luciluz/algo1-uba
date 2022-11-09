#include "ejercicios.h"

using namespace std;

int main() {
    // vectores asc
    vector<int> v;
    ofstream fout;
    fout.open("datos.csv");
    fout << "n\t" << "tiempo" << endl;

    for(int n = 0; n <= 1000; n+=100){
        v = construir_vector(n, "asc");
        double t0 = clock();
        bool res = hayDuplicados(v);
        double t1 = clock();
        double tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
        fout << n << "\t" << tiempo << endl;
    }
    fout.close();
    return 0;
}
