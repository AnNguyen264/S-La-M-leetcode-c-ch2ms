#include <bits/stdc++.h>
#include <String> 
using namespace std;
class Solution {
public:

    static int romanCharToInt(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    static int romanToInt(const string& s) {
        int result = 0;
        int i = 0;
        while (i < s.length()) {
            const int digit = romanCharToInt(s[i++]);
            const int digit2 = romanCharToInt(s[i]);
            if (digit < digit2) {
                result += digit2 - digit;
                ++i;
            } else {
                result += digit;
            }
        }
        return result;
    }
};
int main() {
	string a;
	cin>>a;
	Solution b; 
	cout<<b.romanToInt(a);
}

