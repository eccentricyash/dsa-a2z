// LC #9 Palindrome Number — A2Z Step 1
// Flag: 🟡 (D2) — needed: negatives-are-text insight, long long widening (after one crash)
// O(log10 x). Negative → instant false (reversed text puts '-' at the end).
// long long r: reversed 10-digit int can exceed INT_MAX; #9 has no 64-bit ban (unlike #7).
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int duplicate=x;
        long long r=0;
        while(x!=0){
            int rem=x%10;
            r=(r*10)+rem;
            x=x/10;
        }
        return r==duplicate;
    }
};
