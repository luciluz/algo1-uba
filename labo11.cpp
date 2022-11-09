int puntoFijo(vector<int> v){
    int res = -1;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == i){
            res = i;
            break;
        }
    } return res;
}
