class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> us;
        for(char c : sentence)
            us.insert(c);
        return us.size() == 26;
    }
};