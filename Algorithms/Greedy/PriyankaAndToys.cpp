/*
 * Complete the 'toys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY w as parameter.
 */

int toys(vector<int> w) {
    int containers = 0;
    int i = 0, j = 1;
    
    sort(w.begin(), w.end());
    while(i < w.size() && j < w.size()){
        if(w[j] - w[i] > 4){
            containers++;
            i = j;
        }
        j++;
    }
    
    return ++containers;
}