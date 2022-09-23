class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int>ans;
        vector<int>m;
        for(auto i : nums){
            ans[i]++;
            
        }
        for(auto x:ans){
            if(x.second > nums.size()/3){
                m.push_back(x.first);
                
            }
            
        }
        return m;
    
        
        
    }
};