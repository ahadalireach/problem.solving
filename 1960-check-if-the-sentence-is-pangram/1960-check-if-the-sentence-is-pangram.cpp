class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> letters;

        for (char ch : sentence) {
            letters.insert(ch);
            if (letters.size() == 26) return true;
        }

        return letters.size() == 26;
    }
};