class Solution {
public:
    string reverseWords(string s) {
        
        
        
        int n = s.length();
        string ans = "";

        // Step 1: Reverse entire string
        reverse(s.begin(), s.end());

        for(int i = 0; i < n; i++) {

            // Skip spaces
            if(s[i] == ' ') continue;

            string word = "";

            // Extract word
            while(i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Reverse word to correct it
            reverse(word.begin(), word.end());

            // Add to answer with single space handling
            if(ans.length() == 0)
                ans += word;
            else
                ans += ' ' + word;
        }

        return ans;
    }
};