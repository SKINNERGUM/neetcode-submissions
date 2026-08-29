class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq;
        //edge case
        if (s.size() != t.size()){
            return false;
        }
        for (char c : s){
            if (freq.contains(c)){
                freq[c]++;
            }
            else {
                freq[c] = 1;
            }
        }

        for (char c : t){
            if (!freq.contains(c) || freq[c] == 0){
                return false;
            }
            else{
                freq[c]--;
            }
        }
        return true;   
    }
};
