class Solution {
public:
    bool judgeCircle(string moves) {
        int vertical = 0, horizontal = 0;
        for(char move : moves) {
            if(move == 'U') vertical++;
            else if(move == 'D') vertical--;
            else if(move == 'L') horizontal++;
            else if(move == 'R') horizontal--;
        }
        return vertical == 0 && horizontal == 0;
    }
};