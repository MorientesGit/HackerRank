/*
 * Complete the 'insertionSort1' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY arr
 */
 
 void printSolution(vector<int> const&sol){
     for(auto n: sol) cout << n << " ";
     cout << "\n";
 }

void insertionSort1(int n, vector<int> arr) {
    vector<int> sol(arr);
    int e = arr[n-1];
    int i = n-2;
    while(i >= 0 && arr[i] > e){
        sol[i+1] = sol[i];
        printSolution(sol);
        i--;
    }
    
    sol[i+1] = e;
    printSolution(sol);
}