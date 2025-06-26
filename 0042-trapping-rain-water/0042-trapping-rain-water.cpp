class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0;
        int n = height.size();
        
        int left = 0;
        int right = n - 1;

        int leftMax = height[left];
        int rightMax = height[right];
        
        while(left < right){
            if(leftMax < rightMax){
                left++;
                leftMax = max(leftMax, height[left]);
                res += leftMax - height[left];
            }else{
                right--;
                rightMax = max(rightMax, height[right]);
                res += rightMax - height[right];
            }
        }
        
        return res;
    }
};