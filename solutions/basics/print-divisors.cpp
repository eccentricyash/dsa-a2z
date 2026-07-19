// Print all Divisors — takeuforward A2Z Step 1
// Flag: 🟡 (D2) — two bugs found via guided evidence-reading:
//   (1) push_back(n/i) was OUTSIDE if(n%i==0) — pushed n/i for NON-divisors too
//   (2) loop header i*i<n missed the sqrt divisor for perfect squares (n=36 → no 6)
// O(sqrt n) + sort.
class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> ans;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                ans.push_back(i);
                if((n/i)!=i){
                    ans.push_back(n/i);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
