class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        int currentSum = numbers[left] + numbers[right];
        while (currentSum != target){
            if (currentSum < target){
                left++;
                currentSum = numbers[left] + numbers[right];
            }
            else{
                right--;
                currentSum = numbers[left] + numbers[right];
            }
        }
        vector<int> output {left + 1, right + 1};
        return output;
    }
};
