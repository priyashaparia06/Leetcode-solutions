class sqrt 
{
public:
    int mySqrt(int x) 
    {
        if (x < 2) 
        {
            return x;
        }
        int result = 0;
        for (long long int i = 1; i <= x; i++)
            {
            if (i * i == x) 
            {
                return i;
            } 
            else if (i * i > x) 
            {
                return i - 1;
            }
        }
        return result;
    }
};
