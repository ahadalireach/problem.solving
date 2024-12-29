class Solution
{
    public:
        bool isIsomorphic(string s, string t)
        {
            unordered_map<char, char> charMap;

            for (int i = 0; i < s.length(); ++i)
            {
                char sc = s[i];
                char tc = t[i];

                if (charMap.count(sc))
                {
                    if (charMap[sc] != tc)
                    {
                        return false;
                    }
                }
                else
                {
                    for (auto &pair: charMap)
                    {
                        if (pair.second == tc)
                        {
                            return false;
                        }
                    }
                    charMap[sc] = tc;
                }
            }

            return true;
        }
};
// Time complexity: O(n)
// Space complexity: O(n)

// unordered_map<char, int> charIndexS;
// unordered_map<char, int> charIndexT;
// for (int i = 0; i < s.length(); i++)
// {
//     if (charIndexS.find(s[i]) == charIndexS.end())
//     {
//         charIndexS[s[i]] = i;
//     }
//     if (charIndexT.find(t[i]) == charIndexT.end())
//     {
//         charIndexT[t[i]] = i;
//     }
//     if (charIndexS[s[i]] != charIndexT[t[i]])
//     {
//         return false;
//     }
// }
// return true;

// Time complexity: O(m + n) -> O(n)
// Space complexity: O(m + n) -> O(n)