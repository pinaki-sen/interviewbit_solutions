vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    int copy;
    
    vector<bool>ar(n+1, false);
    
    for(int i=0;i<n;i++){
        if(!ar[A[i]])
            ar[A[i]] = true;
        else
            copy = A[i];
    }
    
    for(int i=1;i<n+1;i++){
        if(!ar[i])
            return {copy, i};
    }
}
