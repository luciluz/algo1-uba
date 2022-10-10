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

// Ejercicio 4
void ordenar1(vector<int>& v){
    vector<int> v0 = v;
    int k;
    int j;
    for(int i = 0; i < v.size(); i++){
        k = v[i];
        j = indiceMinSubsec(v, i, v.size() -1);
        v[i] = v[indiceMinSubsec(v, i, v.size() -1)];
        v[j] = k;
    }
}
