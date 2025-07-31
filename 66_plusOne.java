class plusOne {
    public int[] plusOne(int[] digits) {
        int n = digits.length;

        // Traverse the digits array from the end
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0; // Set current digit to 0 and carry over
        }

        // If all digits were 9, we need a bigger array
        int[] result = new int[n + 1];
        result[0] = 1;
        return result;
    }
}

