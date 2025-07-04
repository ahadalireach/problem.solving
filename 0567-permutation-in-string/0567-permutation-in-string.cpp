class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;

        vector<char> s1Freq(26, 0), s2Freq(26, 0);

        for(auto s : s1)
            s1Freq[s - 'a']++;
        
        for(int i = 0; i < s2.size(); i++){
            s2Freq[s2[i] - 'a']++;
            
            if (i >= s1.size()) {
                s2Freq[s2[i - s1.size()] - 'a']--; 
            }

            if(s1Freq == s2Freq) return true;
        }
        
        return false;
    }
};