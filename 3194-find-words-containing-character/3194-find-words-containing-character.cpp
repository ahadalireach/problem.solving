class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int index = 0; index < words.size(); index++)
            if (words[index].find(x) != string::npos) 
                ans.push_back(index);  
        return ans;
    }
};
