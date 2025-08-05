class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int res = 0;

        for(auto hour : hours)
            if(hour >= target) res++;
        
        return res;
    }
};