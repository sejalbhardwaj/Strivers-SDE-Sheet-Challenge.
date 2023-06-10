#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
 vector<vector<int>> ans;
    if (intervals.empty())
        return ans;

    sort(intervals.begin(), intervals.end());

    vector<int> currentInterval = intervals[0];
    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] <= currentInterval[1]) {
            currentInterval[1] = max(currentInterval[1], intervals[i][1]);
        } else {
            ans.push_back(currentInterval);
            currentInterval = intervals[i];
        }
    }

    ans.push_back(currentInterval);

    return ans;
}
