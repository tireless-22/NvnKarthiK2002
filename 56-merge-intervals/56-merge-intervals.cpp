class Solution {
public:
    

    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        
     sort(intervals.begin(),intervals.end());
        
        
        
        vector<int> temp;
        temp.push_back(0);
        temp.push_back(1);
        temp[0]=intervals[0][0];
        temp[1]=intervals[0][1];
        
        ans.push_back(temp);
        
        int i=1;
//         intervals
        int j=0;
//         for ans
        
        
        while(i<intervals.size()){
            if(intervals[i][0]<=ans[j][1]){
                
                if(ans[j][1]<=intervals[i][1]){
                    ans[j][1]=intervals[i][1];
                    
                }
                i++;
                
            }
            else{
                temp[0]=intervals[i][0];
                temp[1]=intervals[i][1];
                ans.push_back(temp);
                j++;
                i++;
            }
            
        }
        
        
    return ans;
    }
};