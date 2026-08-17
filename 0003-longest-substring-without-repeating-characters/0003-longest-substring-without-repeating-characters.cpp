class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> freq(256, 0);

        int left = 0;
        int right = 0;
        int maxLen = 0;

        while (right < s.length()) {

            // Add current character
            freq[s[right]]++;

            // If duplicate, shrink the window
            while (freq[s[right]] > 1) {
                freq[s[left]]--;
                left++;
            }

            // Calculate current window length
            maxLen = max(maxLen, right - left + 1);

            right++;
        }

        return maxLen;
    }
};