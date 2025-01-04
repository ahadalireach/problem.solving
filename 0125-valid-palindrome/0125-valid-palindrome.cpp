class Solution
{
    public:
        bool isPalindrome(string s)
        {
            int l = 0, r = s.size() - 1;
            while (l < r)
            {
                while (l < r && !isalnum(s[l])) l++;
                while (l < r && !isalnum(s[r])) r--;
                if (tolower(s[l]) != tolower(s[r])) return false;
                l++;
                r--;
            }
            return true;
        }
};
// Time complexity: O(n)
// Space complexity: O(1)

// string newString = "";
// for (int i = 0; i < s.size(); i++)
//     if (isalnum(s[i]))
//         newString += tolower(s[i]);
// int l = 0, r = newString.size() - 1;
// while (l < r)
// {
//     if (newString[l] != newString[r])
//         return false;
//     l++;
//     r--;
// }
// return true;
// Time complexity: O(n)
// Space complexity: O(n)

// int l = 0, r = s.size() - 1;
// while (l < r)
// {
//     while (l < r && !((s[l] >= '0' && s[l] <= '9') || (s[l] >= 'A' && s[l] <= 'Z') || (s[l] >= 'a' && s[l] <= 'z')))
//         l++;
//     while (l < r && !((s[r] >= '0' && s[r] <= '9') || (s[r] >= 'A' && s[r] <= 'Z') || (s[r] >= 'a' && s[r] <= 'z')))
//         r--;

//     if (tolower(s[l]) != tolower(s[r])) return false;
//     l++;
//     r--;
// }
// return true;
// Time complexity: O(n)
// Space complexity: O(1)