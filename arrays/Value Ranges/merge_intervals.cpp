/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool compare(Interval a, Interval b){
    if(a.start!=a.end)
        return a.start<b.start;
    a.end<b.end;
}
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    
    int n = intervals.size();
    
    if(newInterval.start>newInterval.end)
        swap(newInterval.start, newInterval.end);
    
    intervals.push_back(newInterval);
    sort(intervals.begin(), intervals.end(), compare);
    
    n++;
    
    vector <Interval> ans;
    Interval toadd;
    
    int maxend = -100000000;
    for(int i = 0; i < n; i++){
        if(intervals[i].start > maxend){
            toadd.start = intervals[i].start;
        }
        maxend = max(maxend, intervals[i].end);
        
        if(i == n - 1 or intervals[i + 1].start > maxend){
            toadd.end = maxend;
            ans.push_back(toadd);
        }
    }
    
    return ans;
}

