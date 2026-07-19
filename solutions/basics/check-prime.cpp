// Check Prime — takeuforward A2Z Step 1
// Flag: 🟡 (D2) — repeated i*i<n boundary bug (n=4 → "true"); fixed after pointed hint
// O(sqrt n). Boundary ritual: test the EQUAL case (perfect squares).
class Solution {
public:
    bool isPrime(int n) {
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};
