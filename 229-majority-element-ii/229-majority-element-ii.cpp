class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> uo;
        set<int> s;
        vector<int> ans;
        for(int x:nums){
            uo[x]++;
            if(uo[x]==nums.size()/3+1){
                ans.push_back(x);
            }
        }
        return ans;
        
        
    }
};