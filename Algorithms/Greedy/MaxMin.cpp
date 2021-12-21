/*
 * Complete the 'maxMin' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY arr
 */

int maxMin(int k, vector<int> arr) {
    int minDif = numeric_limits<int>::max();
    
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i = k-1; i < arr.size(); i++){
        if(abs(arr[i-k+1] - arr[i]) < minDif){
            minDif = abs(arr[i-k+1] - arr[i]);
        }
    }
    
    return minDif;
}