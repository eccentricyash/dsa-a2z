// Count all Digits of a Number — takeuforward A2Z Step 1
// Flag: 🟢 (D2, no hints) — O(log10 n)
class Solution {
public:
    int countDigit(int n) {
        if(n<10) return 1;
        int c=0;
        while(n!=0){
            n=n/10;
            c++;
        }
        return c;
    }
};
