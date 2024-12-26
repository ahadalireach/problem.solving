class Solution
{
    public:
        vector<string> fizzBuzz(int n)
        {
            vector<string> ans;
            for (int i = 1; i <= n; i++)
            {
                string res = "";
                if (i % 3 == 0) res += "Fizz";
                if (i % 5 == 0) res += "Buzz";
                if (res == "") res = to_string(i);
                ans.push_back(res);
            }
            return ans;
        }
};
// Time complexity: O(n)
// Space complexity: O(n)

// for (int i = 1; i <= n; i++)
//     if (i % 3 == 0 && i % 5 == 0)
//         answer.push_back("FizzBuzz");
//     else if (i % 3 == 0)
//     answer.push_back("Fizz");
// else if (i % 5 == 0)
//     answer.push_back("Buzz");
// else
//     answer.push_back(to_string(i));

// Time complexity: O(n)
// Space complexity: O(n)