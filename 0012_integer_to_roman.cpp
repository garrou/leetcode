class Solution {
public:
    vector<string> symbols {
        "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
    };

    vector<int> values {
        1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
    };
    
    string intToRoman(int num) {
        string roman {""};
        int max;
    
        for (int i = 0; i < symbols.size(); i++) {
            if (num >= values[i]) {
                max = floor(num / values[i]);
                for (int j = 0; j < max; j++) {
                    roman += symbols[i];   
                }
                num -= values[i] * max;
            }
        }
    
        return roman;
    }
};