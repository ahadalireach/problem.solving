class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.size(); i++)
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
        return s;
    }
};
// s[i] = tolower(s[i]); 
// transform(s.begin(), s.end(), s.begin(), ::tolower);