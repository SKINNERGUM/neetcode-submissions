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
        string_view sv(s);
        size_t i = 0;
        size_t n = sv.size();
        while (i < n){
            size_t j = sv.find('#', i);
            int length = 0;
            from_chars(sv.data() + i, sv.data() + j, length);
            string_view content_view = sv.substr(j + 1, length);
            decoded_string.emplace_back(content_view);
            i = j + 1 + length;
        }
        return decoded_string;
    }
};
