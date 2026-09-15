class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int biggest_len = 0;
        for (int num : nums){
            if (!numSet.count(num - 1)){
                int tracker = 1;
                while (numSet.count(num + 1)){
                    ++tracker; 
                    ++num;
                }
                if (tracker > biggest_len){
                    biggest_len = tracker;
                }
            }
        }
        return biggest_len;
    }
};
