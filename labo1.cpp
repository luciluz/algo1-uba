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
    bool esPrimo = true;
    if(x==1) {
        esPrimo = false;
    } else {
        for(int i = 2 ; i < x ; i++) {
            if(x % i == 0){
                esPrimo = false;
            }

        }    
    }
    
    if (esPrimo) {
        cout<<"el número es primo";
    } else{
        cout<<"el número no es primo";  
    }
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

Ej 5
# include <iostream>
using namespace std;

int fibonacci(int n) {
   int b = 0;
   int c = 1;
   int sum = b + c;
   int i = 2;

   if(n<=1) {
       return n;
    } else {
       while(i<=n) {
           sum = b + c;
           i = i + 1;
           b = c;
           c = sum;
       }
       return sum;
   }

}
int main() {
    int x;
    cout << "dale poné un número si sos tan canchero";
    cin >> x;
    cout << fibonacci(int (x)) << endl;
    return 0;
}

Ej 6
# include <iostream>
using namespace std;

int sumaImpares(int n) {
    int sum = 0;
    int i = 1;
    while(i<=n) {
        if (i % 2 != 0){
            sum = sum + i;
            i = i + 1;
    }else {
            sum=sum;
            i = i + 1;
        }
    }
    return sum;
}
int main() {
    int x;
    cout << "dale poné un número si sos tan canchero";
    cin >> x;
    cout << sumaImpares(int (x)) << endl;
    return 0;
}                
Ej 7
# include <iostream>
using namespace std;

int sumaDivisores(int n) {
    int sum = 0;
    int i = 1;
    while(i<=n) {
        if (n % i == 0){
            sum = sum + i;
            i = i + 1;
    }else {
            sum=sum;
            i = i + 1;
        }
    }
    return sum;
}
int main() {
    int x;
    cout << "dale poné un número si sos tan canchero";
    cin >> x;
    cout << sumaDivisores(int (x)) << endl;
    return 0;
}    
                
Ej 8
# include <iostream>
using namespace std;

int fact(int a) {
    int prod = 1;
    for(int i=1;i<=a;i++) {
        prod = prod*i;
    }
    return prod;
}
int combinatorio(int n, int k) {
    if(n==k || k==0){
        return 1;
    } else {
        return fact(n)/(fact(k)*fact(n-k));
    }
}

int main() {
    int x;
    int y;
    cout << "dale poné un número si sos tan canchero";
    cin >> x;
    cin >> y;
    cout << combinatorio(int (x), int (y)) << endl;
    return 0;
}   
