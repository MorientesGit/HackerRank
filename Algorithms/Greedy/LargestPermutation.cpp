/*
 * Complete the 'largestPermutation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY arr
 */
 
 //IMPORTANT! O(n^2) solution => TimeLimit
 //This solution works if the list of number begin or not with the first N natural numbers
vector<int> largestPermutation(int k, vector<int> arr) {
    unordered_map<int, int> map; // map<number,index>
    vector<bool> isInPos(arr.size()); // Determinates if a number is in correct pos
    vector<int> result(arr.size());
    int minN = numeric_limits<int>::max();
    int maxN = -1;
    int nSwaps = 0;
    
    for(int i = 0; i < arr.size(); i++){
        minN = min(minN,arr[i]);
        map[arr[i]] = i;
    }
    
    maxN = minN + arr.size()-1;
    for(int i = 0; i < arr.size();i++){
        if(arr[i] == maxN-i) isInPos[i] = true;
        else isInPos[i] = false;
    }
    
    int nextElement = maxN;
    for(int i = 0; i < arr.size(); i++){
       if(nSwaps < k && !isInPos[i]){
           result[i] = nextElement;
           arr[map[nextElement]] = arr[i];
           if(arr[i] == maxN - map[nextElement]){
                isInPos[map[nextElement]] = true;  
           }
            
            map[arr[i]] = map[nextElement];
            nSwaps++;
            nextElement--;
        }else if(isInPos[i]){
            nextElement--;
            result[i] = arr[i];
        }else result[i] = arr[i];
    }
    
    return result;
}