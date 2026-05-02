class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x=start^goal;
        int c=0;
        while(x>0)
        {
            if(x%2==1)
            c++;
            x=x/2;
        }
        return c;
        
    }
};
