class Solution {
    public int[] plusOne(int[] digits) {
        
        int n = digits.length;

        // Traverse from last digit
        for (int i = n - 1; i >= 0; i--) {

            // If digit is less than 9, just increment and return
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            // If digit is 9 → becomes 0 (carry)
            digits[i] = 0;
        }

        // If we exit loop, all digits were 9
        // Example: 999 → 1000
        int[] newNumber = new int[n + 1];
        newNumber[0] = 1;
        return newNumber;
    }
}
