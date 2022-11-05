// 1365 - How Many Numbers Are Smaller Than the Current Numbe
// Time complexity: O(n)
// Space complexity: O(n+k), k being the amount of numbers in count

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

    vector<int> count(101, 0);

    for(auto val : nums){
        count[val]++;
    }

    for(int i = 1; i < count.size(); i++){
        count[i] += count[i-1];
    }

    vector<int> smallerCount;
    for(auto val : nums){
        if(val == 0)
            smallerCount.push_back(0);
        else
            smallerCount.push_back(count[val-1]);
        
    }

    return smallerCount;
}