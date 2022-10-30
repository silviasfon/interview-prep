// 53 - Maximum Subarray
// Complexity: O(n)

int maxSubArray(vector<int>& nums) {
    int maxSum = -10005;
    int currSum = 0, currCount = 0;
    
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < 0){
            maxSum = max(maxSum, nums[i]);

            if(currCount > 0)
                maxSum = max(maxSum, currSum);
            
            currSum += nums[i];
            
            if(currSum < 0)
                currCount = currSum = 0;
        } else {
            currCount++;
            currSum += nums[i];
            maxSum = max(maxSum, currSum);
        }
    }
    
    return maxSum;
}