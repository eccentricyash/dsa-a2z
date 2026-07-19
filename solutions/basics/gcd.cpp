// GCD of Two Numbers — takeuforward A2Z Step 1
// Flag: 🟢 (D2, solo) — Euclid, O(log min(a,b))
// Invariant: replacing (a,b) with (b,a%b) preserves the set of common divisors.
class Solution {
public:
    int GCD(int n1,int n2) {
        while(n2!=0){
            int r=n1%n2;
            n1=n2;
            n2=r;
        }
        return n1;
    }
};
