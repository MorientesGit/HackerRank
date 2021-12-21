/*
 * Complete the 'decentNumber' function below.
 *
 * The function accepts INTEGER n as parameter.
 */
 
//More 5s than 3s (Priority)
bool isDecentNumber1(int const&n1, int const&n2){
     return (n1 % 3 == 0 && n2 % 5 == 0);
}

//More 3s than 5s
bool isDecentNumber2(int const&n1, int const&n2){
     return (n1 % 5 == 0 && n2 % 3 == 0);
}
 
void printSol(int const&n1, int const&n2){
    if(n1 % 3 == 0){
        for(int j = 0; j < n1; j++) cout << 5;
        for(int j = 0; j < n2; j++) cout << 3;
    }else{
        for(int j = 0; j < n2; j++) cout << 5;
        for(int j = 0; j < n1; j++) cout << 3;
    }
}

void decentNumber(int n) {
    int i = 0, n1 = n, n2 = 0;
    
    while(i <= n/2 && !isDecentNumber1(n1,n2)){
        n1--; n2++; i++;
    } 
    
    if(i > n/2){
        i = 0; n1 = n; n2 = 0;
        while(i <= n/2 && !isDecentNumber2(n1,n2)){
            n1--; n2++; i++;
        }
   
        if( i > n/2) cout << -1;
        else printSol(n1,n2);

    }else printSol(n1,n2);
    
    cout << "\n";
}