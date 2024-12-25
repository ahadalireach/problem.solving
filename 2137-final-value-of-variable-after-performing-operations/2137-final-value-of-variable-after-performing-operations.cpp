class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(int i = 0; i < operations.size(); i++)
            if(operations[i] == "++X" || operations[i] == "X++")
                x++;
            else
                x--;
        return x;
    }
};
// Time complexity: O(n)
// Space complexity: O(1)

// We can optimize this solution by checking the middle value!