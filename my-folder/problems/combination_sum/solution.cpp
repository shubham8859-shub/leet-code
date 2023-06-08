class Solution {
public:
    void genUniqueCombos(int idx, int target, vector<int>& candidates, vector<int>& temp, vector<vector<int>>& sol){
        if(idx==candidates.size()||target<=0){
            if(!target) sol.push_back(temp);
            return;
        }

        if(candidates[idx]<=target){
            temp.push_back(candidates[idx]);
            genUniqueCombos(idx, target-candidates[idx], candidates, temp, sol);
            temp.pop_back();
        }
        genUniqueCombos(idx+1, target, candidates, temp, sol);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> sol;

        genUniqueCombos(0, target, candidates, temp, sol);
        return sol;
    }
};