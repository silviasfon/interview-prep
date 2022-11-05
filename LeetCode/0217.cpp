// 217 - Contains Duplicate
// Time complexity: O(n*log n)
// Space complexity: O(1) 

bool containsDuplicate(vector<int>& nums) {    
    sort(nums.begin(), nums.end());
    
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] == nums[i-1])
            return true;
    }
    
    return false;
}