class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x;
        // int res = 0;
        while(l <= r){
            int mid = l + ((r - l) / 2);
            long long square = static_cast<long long>(mid) * mid;
            if(square > x){
                r = mid - 1;
            }else if(square < x){
                l = mid + 1;
                // res = mid;
            }else{
                return mid;
            }
        }
        return static_cast<int>(std::round(r));
        // return res;
    }
};