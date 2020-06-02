int Solution::maxSubArray(const vector<int> &A) {
    int n = A.size();
   int curr_max = A[0];
   int max_so_far =A[0];
   
   for(int i=1;i<n;i++){
       curr_max += A[i];
       if(A[i]>curr_max)
            curr_max = A[i];
        if(max_so_far<curr_max)
            max_so_far = curr_max;
   }
   return max_so_far;
   
}
