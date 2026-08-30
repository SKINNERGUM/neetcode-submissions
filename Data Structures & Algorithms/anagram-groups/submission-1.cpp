class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> subLists;
        for (string& i : strs){
            string alphabet(26, '0');
            for (char j : i){
                alphabet[j - 'a']++;
            }
            subLists[alphabet].push_back(move(i));
        }
        vector<vector<string>> result;
        result.reserve(subLists.size());
        for (auto& [key, group] : subLists){
            result.push_back(move(group));
        }
        return result;
    }
};
