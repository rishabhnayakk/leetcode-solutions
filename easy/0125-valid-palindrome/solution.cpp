class Solution {
public:
    bool isPalindrome(string s) {
        string b = "";

        // Keep only letters/numbers and convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                b += tolower(c);
            }
        }

        // Check palindrome
        string rev = b;
        reverse(rev.begin(), rev.end());

        return b == rev;
    }
};