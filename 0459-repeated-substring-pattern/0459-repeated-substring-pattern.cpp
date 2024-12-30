class Solution
{
    public:
        bool repeatedSubstringPattern(string s)
        {
            string doubled = s + s;
            string subString = doubled.substr(1, doubled.size() - 2);
            return subString.find(s) != string::npos;
        }
};
// Time complexity: O(n)
// Space complexity: O(n)

// int n = s.size();
// for (int i = 1; i <= n / 2; i++)
// {
//     if (n % i == 0)
//     {
//         string substring = s.substr(0, i);
//         string repeated = "";
//         for (int j = 0; j < n / i; j++) repeated += substring;
//         if (repeated == s) return true;
//     }
// }
// return false;
// Time complexity: O(n²)
// Space complexity: O(n)