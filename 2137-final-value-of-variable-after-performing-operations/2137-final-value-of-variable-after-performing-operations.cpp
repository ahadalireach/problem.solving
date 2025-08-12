class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        // 4 Operations
        // Variable X = 0 ++ --

        int x = 0;
        for(string operation : operations){
            if(operation == "X++" || operation == "++X")
                x++;
            else
                x--;
        }

        return x;
    }
};