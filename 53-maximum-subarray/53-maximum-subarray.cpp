class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int sum=0,partiSum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

            if(sum<nums[i]){
                sum=nums[i];
            }
            if(sum>partiSum){
                partiSum=sum;

            }
            
        }
        
        
        return partiSum;
        
        
    }
};