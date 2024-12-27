class Solution
{
    public:
        bool isVowel(char v)
        {
            return v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u' ||
                v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U';
        }

    string reverseVowels(string s)
    {
        int l = 0, r = s.size() - 1;

        while (l <= r)
        {
            if (!isVowel(s[l])) l++;
            else if (!isVowel(s[r])) r--;
            else swap(s[l++], s[r--]);
        }

        return s;
    };
};

// Time complexity: O(n)
// Space complexity: O(1)

// string reverseVowels(string s)
// {
//     int l = 0, r = s.size() - 1;
//     string vowels = "aeiouAEIOU";
//     while (l < r)
//     {
//         while (l < r && vowels.find(s[l]) == string::npos) l++;	// string reverseVowels(string s) {
//         int l = 0, r = s.size() - 1;
//         string vowels = "aeiouAEIOU";
//         while (l < r)
//         {
//             while (l < r && vowels.find(s[l]) == string::npos) l++;
//             while (l < r && vowels.find(s[r]) == string::npos) r--;
//             swap(s[l++], s[r--]);
//         }
//         return s;
//     }
//     while (l < r && vowels.find(s[r]) == string::npos) r--;
//     swap(s[l++], s[r--]);
// }
// return s;
// }