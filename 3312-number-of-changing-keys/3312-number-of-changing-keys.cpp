class Solution {
public:
    int countKeyChanges(string s) {
        int keys = 0;
        for(int i = 1; i < s.size(); i++)
            if(tolower(s[i - 1]) != tolower(s[i]))
                keys++;
        return keys;
    }
};