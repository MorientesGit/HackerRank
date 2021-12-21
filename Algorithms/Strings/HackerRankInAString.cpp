/*
 * Complete the 'hackerrankInString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string hackerrankInString(string s) {
    string hrank = "hackerrank";
    vector<char> sol;
    int i = 0;
    while(i < s.length() && sol.size() < 10){
        if(s.at(i) == hrank.at(sol.size())) sol.push_back(s.at(i));
        i++;
    }
    
    return sol.size() == 10 ? "YES" : "NO";
}