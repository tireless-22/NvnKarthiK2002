class Solution {
public:
    void sortColors(vector<int>& nums) {
        int siz=nums.size();
        
        int i=0,j=0,k=nums.size()-1;
        
        while(j<=k){
            if(nums[j]==0){
                int temp;
                temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                j++;
                i++;
            }
            else if(nums[j]==1){
                 int temp;
                temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                j++;
                
                
            }
            else{
                int temp;
                temp=nums[k];
                nums[k]=nums[j];
                nums[j]=temp;
                k--;
            }
        }
    }
};