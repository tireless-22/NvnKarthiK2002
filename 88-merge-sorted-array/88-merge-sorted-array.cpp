class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        for(int i=0;i<m;i++){
            v.push_back(nums1[i]);
            
        }
        int i=0,j=0,k=0;
        while(i<m and j<n){
            if(v[i]<nums2[j]){
                
                nums1[k]=v[i];
                i++;
                k++;
            }
            else{
                nums1[k]=nums2[j];
                j++;
                k++;
            }
        }
        
        
        if(i<m){
            while(i<m){
                nums1[k]=v[i];
                i++;
                k++;
            }
            
        }
        else{
            while(j<n){
                nums1[k]=nums2[j];
                j++;
                k++;
                
                
            }
        }
        
    }
};