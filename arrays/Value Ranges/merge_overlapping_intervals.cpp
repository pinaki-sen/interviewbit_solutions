/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool cmp(Interval a,Interval b){
    return a.start<b.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    int n=A.size();
    sort(A.begin(),A.end(),cmp);
    vector<Interval> ans;

    ans.push_back({A[0].start,A[0].end});
    int l=0;
    for(int i=1;i<n;i++){
        if(A[i].start<=ans[l].end){
            ans[l].start=min(A[i].start,ans[l].start);
            ans[l].end=max(A[i].end,ans[l].end);
        }
        else{
            l++;
            ans.push_back({A[i].start,A[i].end});
         
        }
    }
    return ans;
    
}
