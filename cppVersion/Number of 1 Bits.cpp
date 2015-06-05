class Solution 
{
    public:
        int hammingWeight(uint32_t n) 
        {
            int bits = n%2;
            while(n/2)
            {
                n /= 2; 
                bits += n%2;
            }
            
            return bits;
        }
};