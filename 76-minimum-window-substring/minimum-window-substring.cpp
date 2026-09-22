class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> need(128, 0);
        vector<int> have(128, 0);

        for(char ch : t) {
            need[ch]++;
        }

        int left = 0;
        int count = 0;

        int start = 0;
        int len = INT_MAX;

        for(int right = 0; right < s.size(); right++) {

            // Add current character
            char ch = s[right];
            have[ch]++;

            if(have[ch] <= need[ch]) {
                count++;
            }

            
            while(count == t.size()) {

              
                if(right - left + 1 < len) {
                    len = right - left + 1;
                    start = left;
                }

                char c = s[left];
                have[c]--;

                if(have[c] < need[c]) {
                    count--;
                }

                left++;
            }
        }

        if(len == INT_MAX) {
            return "";
        }

        return s.substr(start, len);
    }
};