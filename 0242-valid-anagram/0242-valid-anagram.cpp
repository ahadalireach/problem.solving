class Solution
{
    public:
        bool isAnagram(string s, string t)
        {
            unordered_map<char, int> um;

            for (auto x: s)
                um[x]++;

            for (auto x: t)
            {
                if (um.find(x) == um.end() || um[x] == 0)
                    return false;
                um[x]--;
            }

            for (auto &x: um)
                if (x.second != 0)
                    return false;

            return true;
        }
};
// Time complexity: O(n)
// Space complexity: O(n)

// Approach 2: Sort characters and then check if both's characters are equal or not
// class Solution
// {
//     public:
//         bool isAnagram(string s, string t)
//         {
//             sort(s.begin(), s.end());
//             sort(t.begin(), t.end());
//             return s == t;
//         }
// };
// Time complexity: O(n logn)
// Space complexity: O(n)

// Aproach 3: Use hashtable
// class Solution
// {
//     public:
//         bool isAnagram(string s, string t)
//         {
//             unordered_map<char, int> count;

//            	// Count the frequency of characters in string s
//             for (auto x: s)
//             {
//                 count[x]++;
//             }

//            	// Decrement the frequency of characters in string t
//             for (auto x: t)
//             {
//                 count[x]--;
//             }

//            	// Check if any character has non-zero frequency
//             for (auto x: count)
//             {
//                 if (x.second != 0)
//                 {
//                     return false;
//                 }
//             }

//             return true;
//         }
// };
// Time complexity: O(n)
// Space complexity: O(n)