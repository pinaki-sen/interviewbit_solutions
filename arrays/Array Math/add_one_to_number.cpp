vector<int> Solution::plusOne(vector<int> &A) {
    
    int carry=1, n=A.size();
    for(int i=n-1;i>=0;i--){
        int a = A[i]+carry;
        A[i] = a%10;
        carry = a/10;
    }
    if(carry>0){
        A.insert(A.begin(),carry);
    }
    while(A[0]==0)
    A.erase(A.begin());
    
    
    // if(A[0]>10){
    //     A[0]=A[0]%10;
    //     A.insert(A.begin(),1);
    // }
    return A;
}
