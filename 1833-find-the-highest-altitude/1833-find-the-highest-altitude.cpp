class Solution
{
    public:
        int largestAltitude(vector<int> &gain) {
            int n = gain.size();
            vector<int> altitudes(n + 1, 0);
            int maxAltitude = 0;
            for(int i = 0; i < n; i++){
                altitudes[i + 1] = altitudes[i] + gain[i];
                maxAltitude = max(maxAltitude, altitudes[i + 1]);
            }
            return maxAltitude;
        }
};
// Using Prefix Sum Array
// Time complexut: O(n)
// Space complexity: O(n)

// Using Cumulative Sum Without Storing Prefix Array
// int totalAltitude = 0;
// int maxAltitude = 0;
// for (int i = 0; i < gain.size(); i++)
// {
//     totalAltitude += gain[i];
//     maxAltitude = max(maxAltitude, totalAltitude);
// }
// return maxAltitude;
// Time complexity: O(n)
// Space complexity: O(1)