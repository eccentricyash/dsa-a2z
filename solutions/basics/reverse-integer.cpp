// LC #7 Reverse Integer — A2Z Step 1 (Reverse a number)
// Flag: 🟡 (D2) — needed overflow-guard observation + guided trace of inequality bug
// O(log10 x). Guard BEFORE r=r*10+rem: r > INT_MAX/10 (ceiling), r < INT_MIN/10 (floor).
// Negatives need no special code: C++ % truncates toward zero, rem comes out negative.
class Solution {
public:
    int reverse(int x) {
        int r=0;
        while(x!=0){
            int rem=x%10;
            if(r > (INT_MAX/10) or r < (INT_MIN/10))
                return 0;
            else
            r=(r*10)+rem;
            x=x/10;
        }
        return r;
    }
};
