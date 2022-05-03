class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j=matrix.size()*matrix[0].size()-1;
        
        while(i<=j){
            int mid=(i+j)/2;
            int temp1=mid/matrix[0].size();
            int temp2=mid%matrix[0].size();
            if(matrix[temp1][temp2]==target){
                return true;
            }
            else if(target>matrix[temp1][temp2]){
                i=mid+1;
                
            }
            else{
                j=mid-1;
            }
        }
        
        return false;
        
        
        
    }
};