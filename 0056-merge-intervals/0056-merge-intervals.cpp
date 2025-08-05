class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> final;
        if (intervals.empty()) return final;

        vector<int> newIntervals = intervals[0];  

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= newIntervals[1]) {
                newIntervals[1] = max(newIntervals[1], intervals[i][1]);
            } else {
                final.push_back(newIntervals);
                newIntervals = intervals[i];  
            }
        }
        final.push_back(newIntervals);

        return final;
    }
};
