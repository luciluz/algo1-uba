// Ejercicio 1
bool existePico(vector<int> v){
    bool res = false;
    int cont = 0;
    for(int i = 1; i < v.size() - 1; i++){
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            cont++;
        }
    } if(cont != 0){
        res = true;
    } else res = false;
    return res;
}

// Ejercicio 2
int mcd(int m, int n){
    int a = m;
    int b = n;
    int resto;
    while(n != 0 && n !=  1){
        resto = m % n;
        m = b;
        n = resto;
    }
	if(n == 1){
        return n;
    } else return a;
}

// Ejercicio 3

int indiceMinSubsec(vector<int> v, int l, int r){
    int menor = v[l];
    int res = l;
    for(int i = r; i >= l; i--){
        if(menor > v[i]){
            menor = v[i];
            res = i;
        }
    } return res;
}
