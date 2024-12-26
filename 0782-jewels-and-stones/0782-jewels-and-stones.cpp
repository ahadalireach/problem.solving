class Solution
{
    public:
        int numJewelsInStones(string jewels, string stones)
        {
            unordered_set<char> us;
            int count = 0;

            for (auto &jew: jewels)
                us.insert(jew);

            for (const auto &sto: stones)
                if (us.find(sto) != us.end())
                    count++;

            return count;
        }
};
// Time complexity: O(n)
// Space complexity: O(n)

// map<char, int> count;
//	//counting all stones
// for (int i = 0; i < stones.size(); i++)
//     count[stones[i]]++;

//	//sum all valid jewels stone
// for (int i = 0; i < jewels.size(); i++)
//     ans += count[jewels[i]];