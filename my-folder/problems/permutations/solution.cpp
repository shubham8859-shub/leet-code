class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()<1)
        return{nums};
        vector<vector<int>> result;
        
        for(int i=0; i<nums.size(); i++)
        {
          vector<int> v(nums.begin(),nums.end());
          v.erase(v.begin()+i);
          auto shu=permute(v);
          for(int j=0; j<shu.size(); j++){
              vector<int> s=shu[j];
              s.insert(s.begin(),nums[i]);
              result.push_back(s);
          }
        }
        return result;
        
    }
};