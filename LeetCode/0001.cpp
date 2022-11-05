// 1 - Two Sum
// Time complexity: O(n)
// Space complexity: O(n)

vector<int> twoSum(vector<int>& nums, int target) {

    unordered_map<int, int> numsPos;
    
    for(int i = 0; i < nums.size(); i++){
        auto num = nums[i];
        if(numsPos[target-num] != 0)
            return vector<int> {i, numsPos[target-num]-1};
        
        numsPos[num] = i+1;
    }
    
    return {-1, -1};
}