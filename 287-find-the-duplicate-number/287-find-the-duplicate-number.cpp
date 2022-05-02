class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        unordered_map<int,int> uo;
        for(int x:nums){
            uo[x]++;
            if(uo[x]==2){
                ans=x;
                break;
            }
        }
        
        
        return ans;
        
        
        
    }
};