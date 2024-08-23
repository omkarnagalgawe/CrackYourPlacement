class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.length();
        
        // Helper function to check if a substring is a palindrome
        auto isPalindrome = [&](int i, int j) {
            while (i < j) {
                if (s[i] != s[j]) return false;
                i++, j--;
            }
            return true;
        };

        int i = 0, j = n - 1;
        while (i < j) {
            if (s[i] == s[j]) {
                i++, j--;
            } else {
                // Skip either the left character or the right character and check
                return isPalindrome(i + 1, j) || isPalindrome(i, j - 1);
            }
        }
        
        return true;  // The string is already a palindrome
    }
};
