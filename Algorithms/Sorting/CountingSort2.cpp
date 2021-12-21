/*
 * Complete the 'countingSort' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> countingSort(vector<int> arr) {
    vector<int> count(100,0);
    for(auto n: arr) count[n]++;
    
    vector<int>sol;
    for(int i = 0; i < count.size(); i++){
        for(int j = 0; j < count[i]; j++)
            sol.push_back(i);
    }
    
    return sol;
}