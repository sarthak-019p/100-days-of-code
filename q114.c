/*
Day: 57
Date: 2026-10-08
 * Q114: Length of Longest Substring Without Repeating Characters.
 * Input: string s
 * Output: length of longest substring with all unique characters
 * Example: s="abcabcbb" -> 3  (substring "abc")
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[10000];
    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;

    /*
Day: 57
Date: 2026-10-08 Sliding window with frequency array */
    int freq[256];
    memset(freq, 0, sizeof(freq));

    int left = 0;
    for (int right = 0; right < n; right++) {
        /*
Day: 57
Date: 2026-10-08 Shrink window from left until no duplicate */
        while (freq[(unsigned char)s[right]] > 0) {
            freq[(unsigned char)s[left]]--;
            left++;
        }
        freq[(unsigned char)s[right]]++;
        int windowLen = right - left + 1;
        if (windowLen > maxLen) {
            maxLen = windowLen;
        }
    }

    printf("%d\n", maxLen);

    return 0;
}
