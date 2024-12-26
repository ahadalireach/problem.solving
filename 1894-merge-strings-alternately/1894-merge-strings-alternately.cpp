class Solution
{
    public:
        string mergeAlternately(string word1, string word2)
        {
            string ans = "";
            int i = 0;
            while (i < word1.length() || i < word2.length())
            {
                if (i < word1.length())
                    ans += word1[i];
                if (i < word2.length())
                    ans += word2[i];
                i++;
            }
            return ans;
        }
};

// int length1 = word1.size();
// int length2 = word2.size();
// string answer;
// int index1 = 0, index2 = 0;
// while (index1 < length1 && index2 < length2)
// {
//     answer.push_back(word1[index1++]);
//     answer.push_back(word2[index2++]);
//    	// answer += word2[index2++]
// }
// while (index1 < length1)
//     answer.push_back(word1[index1++]);
// while (index2 < length2)
//     answer.push_back(word2[index2++]);
// return answer;

// Time complexity: O(n)
// Space complexity: O(n)