class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        for(auto operation : operations){
            if(operation[1] == '-'){ // operation == "--X" || operation == "X--"
                res--;
            }else{
                res++;
            }
        }
        return res;
    }
};