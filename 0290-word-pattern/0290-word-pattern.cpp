class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> pToS; // Pattern -> Word mapping
        unordered_map<string, char> sToP; // Word -> Pattern mapping

        vector<string> words;
        stringstream ss(s);
        string word;
        
        while (ss >> word)
            words.push_back(word);

        if (words.size() != pattern.size()) return false;

        for (int i = 0; i < pattern.size(); i++) {
            char p = pattern[i];
            string w = words[i];

            if (pToS.count(p) && pToS[p] != w) return false;
            if (sToP.count(w) && sToP[w] != p) return false; 
            pToS[p] = w;
            sToP[w] = p;
        }

        return true;
    }
};
