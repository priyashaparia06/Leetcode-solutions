class PalindromeNumber {
    public boolean isPalindrome(int x) {
        int r=0;
        int num=x;
        if(x<0)
        {
            return false;
        }
        while(num!=0)
        {
            r=r*10+num%10;
            num=num/10;
        }
        return r ==x;
    }
}
