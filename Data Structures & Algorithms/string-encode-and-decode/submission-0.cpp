class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(const auto& s : strs){
            encoded += to_string(s.size())+"#"+s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> sol;
    int i = 0;
    int n = s.size();
    while (i < n) {
     
        int len = 0;
        while (i < n && isdigit(s[i])) {
            len = len * 10 + (s[i] - '0');
            ++i;
        }
    
        if (i < n && s[i] == '#') ++i;
    
        string word = s.substr(i, len);
        sol.push_back(word);
        i += len;
    }
    return sol;
    }
};
