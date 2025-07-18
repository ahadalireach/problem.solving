class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for(auto sentence : sentences){
            int curWords = 0;
            stringstream ss(sentence); // Use stringstream to split sentence by spaces

            string word;
            while (ss >> word) {
                curWords++;
            }

            maxWords = max(curWords, maxWords);
        }

        return maxWords;
    }
};