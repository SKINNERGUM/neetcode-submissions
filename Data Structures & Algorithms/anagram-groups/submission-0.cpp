class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> subLists;
        for (string i : strs){
            string alphabet(26, '0');
            for (int j : i){
                alphabet[j - 'a'] += 1;
            }
            subLists[alphabet].push_back(i);
        }
        vector<vector<string>> result;
        for (auto& [key, group] : subLists){
            result.push_back(group);
        }
        return result;
    }
};
