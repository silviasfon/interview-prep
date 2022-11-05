// 724 - Find Pivot Index
// Time complexity: O(n)
// Space complexity: O(1)

int pivotIndex(vector<int>& nums) {
        
    int size = nums.size(), total = 0;
    
    total = accumulate(nums.begin(), nums.end(), 0);
    
    int previousSum = 0;

    for(int i = 0; i < size; i++){
        if(total - nums[i] - previousSum == previousSum)
            return i;
        
        previousSum += nums[i];
    }
    
    return -1;
}