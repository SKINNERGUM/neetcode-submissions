class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //implement merge sort first
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;    
        for (int i = 0; i < nums.size(); ++i){
            int left = i + 1;
            int right = nums.size() - 1;
            if (i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            int currentSum = nums[i] + nums[left] + nums[right];
            while (left < right){
                if (currentSum > 0){
                    --right;
                }
                else if (currentSum < 0){
                    ++left;
                }
                else{
                    output.push_back({nums[i], nums[left], nums[right]});
                    ++left;
                    --right;

                    while (left < right && nums[left] == nums[left - 1]){
                        ++left;
                    }

                    while (left < right && nums[right] == nums[right + 1]){
                        --right;
                    }
                }
                currentSum = nums[i] + nums[left] + nums[right];
            }
        }
        return output;
    }
};
