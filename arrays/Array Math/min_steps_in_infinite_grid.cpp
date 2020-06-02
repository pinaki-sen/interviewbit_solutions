int distance(int x_start, int y_start, int x_end, int y_end){
    int hor_dist = abs(x_end - x_start);
    int ver_dist = abs(y_end - y_start);
    
    if(hor_dist > ver_dist)
        return hor_dist;
    return ver_dist;
}

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int l = A.size();
    
    int step = 0;
    for(int i=0;i<l-1;i++){
        step += distance(A[i], B[i], A[i+1], B[i+1]);
    }
    return step;
}
