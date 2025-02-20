class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word = "";
        
        int i = 0, n = s.size();
        while (i < n) {
            while (i < n && s[i] == ' ') i++;
            if (i >= n) break;
            word = "";
            while (i < n && s[i] != ' ') word += s[i++];
            words.push_back(word);
        }
        
        string answer = "";
        for (int i = words.size() - 1; i >= 0; i--) {
            answer += words[i];
            if (i > 0) answer += ' ';
        }
        
        return answer;
    }
};
