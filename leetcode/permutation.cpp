class Solution {
public:
    
    vector<vector<int>>ans;
    
    void permutation(vector<int>&nums,int s,int e){
        
        if(s==e){
            ans.push_back(nums);
            return;
        }
        
        for(int j=s;j<e;j++){
            
            swap(nums[s],nums[j]);
            
            permutation(nums,s+1,e);
            
            swap(nums[s],nums[j]);
            
        }
        
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
         permutation(nums,0,nums.size());
        
        return ans;
        
    }
};