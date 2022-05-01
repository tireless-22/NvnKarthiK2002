class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_element=INT_MAX;
        int max_profit=0;
        int temp;
        for (int x:prices){
            if(x<min_element){
                min_element=x;
            }
            else{
                temp=x-min_element;
                if(temp>max_profit){
                    max_profit=temp;
                }
                
                
                
            }
            
        }
        
        return max_profit;
        
    }
};