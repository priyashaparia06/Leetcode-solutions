class ValidPerfectSquare {
    bool isPerfectSquare(int num) 
    {
          if (num < 0) return false;

        for (int i = 0; i * i <= num; i++)
        {
            if (i * i == num) 
            {
                return true;
            }
        }
        return false;
    }
};
