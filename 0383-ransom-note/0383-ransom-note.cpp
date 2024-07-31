class Solution {
public:
    // Function to check if ransomNote can be constructed from magazine
    bool canConstruct(string ransomNote, string magazine) {
        // Create a frequency array for each letter in the alphabet
        int letterCount[26] = {};

        // Iterate through each character in the magazine
        for (char& letter : magazine) {
            // Increase the count for the corresponding letter
            // 'a' maps to index 0, 'b' to 1, ..., 'z' to 25
            ++letterCount[letter - 'a'];
        }

        // Iterate through each character in the ransomNote
        for (char& letter : ransomNote) {
            // Decrease the count for the corresponding letter
            if (--letterCount[letter - 'a'] < 0) {
                // If the count goes negative, magazine doesn't have enough of this letter
                return false;
            }
        }

        // If we've gone through the entire note without issues, the note can be constructed
        return true;
    }
};