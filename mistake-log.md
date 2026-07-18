# Mistake Log

Format: **Problem** → what I missed → root cause (pattern recognition / invariant / edge case / complexity / implementation / misread) → fix → revisit day

- **Primality drill (91)** [D1] → declared 91 prime without testing divisors; 91 = 7×13 → root cause: implementation habit — eyeballed instead of running the cheap check → fix: when a check costs seconds, run it; never "vibe" arithmetic → revisit: warm-up around D4 with another looks-prime number (e.g. 119 = 7×17, 133 = 7×19)
- **Modulo semantics (gcd drill)** [D1] → claimed 7 % 21 = 0; also invented a "take the smaller number as gcd" rule from the wrong result → root cause: implementation — misconception that a % b is 0 when a < b (it's a, unchanged) → fix: a % b = what's left after removing whole b's from a; when a < b nothing is removed → revisit: warm-up D3–4, quiz small%big cases
- **Euclid invariant (gcd drill)** [D1] → asked WHY gcd(a,b)=gcd(b,a%b) is safe; described the mechanics (remainder shrinks, pair swaps) instead of the invariant (common-divisor set is preserved) → root cause: invariant — first exposure to the concept → fix: taught explicitly; must reproduce "same common divisors at every step" unprompted → revisit: D2 warm-up
