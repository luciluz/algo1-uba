//Ejercicios de labo 1, taller de programación c++

//Ej 2

# include <iostream>

int main() {
    int x = 0;
    int y = 0;
    std::cout << "Ingrese dos valores enteros" << std::endl;
    std::cin >> x;
    std::cin >> y;
    std::cout << "La suma de ambos es igual a " << x+y << std::endl;
    return 0;
}


/*Ejercicio 3. Modificar el programa anterior para que f tome
dos parámetros x e y de tipo int y los sume sólo si x > y, en
        caso contrario el resultado será el producto.
*/
# include <iostream>
int f(int x, int y) {
    int res=0;
    if (x>y) {
        res = x+y;
    } else {
        res = x*y;
    }
    return res;
}
int main () {
    int s=0;
    int t=0;
    std::cout << "Ingrese dos valores enteros" << std::endl;
    std::cin >> s;
    std::cin >> t;
    std::cout << "el resultado es: " << f(int (s), int (t)) << std::endl;
    return 0;
}


Ej 4

# include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Ingrese un número natural mayor a cero";
    cin >> x;
    bool primo = true;
    for(int i = 2 ; i < x ; i++) {
        if(x % i == 0) primo = false;

    }
    if (primo == true) cout<<"el número es primo";
    else cout<<"el número no es primo";
    return 0;
}

Ej 4 (otra opcion, no esta terminada)

# include <iostream>
# include <math.h>
using namespace std;

bool esPrimo(int n);
int main() {
    int n;
    int p;
    cin >> n;
    if (esPrimo(n)) cout <<"Es primo" << endl;
    else cout << "No es primo" << endl;
}
bool esPrimo(int n) {
    bool p=true;
    int d=2;
    if(n<2) p=false;
    else {
        while(p && d<=sqrt(n)) {
            if(n%d == 0) {
