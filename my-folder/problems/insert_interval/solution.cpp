class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());//sort according to start (intervals[i][0])
        vector<vector<int>> ans;
       for(int i=0;i<intervals.size();i++)
        {
            if(ans.size()==0)//if ans vector empty then no intervals to compare so push intervals[i]
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                vector<int> &v=ans.back();
                if(intervals[i][0]<=v[1])//if end of previous greater than equal to start of next then overlap
                {
                    v[1]=max(intervals[i][1],v[1]);
                }
                else
                    ans.push_back(intervals[i]); //else push back intervals[i]
            }
        }
        return ans;
    }
};