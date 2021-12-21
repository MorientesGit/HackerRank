/*
 * Complete the 'maximumPerimeterTriangle' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY sticks as parameter.
 */


bool isDenegerate(int const&s1, int const&s2, int const&s3){
    return s1+s2 <= s3;
}

vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    vector<int> sol(3);
    sort(sticks.begin(), sticks.end());

    for(int i = 2; i < sticks.size(); i++){
        if(!isDenegerate(sticks[i-2],sticks[i-1],sticks[i])){
            sol[0] = sticks[i-2];
            sol[1] = sticks[i-1];
            sol[2] = sticks[i];
        }
    }
    if(sol[0] == 0) return vector<int>(1,-1);
    else return sol;
}