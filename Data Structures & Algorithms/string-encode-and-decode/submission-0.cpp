class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for (const string& str : strs){
            int size = str.size();
            encoded_string += to_string(size) + '#' + str;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_string;
        int i = 0;
        while (i < s.size()){
            int j = s.find('#', i);
            int length = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, length);
            decoded_string.push_back(str);
            i = j + 1 + length;
        }
        return decoded_string;
    }
};
