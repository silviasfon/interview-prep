// 1480 - Running Sum of 1d Array
// Time complexity: O(n)
// Space complexity: O(n)

vector<int> runningSum(vector<int>& nums) {
        
    int acc = 0;
    vector<int> runningSum(nums.size());
    
    for(int i = 0; i < nums.size(); i++){
        acc += nums[i];
        runningSum[i] = acc;
    }
    
    return runningSum;
}