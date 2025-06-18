class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_set<char> us;

        for(char jewel : jewels){
            us.insert(jewel);
        }

        for(char stone : stones){
            if(us.find(stone) != us.end()){
                count++;
            }
        }

        return count;
    }
};

// Approach 1

// for(int i = 0; i < stones.size(); i++){
//     for(int j = 0; j < jewels.size(); j++){
//         if(stones[i] == jewels[j]){
//             count++;
//         }
//     }
// }


// Approach 2

// unordered_set<char> us;
// for(char jewel : jewels){
//     us.insert(jewel);
// }
// for(char stone : stones){
//     if(us.find(stone) != us.end()){
//         count++;
//     }
// }