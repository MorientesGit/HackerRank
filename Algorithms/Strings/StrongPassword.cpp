/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

bool specialC(char const& c){
    return c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '^' ||
           c == '&' || c == '*' || c == '(' || c == ')' || c == '-' || c == '+';
}

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    bool criteria1 = n >= 6;
    bool criteria2=false,criteria3=false,criteria4=false,criteria5=false;
    
    for(int i = 0; i < n; i++){
        char letterASCII = password.at(i) - '0';
        if(letterASCII >= 17 && letterASCII <= 42) criteria4 = true; //Upper case
        else if(letterASCII > 48 && letterASCII <= 73) criteria3 = true; //Lower case
        else if(letterASCII >= 0 && letterASCII <= 9) criteria2 = true; //One digit
        else if(specialC(password.at(i))) criteria5 = true; //Special character
    }
    
    if(criteria1 && criteria2 && criteria3 && criteria4 && criteria5) return 0;
    else{
        int sum = 0;
        if(!criteria2) sum++;
        if(!criteria3) sum++;
        if(!criteria4) sum++;
        if(!criteria5) sum++;
        
        if(!criteria1) return max(6-n,sum);
        else return sum;
    }
}