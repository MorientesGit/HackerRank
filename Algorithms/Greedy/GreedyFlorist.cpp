// Complete the getMinimumCost function below.
int getMinimumCost(int k, vector<int> c) {
    int x = 0,cost = 0;
    
    sort(c.begin(),c.end(), greater<int>());
    for(int i=1; i <= c.size(); i++){
        if(i % k == 0){
            cost += (x + 1) * c[i-1];
            x++;
        }else{
            cost += (x + 1) * c[i-1];
        }
    }
    
    return cost;
}