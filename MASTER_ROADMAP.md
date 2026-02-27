# 🏆 MASTER DSA ROADMAP — Interview-Ready in 60 Days

> Merged from 2 source files. Deduplicated, pattern-prioritized, FAANG-optimized.
> **~350 curated problems** across all critical patterns. Quality over quantity.

---

## 📅 Daily Plan (8 hours/day)

| Block | Time | Activity |
|-------|------|----------|
| 🧠 Morning | 08:00–10:00 | **Learn new pattern** — study technique, watch solution, understand proof |
| ⚡ Grind 1 | 10:00–13:00 | **Solve 3–4 problems** on today's pattern (timed: 25–40 min each) |
| 🍽️ Break | 13:00–14:00 | Lunch + walk (no screens) |
| ⚡ Grind 2 | 14:00–16:30 | **Solve 2–3 more problems** — increase difficulty, attempt hard variants |
| 🔁 Revision | 16:30–17:30 | **Re-solve 2–3 starred problems** from previous days (no peeking) |
| 🏁 Contest | 17:30–19:00 | **Timed mock** — 3 random problems, 90 min, simulate interview pressure |
| 📝 Review | 19:00–19:30 | **Log mistakes**, update spaced repetition tracker, plan tomorrow |

**Weekly:** 6 days on, 1 day light (revision only). Every Sunday = contest simulation (Codeforces/LC Weekly).

---

## ⚡ Phase-wise Roadmap

### Phase 1 — Foundations & Core Patterns (Days 1–20)

| Week | Topics | Key Patterns | Difficulty |
|------|--------|-------------|------------|
| 1 | Arrays, Prefix Sum, Hashing | Kadane's, Two-pass, Frequency counting, XOR tricks | Easy → Medium |
| 2 | Sorting, Binary Search, BS on Answer | Dutch Flag, Rotated array BS, Monotonic check functions | Medium |
| 3 | Sliding Window, Two Pointers | Fixed/Variable window, Shrink/Expand, At-most-K trick | Medium → Hard |

**Outcome:** Solve any array/string medium in <20 min. Pattern recognition for 70% of LC mediums.

### Phase 2 — Speed & Pattern Recognition (Days 21–35)

| Week | Topics | Key Patterns | Difficulty |
|------|--------|-------------|------------|
| 4 | Stack, Queue, Monotonic Stack | NGE/NSE, Histogram area, Expression evaluation | Medium → Hard |
| 5 | Linked List, Heap/Priority Queue | Fast-slow pointers, Merge-K, Top-K, Median stream | Medium → Hard |

**Outcome:** Stack/Heap patterns automatic. Linked list problems < 15 min.

### Phase 3 — Advanced Topics (Days 36–52)

| Week | Topics | Key Patterns | Difficulty |
|------|--------|-------------|------------|
| 6 | Trees & BST | DFS/BFS views, Morris traversal, LCA, Serialize | Medium → Hard |
| 7 | Graphs | BFS/DFS apps, Topo sort, Dijkstra, DSU/MST | Medium → Hard |
| 8–9 | Dynamic Programming | 1D, Grid, Knapsack, Strings, MCM, Stocks | Medium → Hard |

**Outcome:** Can identify DP state/transition in <5 min. Graph problems feel routine.

### Phase 4 — Interview Simulation (Days 53–60)

| Day | Activity |
|-----|----------|
| 53–54 | Advanced: Trie, Backtracking, Segment Tree |
| 55–56 | Mixed topic random contests (4 problems, 2 hours) |
| 57–58 | Weak-area targeted drilling |
| 59–60 | Full mock interviews (45 min each, explain aloud) |

**Outcome:** Consistently solve 2/4 LC contest problems. Handle any medium in <25 min.

---

## 🧠 Speed Training

| Method | How |
|--------|-----|
| **Timed solving** | Set 25 min for Medium, 40 min for Hard. If stuck at 15 min, check hint. If stuck at 25 min, read solution. |
| **Pattern flash drills** | Given a problem statement, identify the pattern in <60 seconds without solving |
| **Re-solve sprints** | Pick 10 previously-solved problems, re-solve all in 2 hours |
| **Contest simulation** | LC Weekly Contest every Sunday + 1 virtual Codeforces Div 2 per week |
| **Explain-aloud** | After solving, explain approach in 2 min as if in interview |
| **Template memorization** | Memorize templates: Binary Search, BFS, DFS, Sliding Window, Union-Find, Dijkstra, Trie |

---

## 🔁 Revision Strategy

| Interval | Action |
|----------|--------|
| **Day 0** | Solve problem. Star it (★★★ = hard/tricky, ★★ = medium, ★ = easy) |
| **Day 1** | Re-solve all ★★★ from yesterday without looking |
| **Day 3** | Re-solve ★★★ + ★★ from 3 days ago |
| **Day 7** | Weekly review: re-solve any problem you couldn't recall |
| **Day 14** | Bi-weekly: speed re-solve of all ★★★ problems |
| **Day 30** | Monthly: full topic revision, re-solve 1 problem per topic |

**Mistake Tracking:** Maintain a spreadsheet with columns: `Problem | Pattern | Mistake Made | Key Insight | Re-solve Date`

---

## 💀 Hard Problem Strategy

| Situation | Action |
|-----------|--------|
| **First 10 min** | Understand problem. Draw examples. Identify pattern. Try brute force. |
| **10–25 min** | If no progress, check: Is this a known pattern? Try all templates mentally. |
| **25–40 min** | Read 1 hint or the approach section (not full code). Try again. |
| **40+ min** | Read the solution. Understand WHY. Code it yourself. Star as ★★★. |
| **When to skip** | If a problem requires math/number theory you haven't learned, skip it. |
| **Learning from solutions** | Write the approach in your own words. Re-solve next day blind. |

---

## 🏁 Final 7-Day Crash Plan (Before Interviews)

| Day | Focus | Problems |
|-----|-------|----------|
| 1 | Arrays + Sliding Window + Two Pointers | 8–10 must-do problems, timed |
| 2 | Binary Search + Greedy + Intervals | 8–10 must-do problems, timed |
| 3 | Stack + Heap + Linked List | 8–10 must-do problems, timed |
| 4 | Trees + BST | 8–10 must-do problems, timed |
| 5 | Graphs (BFS/DFS + Topo + Shortest Path) | 8–10 must-do problems, timed |
| 6 | DP (all sub-patterns: 1D, grid, knapsack, strings) | 10–12 must-do problems |
| 7 | Full mock interviews x3 (45 min each, mixed topics) | Random hard problems |

---

## 📚 Topic 1: Arrays & Prefix Sum

**Pattern:** Kadane's algorithm, prefix sum, XOR tricks, index marking, frequency counting.
**When to use:** Subarray problems, sum queries, finding duplicates/missing, in-place operations.
**Common mistakes:** Off-by-one in prefix sum, forgetting negative numbers in Kadane's, not handling empty subarrays.
**Key techniques:** Prefix sum for range queries, Kadane's for max subarray, XOR for single-element problems, Moore's voting for majority.

| # | Problem | Link | Diff | Pattern | Time | Why Important |
|---|---------|------|------|---------|------|---------------|
| 1 | Kadane's Max Subarray Sum | [LC 53](https://leetcode.com/problems/maximum-subarray/) | Med | Kadane's | 15m | Foundation of all subarray problems |
| 2 | Max Circular Subarray Sum | [LC 918](https://leetcode.com/problems/maximum-sum-circular-subarray/) | Med | Kadane + wrap | 25m | Extends Kadane's to circular case |
| 3 | Maximum Product Subarray | [LC 152](https://leetcode.com/problems/maximum-product-subarray/) | Med | Kadane variant | 20m | Sign-tracking twist on Kadane's |
| 4 | Subarray Sum Equals K | [LC 560](https://leetcode.com/problems/subarray-sum-equals-k/) | Med | Prefix Sum + Hash | 20m | Core prefix sum + hashmap pattern |
| 5 | Subarray Sum Divisible by K | [LC 974](https://leetcode.com/problems/subarray-sums-divisible-by-k/) | Med | Modulo + Hash | 20m | Modulo arithmetic on prefix sums |
| 6 | Longest Subarray with Sum K | — | Med | Prefix Sum + Hash | 20m | Variable-length subarray with target |
| 7 | Longest Subarray Equal 0s and 1s | — | Med | Transform + Prefix Sum | 20m | Reduce to sum=0 subarray problem |
| 8 | Majority Element (>N/2) | [LC 169](https://leetcode.com/problems/majority-element/) | Easy | Moore's Voting | 10m | Classic O(1) space voting algorithm |
| 9 | Majority Element II (>N/3) | [LC 229](https://leetcode.com/problems/majority-element-ii/) | Med | Extended Moore | 20m | Generalized voting for 2 candidates |
| 10 | Find Missing Number | [LC 268](https://leetcode.com/problems/missing-number/) | Easy | XOR / Math | 10m | XOR trick foundation |
| 11 | Find Duplicate Number | [LC 287](https://leetcode.com/problems/find-the-duplicate-number/) | Med | Floyd's Cycle | 20m | Cycle detection in array |
| 12 | Find All Duplicates | [LC 442](https://leetcode.com/problems/find-all-duplicates-in-an-array/) | Med | Index Marking | 15m | O(1) space technique |
| 13 | Find All Missing Numbers | [LC 448](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/) | Easy | Index Marking | 15m | Same index-marking pattern |
| 14 | Sort Colors (Dutch Flag) | [LC 75](https://leetcode.com/problems/sort-colors/) | Med | 3-way partition | 15m | Fundamental partition algorithm |
| 15 | Move Zeroes | [LC 283](https://leetcode.com/problems/move-zeroes/) | Easy | Two Pointer | 10m | In-place stable partition |
| 16 | Merge Intervals | [LC 56](https://leetcode.com/problems/merge-intervals/) | Med | Sort + Merge | 15m | Interval merging foundation |
| 17 | Non-overlapping Intervals | [LC 435](https://leetcode.com/problems/non-overlapping-intervals/) | Med | Greedy Interval | 20m | Greedy on sorted intervals |
| 18 | Insert Interval | [LC 57](https://leetcode.com/problems/insert-interval/) | Med | Interval Logic | 20m | Interval reasoning |
| 19 | Set Matrix Zeroes | [LC 73](https://leetcode.com/problems/set-matrix-zeroes/) | Med | In-place Marking | 15m | First row/col as markers |
| 20 | Spiral Matrix | [LC 54](https://leetcode.com/problems/spiral-matrix/) | Med | Simulation | 20m | Boundary shrinking technique |
| 21 | Rotate Image | [LC 48](https://leetcode.com/problems/rotate-image/) | Med | Transpose + Reverse | 15m | Matrix manipulation |
| 22 | Pascal's Triangle | [LC 118](https://leetcode.com/problems/pascals-triangle/) | Easy | Combinatorics | 10m | Build-up pattern |
| 23 | Longest Consecutive Sequence | [LC 128](https://leetcode.com/problems/longest-consecutive-sequence/) | Med | HashSet | 15m | O(n) with smart starting |
| 24 | Jump Game | [LC 55](https://leetcode.com/problems/jump-game/) | Med | Greedy Reach | 15m | Greedy reachability |
| 25 | Jump Game II | [LC 45](https://leetcode.com/problems/jump-game-ii/) | Med | BFS Greedy | 20m | Level-based greedy jumps |
| 26 | Gas Station | [LC 134](https://leetcode.com/problems/gas-station/) | Med | Circular Greedy | 20m | Prefix sum on circular array |
| 27 | Candy | [LC 135](https://leetcode.com/problems/candy/) | Hard | Two-pass Greedy | 25m | Left-right pass pattern |
| 28 | Minimum Swaps to Sort | — | Med | Cycle Detection | 20m | Graph cycle in permutation |

---

## 📚 Topic 2: Binary Search

**Pattern:** Classic BS, BS on rotated arrays, BS on answer (monotonic check function).
**When to use:** Sorted data, monotonic function optimization, min/max of answer.
**Common mistakes:** `lo <= hi` vs `lo < hi`, wrong mid calculation, not identifying monotonic property.
**Key techniques:** Template: `lo, hi, mid, check()`. Always define what you're searching FOR.

| # | Problem | Link | Diff | Pattern | Time | Why Important |
|---|---------|------|------|---------|------|---------------|
| 1 | Binary Search | [LC 704](https://leetcode.com/problems/binary-search/) | Easy | Classic BS | 5m | Template foundation |
| 2 | Search Insert Position | [LC 35](https://leetcode.com/problems/search-insert-position/) | Easy | Lower Bound | 10m | Lower bound concept |
| 3 | First & Last Position | [LC 34](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) | Med | Lower/Upper Bound | 15m | Two binary searches |
| 4 | Search Rotated Sorted Array | [LC 33](https://leetcode.com/problems/search-in-rotated-sorted-array/) | Med | Rotated BS | 20m | FAANG classic |
| 5 | Search Rotated Sorted II | [LC 81](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/) | Med | Rotated + Dupes | 20m | Handling duplicates |
| 6 | Find Min in Rotated Sorted | [LC 153](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | Med | Pivot BS | 15m | Find rotation point |
| 7 | Peak Element | [LC 162](https://leetcode.com/problems/find-peak-element/) | Med | BS on unsorted | 15m | BS without full sorting |
| 8 | Search 2D Matrix | [LC 74](https://leetcode.com/problems/search-a-2d-matrix/) | Med | Flatten BS | 15m | Treat matrix as array |
| 9 | Search 2D Matrix II | [LC 240](https://leetcode.com/problems/search-a-2d-matrix-ii/) | Med | Staircase | 15m | Row-col elimination |
| 10 | Koko Eating Bananas | [LC 875](https://leetcode.com/problems/koko-eating-bananas/) | Med | BS on Answer | 20m | Quintessential BS-on-answer |
| 11 | Min Days for Bouquets | [LC 1482](https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/) | Med | BS on Answer | 20m | BS + greedy check |
| 12 | Ship Packages in D Days | [LC 1011](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/) | Med | BS on Answer | 20m | Classic capacity problem |
| 13 | Split Array Largest Sum | [LC 410](https://leetcode.com/problems/split-array-largest-sum/) | Hard | BS on Answer | 25m | Minimize the maximum |
| 14 | Aggressive Cows | [GFG](https://www.geeksforgeeks.org/aggressive-cows/) | Hard | BS on Answer | 25m | Maximize the minimum |
| 15 | Magnetic Force Between Balls | [LC 1552](https://leetcode.com/problems/magnetic-force-between-two-balls/) | Med | BS on Answer | 20m | Same as Aggressive Cows |
| 16 | Smallest Divisor Given Threshold | [LC 1283](https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/) | Med | BS on Answer | 20m | Ceiling division trick |
| 17 | Kth Smallest in Sorted Matrix | [LC 378](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/) | Med | BS + Count | 25m | BS on value range |
| 18 | Median of Two Sorted Arrays | [LC 4](https://leetcode.com/problems/median-of-two-sorted-arrays/) | Hard | BS Partition | 30m | Hardest BS problem. FAANG favorite |

---

## 📚 Topic 3: Sliding Window & Two Pointers

**Pattern:** Fixed window, variable window (expand/shrink), at-most-K trick, two-pointer on sorted.
**When to use:** Subarray/substring with constraint, pair finding, container problems.
**Common mistakes:** Not shrinking window properly, off-by-one in window size, forgetting `atMost(K) - atMost(K-1)` trick.
**Key techniques:** HashMap for frequency in window, deque for window max/min.

| # | Problem | Link | Diff | Pattern | Time | Why Important |
|---|---------|------|------|---------|------|---------------|
| 1 | Longest Substring Without Repeating | [LC 3](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Med | Variable Window | 15m | THE sliding window problem |
| 2 | Minimum Window Substring | [LC 76](https://leetcode.com/problems/minimum-window-substring/) | Hard | Variable Window | 30m | Hardest window problem. FAANG must |
| 3 | Find All Anagrams | [LC 438](https://leetcode.com/problems/find-all-anagrams-in-a-string/) | Med | Fixed Window | 20m | Frequency matching |
| 4 | Permutation in String | [LC 567](https://leetcode.com/problems/permutation-in-string/) | Med | Fixed Window | 15m | Same as anagram check |
| 5 | Longest Repeating Char Replacement | [LC 424](https://leetcode.com/problems/longest-repeating-character-replacement/) | Med | Variable Window | 20m | Max frequency in window |
| 6 | Max Consecutive Ones III | [LC 1004](https://leetcode.com/problems/max-consecutive-ones-iii/) | Med | Variable Window | 15m | Flip at most K zeros |
| 7 | Fruit Into Baskets | [LC 904](https://leetcode.com/problems/fruit-into-baskets/) | Med | At Most 2 | 15m | At-most-K distinct |
| 8 | Subarrays with K Distinct | [LC 992](https://leetcode.com/problems/subarrays-with-k-different-integers/) | Hard | AtMost(K)−AtMost(K−1) | 25m | Critical counting trick |
| 9 | Substring with Concatenation | [LC 30](https://leetcode.com/problems/substring-with-concatenation-of-all-words/) | Hard | Fixed Window | 30m | Word-level sliding window |
| 10 | Sliding Window Maximum | [LC 239](https://leetcode.com/problems/sliding-window-maximum/) | Hard | Monotonic Deque | 25m | Deque pattern foundation |
| 11 | Subarray Product < K | [LC 713](https://leetcode.com/problems/subarray-product-less-than-k/) | Med | Variable Window | 15m | Counting subarrays |
| 12 | Binary Subarray with Sum | [LC 930](https://leetcode.com/problems/binary-subarrays-with-sum/) | Med | AtMost Trick | 20m | Two-window counting |
| 13 | Two Sum II (Sorted) | [LC 167](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | Med | Two Pointer | 10m | Foundation two pointer |
| 14 | 3Sum | [LC 15](https://leetcode.com/problems/3sum/) | Med | Sort + TP | 20m | FAANG most-asked |
| 15 | 3Sum Closest | [LC 16](https://leetcode.com/problems/3sum-closest/) | Med | Sort + TP | 20m | Variant of 3Sum |
| 16 | 4Sum | [LC 18](https://leetcode.com/problems/4sum/) | Med | Sort + TP | 25m | Generalized K-sum |
| 17 | Container With Most Water | [LC 11](https://leetcode.com/problems/container-with-most-water/) | Med | Boundary TP | 15m | Greedy two-pointer |
| 18 | Trapping Rain Water | [LC 42](https://leetcode.com/problems/trapping-rain-water/) | Hard | TP / Stack | 25m | Top 5 interview problem ever |
| 19 | Remove Duplicates from Sorted | [LC 26](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | Easy | Slow-Fast TP | 10m | In-place technique |
| 20 | Partition Labels | [LC 763](https://leetcode.com/problems/partition-labels/) | Med | Greedy + TP | 15m | Last-occurrence greedy |


## 📚 Topic 4: Stack & Monotonic Stack

**Pattern:** Monotonic stack (NGE/NSE), expression evaluation, histogram area, parenthesis matching.
**When to use:** "Next greater/smaller", histogram areas, valid brackets, nested decoding.
**Common mistakes:** Not deciding monotonic increasing vs decreasing, popping order, result array initialization.
**Key techniques:** Maintain stack invariant (increasing/decreasing). Process on pop, not push.

| # | Problem | Link | Diff | Pattern | Time | Why Important |
|---|---------|------|------|---------|------|---------------|
| 1 | Valid Parentheses | [LC 20](https://leetcode.com/problems/valid-parentheses/) | Easy | Stack Basic | 10m | Foundation |
| 2 | Min Stack | [LC 155](https://leetcode.com/problems/min-stack/) | Med | Design | 15m | O(1) getMin trick |
| 3 | Next Greater Element I | [LC 496](https://leetcode.com/problems/next-greater-element-i/) | Easy | Monotonic Stack | 15m | Core monotonic pattern |
| 4 | Next Greater Element II | [LC 503](https://leetcode.com/problems/next-greater-element-ii/) | Med | Circular + Mono Stack | 20m | Circular array trick |
| 5 | Daily Temperatures | [LC 739](https://leetcode.com/problems/daily-temperatures/) | Med | Monotonic Stack | 15m | Same as NGE with indices |
| 6 | Stock Span Problem | [LC 901](https://leetcode.com/problems/online-stock-span/) | Med | Monotonic Stack | 15m | Reverse NGE |
| 7 | Largest Rectangle in Histogram | [LC 84](https://leetcode.com/problems/largest-rectangle-in-histogram/) | Hard | Mono Stack Core | 25m | MOST IMPORTANT stack problem |
| 8 | Maximal Rectangle | [LC 85](https://leetcode.com/problems/maximal-rectangle/) | Hard | Histogram per row | 30m | Builds on histogram |
| 9 | Sum of Subarray Minimums | [LC 907](https://leetcode.com/problems/sum-of-subarray-minimums/) | Med | Mono Stack + Math | 25m | Contribution technique |
| 10 | 132 Pattern | [LC 456](https://leetcode.com/problems/132-pattern/) | Med | Reverse Mono Stack | 25m | Non-obvious stack usage |
| 11 | Decode String | [LC 394](https://leetcode.com/problems/decode-string/) | Med | Stack + String | 20m | Nested structure handling |
| 12 | Remove K Digits | [LC 402](https://leetcode.com/problems/remove-k-digits/) | Med | Greedy Stack | 20m | Monotonic greedy |
| 13 | Basic Calculator II | [LC 227](https://leetcode.com/problems/basic-calculator-ii/) | Med | Expression Eval | 25m | Operator precedence |
| 14 | Asteroid Collision | [LC 735](https://leetcode.com/problems/asteroid-collision/) | Med | Simulation Stack | 20m | Stack simulation |
| 15 | Implement Queue using Stacks | [LC 232](https://leetcode.com/problems/implement-queue-using-stacks/) | Easy | Design | 15m | Amortized O(1) |
| 16 | Frequency Stack | [LC 895](https://leetcode.com/problems/maximum-frequency-stack/) | Hard | Design | 25m | HashMap + Stack combo |

---

## 📚 Topic 5: Linked List

**Pattern:** Fast-slow pointers, reverse techniques, merge patterns, dummy node usage.
**When to use:** In-place list manipulation, cycle detection, merge operations.
**Common mistakes:** Losing reference to head, not handling edge cases (empty list, single node), not using dummy node.

| # | Problem | Link | Diff | Pattern | Time | Why Important |
|---|---------|------|------|---------|------|---------------|
| 1 | Reverse Linked List | [LC 206](https://leetcode.com/problems/reverse-linked-list/) | Easy | 3-Pointer | 10m | Most fundamental LL operation |
| 2 | Reverse in K-Groups | [LC 25](https://leetcode.com/problems/reverse-nodes-in-k-group/) | Hard | K-Reverse | 30m | FAANG classic hard |
| 3 | Middle of Linked List | [LC 876](https://leetcode.com/problems/middle-of-the-linked-list/) | Easy | Fast-Slow | 5m | Fast-slow foundation |
| 4 | Delete Nth From End | [LC 19](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) | Med | Two Pointer Gap | 15m | Gap technique |
| 5 | Linked List Cycle | [LC 141](https://leetcode.com/problems/linked-list-cycle/) | Easy | Floyd's | 10m | Cycle detection foundation |
| 6 | Linked List Cycle II | [LC 142](https://leetcode.com/problems/linked-list-cycle-ii/) | Med | Floyd's + Math | 15m | Find cycle start |
| 7 | Merge Two Sorted Lists | [LC 21](https://leetcode.com/problems/merge-two-sorted-lists/) | Easy | Merge | 10m | Merge pattern foundation |
| 8 | Merge K Sorted Lists | [LC 23](https://leetcode.com/problems/merge-k-sorted-lists/) | Hard | Heap + Merge | 25m | Heap + divide-and-conquer |
| 9 | Sort List | [LC 148](https://leetcode.com/problems/sort-list/) | Med | Merge Sort LL | 25m | O(nlogn) in-place |
| 10 | Palindrome Linked List | [LC 234](https://leetcode.com/problems/palindrome-linked-list/) | Easy | Reverse Half | 15m | Combines mid + reverse |
| 11 | Reorder List | [LC 143](https://leetcode.com/problems/reorder-list/) | Med | Mid + Reverse + Merge | 20m | Combines 3 techniques |
| 12 | Copy List with Random Pointer | [LC 138](https://leetcode.com/problems/copy-list-with-random-pointer/) | Med | Interleave / HashMap | 20m | O(1) space clone |
| 13 | Intersection of Two Lists | [LC 160](https://leetcode.com/problems/intersection-of-two-linked-lists/) | Easy | Two Pointer | 15m | Length difference trick |
| 14 | Odd Even Linked List | [LC 328](https://leetcode.com/problems/odd-even-linked-list/) | Med | Rearrange | 15m | Segregation pattern |
| 15 | Swap Nodes in Pairs | [LC 24](https://leetcode.com/problems/swap-nodes-in-pairs/) | Med | Recursive/Iterative | 15m | Pairwise manipulation |
| 16 | Rotate List | [LC 61](https://leetcode.com/problems/rotate-list/) | Med | Cycle + Cut | 15m | Make circular then cut |
| 17 | LRU Cache | [LC 146](https://leetcode.com/problems/lru-cache/) | Med | DLL + HashMap | 25m | TOP design problem |
| 18 | Flatten Multilevel DLL | [LC 430](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) | Med | DFS/Stack | 20m | Recursive flattening |

---

## 📚 Topic 6: Heap / Priority Queue

**Pattern:** Top-K, Kth element, merge-K, two-heap median, greedy scheduling.
**When to use:** "K largest/smallest", stream problems, greedy with dynamic ordering.
**Common mistakes:** Min-heap vs max-heap confusion, not maintaining heap size K, missing edge cases in two-heap.

| # | Problem | Link | Diff | Pattern | Time | Why Important |
|---|---------|------|------|---------|------|---------------|
| 1 | Kth Largest Element | [LC 215](https://leetcode.com/problems/kth-largest-element-in-an-array/) | Med | Quick Select / Heap | 15m | Core Kth pattern |
| 2 | Top K Frequent Elements | [LC 347](https://leetcode.com/problems/top-k-frequent-elements/) | Med | Heap + HashMap | 15m | Frequency + heap |
| 3 | Find Median from Stream | [LC 295](https://leetcode.com/problems/find-median-from-data-stream/) | Hard | Two Heaps | 25m | Classic two-heap design |
| 4 | Merge K Sorted Lists | [LC 23](https://leetcode.com/problems/merge-k-sorted-lists/) | Hard | Min-Heap | 25m | Heap-driven merge |
| 5 | K Closest Points | [LC 973](https://leetcode.com/problems/k-closest-points-to-origin/) | Med | Max-Heap size K | 15m | Maintain K-size heap |
| 6 | Task Scheduler | [LC 621](https://leetcode.com/problems/task-scheduler/) | Med | Greedy + Heap | 25m | Greedy scheduling |
| 7 | Reorganize String | [LC 767](https://leetcode.com/problems/reorganize-string/) | Med | Max-Heap | 20m | Greedy character placement |
| 8 | IPO | [LC 502](https://leetcode.com/problems/ipo/) | Hard | Two Heaps + Greedy | 25m | Capital greedy pattern |
| 9 | Sliding Window Maximum | [LC 239](https://leetcode.com/problems/sliding-window-maximum/) | Hard | Deque / Heap | 25m | Window max pattern |
| 10 | Meeting Rooms II | [LC 253](https://leetcode.com/problems/meeting-rooms-ii/) | Med | Min-Heap | 15m | Interval + heap |
| 11 | Meeting Rooms III | [LC 2402](https://leetcode.com/problems/meeting-rooms-iii/) | Hard | Two Heaps | 30m | Advanced scheduling |
| 12 | K Pairs Smallest Sums | [LC 373](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/) | Med | Min-Heap BFS | 25m | Heap-driven BFS |
| 13 | Furthest Building | [LC 1642](https://leetcode.com/problems/furthest-building-you-can-reach/) | Med | Min-Heap Greedy | 20m | Lazy allocation |
| 14 | Sort Characters by Frequency | [LC 451](https://leetcode.com/problems/sort-characters-by-frequency/) | Med | Heap / Bucket | 10m | Frequency sorting |
| 15 | Connect Ropes Min Cost | [GFG](https://www.geeksforgeeks.org/connect-n-ropes-minimum-cost/) | Med | Min-Heap | 15m | Greedy merge cost |


---

## 📚 Topic 7: Trees & BST

**Pattern:** DFS (pre/in/post), BFS level order, Morris traversal, LCA, serialize, views.
**When to use:** Hierarchical data, path problems, BST ordering properties.
**Common mistakes:** Not handling null nodes, returning wrong value in recursive calls, confusing height vs depth.
**Key techniques:** Recursive structure: base case + recurse left + recurse right. BST: inorder = sorted.

| # | Problem | Link | Diff | Pattern | Time | Why Important |
|---|---------|------|------|---------|------|---------------|
| 1 | Level Order Traversal | [LC 102](https://leetcode.com/problems/binary-tree-level-order-traversal/) | Med | BFS | 10m | BFS foundation |
| 2 | Zigzag Level Order | [LC 103](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/) | Med | BFS + Flag | 15m | BFS variant |
| 3 | Max Depth | [LC 104](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | Easy | DFS | 5m | Recursion foundation |
| 4 | Diameter of Binary Tree | [LC 543](https://leetcode.com/problems/diameter-of-binary-tree/) | Easy | DFS + Global | 15m | Height-based DFS |
| 5 | Maximum Path Sum | [LC 124](https://leetcode.com/problems/binary-tree-maximum-path-sum/) | Hard | DFS + Global | 25m | Hardest tree DFS |
| 6 | Path Sum III | [LC 437](https://leetcode.com/problems/path-sum-iii/) | Med | Prefix Sum + DFS | 20m | Tree + prefix sum combo |
| 7 | Symmetric Tree | [LC 101](https://leetcode.com/problems/symmetric-tree/) | Easy | Mirror DFS | 10m | Structural comparison |
| 8 | Invert Binary Tree | [LC 226](https://leetcode.com/problems/invert-binary-tree/) | Easy | DFS/BFS | 5m | Simple but classic |
| 9 | Validate BST | [LC 98](https://leetcode.com/problems/validate-binary-search-tree/) | Med | Inorder / Range | 15m | BST property check |
| 10 | Kth Smallest in BST | [LC 230](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) | Med | Inorder Count | 15m | BST ordering |
| 11 | LCA of BST | [LC 235](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) | Med | BST Split | 10m | BST property |
| 12 | LCA of Binary Tree | [LC 236](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) | Med | DFS | 15m | FAANG must-know |
| 13 | Construct from Pre+In | [LC 105](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | Med | Divide & Conquer | 20m | Tree construction |
| 14 | Serialize & Deserialize | [LC 297](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/) | Hard | BFS/DFS Design | 25m | Complex design |
| 15 | Binary Tree Right Side View | [LC 199](https://leetcode.com/problems/binary-tree-right-side-view/) | Med | BFS Last | 15m | View pattern |
| 16 | Vertical Order Traversal | [LC 987](https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/) | Hard | BFS + Sort | 25m | Column-based traversal |
| 17 | Flatten to Linked List | [LC 114](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/) | Med | Morris / Stack | 15m | In-place restructuring |
| 18 | Delete Node in BST | [LC 450](https://leetcode.com/problems/delete-node-in-a-bst/) | Med | BST Delete | 20m | BST maintenance |
| 19 | Recover BST | [LC 99](https://leetcode.com/problems/recover-binary-search-tree/) | Med | Inorder Violation | 20m | Find swapped nodes |
| 20 | All Nodes Distance K | [LC 863](https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/) | Med | Graph Conversion | 25m | Tree→Graph BFS |
| 21 | Binary Tree Cameras | [LC 968](https://leetcode.com/problems/binary-tree-cameras/) | Hard | Greedy DFS | 30m | 3-state greedy |
| 22 | House Robber III | [LC 337](https://leetcode.com/problems/house-robber-iii/) | Med | Tree DP | 20m | DP on tree |
| 23 | Max Width of Binary Tree | [LC 662](https://leetcode.com/problems/maximum-width-of-binary-tree/) | Med | BFS + Indexing | 20m | Null-aware width |
| 24 | Populating Next Right Pointers | [LC 117](https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/) | Med | BFS | 20m | O(1) space BFS |
| 25 | Count Good Nodes | [LC 1448](https://leetcode.com/problems/count-good-nodes-in-binary-tree/) | Med | DFS + Max | 15m | Path-max tracking |

---

## 📚 Topic 8: Graphs

**Pattern:** BFS/DFS traversal, topological sort, shortest path (Dijkstra/Bellman-Ford), DSU, MST.
**When to use:** Connected components, shortest path, dependency ordering, network problems.
**Common mistakes:** Not marking visited before pushing to queue (BFS), wrong relaxation in Dijkstra, cycle in topo sort.
**Key techniques:** BFS for shortest unweighted, Dijkstra for weighted, Kahn's for topo sort, DSU for components.

| # | Problem | Link | Diff | Pattern | Time | Why Important |
|---|---------|------|------|---------|------|---------------|
| 1 | Number of Islands | [LC 200](https://leetcode.com/problems/number-of-islands/) | Med | BFS/DFS Grid | 15m | Grid traversal foundation |
| 2 | Rotten Oranges | [LC 994](https://leetcode.com/problems/rotting-oranges/) | Med | Multi-source BFS | 15m | BFS from multiple sources |
| 3 | 01 Matrix | [LC 542](https://leetcode.com/problems/01-matrix/) | Med | Multi-source BFS | 20m | Distance BFS |
| 4 | Surrounded Regions | [LC 130](https://leetcode.com/problems/surrounded-regions/) | Med | Border DFS | 15m | Reverse thinking |
| 5 | Pacific Atlantic Water Flow | [LC 417](https://leetcode.com/problems/pacific-atlantic-water-flow/) | Med | Two-source DFS | 20m | Meet-in-middle DFS |
| 6 | Number of Provinces | [LC 547](https://leetcode.com/problems/number-of-provinces/) | Med | DFS/DSU | 10m | Connected components |
| 7 | Detect Cycle Undirected | [GFG](https://www.geeksforgeeks.org/detect-cycle-undirected-graph/) | Med | DFS Parent | 15m | Cycle detection foundation |
| 8 | Detect Cycle Directed | [GFG](https://www.geeksforgeeks.org/detect-cycle-in-a-graph/) | Med | DFS Color | 15m | 3-color marking |
| 9 | Course Schedule I | [LC 207](https://leetcode.com/problems/course-schedule/) | Med | Topo Sort | 15m | Kahn's algorithm |
| 10 | Course Schedule II | [LC 210](https://leetcode.com/problems/course-schedule-ii/) | Med | Topo Sort | 15m | Topo sort ordering |
| 11 | Alien Dictionary | [GFG](https://www.geeksforgeeks.org/given-sorted-dictionary-find-precedence-characters/) | Hard | Topo Sort | 25m | Graph from constraints |
| 12 | Dijkstra's Algorithm | — | Med | SSSP | 20m | Shortest path foundation |
| 13 | Network Delay Time | [LC 743](https://leetcode.com/problems/network-delay-time/) | Med | Dijkstra | 20m | Dijkstra application |
| 14 | Cheapest Flights K Stops | [LC 787](https://leetcode.com/problems/cheapest-flights-within-k-stops/) | Med | BFS/Bellman | 25m | Constrained shortest path |
| 15 | Path with Min Effort | [LC 1631](https://leetcode.com/problems/path-with-minimum-effort/) | Med | Dijkstra Grid | 20m | Dijkstra on grid |
| 16 | Shortest Path Binary Matrix | [LC 1091](https://leetcode.com/problems/shortest-path-in-binary-matrix/) | Med | BFS | 15m | 8-directional BFS |
| 17 | Swim in Rising Water | [LC 778](https://leetcode.com/problems/swim-in-rising-water/) | Hard | Dijkstra / BS | 25m | Min-max path |
| 18 | Redundant Connection | [LC 684](https://leetcode.com/problems/redundant-connection/) | Med | DSU | 15m | Union-Find application |
| 19 | Accounts Merge | [LC 721](https://leetcode.com/problems/accounts-merge/) | Med | DSU | 25m | Real-world DSU |
| 20 | Min Cost Connect Points | [LC 1584](https://leetcode.com/problems/min-cost-to-connect-all-points/) | Med | Prim's/Kruskal's | 20m | MST foundation |
| 21 | Word Ladder | [LC 127](https://leetcode.com/problems/word-ladder/) | Hard | BFS | 25m | Word graph BFS |
| 22 | Word Search II | [LC 212](https://leetcode.com/problems/word-search-ii/) | Hard | Trie + DFS | 30m | Trie + backtracking |
| 23 | Critical Connections | [LC 1192](https://leetcode.com/problems/critical-connections-in-a-network/) | Hard | Tarjan's | 30m | Bridge finding |
| 24 | Shortest Bridge | [LC 934](https://leetcode.com/problems/shortest-bridge/) | Med | DFS + BFS | 25m | Two-phase BFS |
| 25 | Parallel Courses III | [LC 2050](https://leetcode.com/problems/parallel-courses-iii/) | Hard | Topo + DP | 25m | Topo sort + DP |

---

## 📚 Topic 9: Dynamic Programming

**Pattern:** 1D, 2D Grid, Knapsack/Subsequence, String DP, MCM/Partition, Stock series.
**When to use:** Overlapping subproblems + optimal substructure. "Count ways", "min/max cost", "is it possible".
**Common mistakes:** Wrong state definition, missing base cases, not memoizing, wrong transition.
**Key techniques:** Always define: State → Transition → Base Case. Start recursive, convert to tabulation.

| # | Problem | Link | Diff | Pattern | Time | Why Important |
|---|---------|------|------|---------|------|---------------|
| 1 | Climbing Stairs | [LC 70](https://leetcode.com/problems/climbing-stairs/) | Easy | 1D DP | 5m | DP foundation |
| 2 | House Robber | [LC 198](https://leetcode.com/problems/house-robber/) | Med | 1D DP | 10m | Include/exclude pattern |
| 3 | House Robber II | [LC 213](https://leetcode.com/problems/house-robber-ii/) | Med | Circular 1D DP | 15m | Circular array DP |
| 4 | LIS | [LC 300](https://leetcode.com/problems/longest-increasing-subsequence/) | Med | 1D DP / BS | 20m | Binary search optimization |
| 5 | Unique Paths | [LC 62](https://leetcode.com/problems/unique-paths/) | Med | 2D Grid DP | 10m | Grid DP foundation |
| 6 | Minimum Path Sum | [LC 64](https://leetcode.com/problems/minimum-path-sum/) | Med | 2D Grid DP | 10m | Grid cost DP |
| 7 | Maximal Square | [LC 221](https://leetcode.com/problems/maximal-square/) | Med | 2D DP | 20m | Non-obvious transition |
| 8 | Dungeon Game | [LC 174](https://leetcode.com/problems/dungeon-game/) | Hard | Reverse Grid DP | 25m | Bottom-up grid |
| 9 | Cherry Pickup | [LC 741](https://leetcode.com/problems/cherry-pickup/) | Hard | 3D Grid DP | 30m | Two-path DP |
| 10 | Subset Sum | [GFG](https://www.geeksforgeeks.org/subset-sum-problem-dp-25/) | Med | Knapsack 0/1 | 15m | Knapsack foundation |
| 11 | Partition Equal Subset Sum | [LC 416](https://leetcode.com/problems/partition-equal-subset-sum/) | Med | Knapsack | 15m | Reduce to subset sum |
| 12 | Target Sum | [LC 494](https://leetcode.com/problems/target-sum/) | Med | Knapsack Count | 20m | Count subsets variant |
| 13 | Coin Change | [LC 322](https://leetcode.com/problems/coin-change/) | Med | Unbounded Knapsack | 15m | Infinite supply variant |
| 14 | Coin Change II | [LC 518](https://leetcode.com/problems/coin-change-ii/) | Med | Unbounded Count | 15m | Combination counting |
| 15 | 0/1 Knapsack | [GFG](https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/) | Med | Knapsack | 15m | Classic DP |
| 16 | LCS | [LC 1143](https://leetcode.com/problems/longest-common-subsequence/) | Med | String DP | 15m | Two-string DP foundation |
| 17 | Longest Palindromic Subsequence | [LC 516](https://leetcode.com/problems/longest-palindromic-subsequence/) | Med | String DP | 15m | LCS on reverse |
| 18 | Longest Palindromic Substring | [LC 5](https://leetcode.com/problems/longest-palindromic-substring/) | Med | Expand Center / DP | 20m | Expand or Manacher |
| 19 | Edit Distance | [LC 72](https://leetcode.com/problems/edit-distance/) | Med | String DP | 20m | Classic string DP |
| 20 | Distinct Subsequences | [LC 115](https://leetcode.com/problems/distinct-subsequences/) | Hard | String DP | 25m | Count subsequences |
| 21 | Wildcard Matching | [LC 44](https://leetcode.com/problems/wildcard-matching/) | Hard | String DP | 25m | Pattern matching DP |
| 22 | Shortest Common Supersequence | [LC 1092](https://leetcode.com/problems/shortest-common-supersequence/) | Hard | LCS variant | 25m | Build from LCS |
| 23 | MCM (Matrix Chain) | [GFG](https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/) | Hard | Partition DP | 25m | MCM pattern foundation |
| 24 | Burst Balloons | [LC 312](https://leetcode.com/problems/burst-balloons/) | Hard | Interval DP | 30m | Think in terms of "last" |
| 25 | Palindrome Partitioning II | [LC 132](https://leetcode.com/problems/palindrome-partitioning-ii/) | Hard | Partition DP | 25m | Min cuts |
| 26 | Min Cost Cut Stick | [LC 1547](https://leetcode.com/problems/minimum-cost-to-cut-a-stick/) | Hard | Interval DP | 25m | MCM variant |
| 27 | Stock I | [LC 121](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Easy | Track Min | 5m | Foundation |
| 28 | Stock II | [LC 122](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) | Med | Greedy / DP | 10m | Unlimited transactions |
| 29 | Stock III (2 txns) | [LC 123](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/) | Hard | State Machine DP | 25m | 4-state DP |
| 30 | Stock IV (K txns) | [LC 188](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/) | Hard | Generalized State DP | 25m | General K transactions |
| 31 | Stock with Cooldown | [LC 309](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/) | Med | State Machine DP | 20m | 3-state transition |
| 32 | Stock with Fee | [LC 714](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/) | Med | State Machine DP | 15m | Add fee to transition |
| 33 | Decode Ways | [LC 91](https://leetcode.com/problems/decode-ways/) | Med | 1D DP | 15m | String → number DP |
| 34 | Word Break | [LC 139](https://leetcode.com/problems/word-break/) | Med | 1D DP + Set | 15m | Dictionary matching |
| 35 | Partition to K Subsets | [LC 698](https://leetcode.com/problems/partition-to-k-equal-sum-subsets/) | Med | Bitmask DP | 25m | Bitmask on subsets |

---

## 📚 Topic 10: Greedy & Intervals

| # | Problem | Link | Diff | Pattern | Time | Why Important |
|---|---------|------|------|---------|------|---------------|
| 1 | Activity Selection | [GFG](https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/) | Med | Sort by End | 15m | Greedy foundation |
| 2 | Job Sequencing | [GFG](https://www.geeksforgeeks.org/job-sequencing-problem/) | Med | Deadline Greedy | 20m | Classic greedy |
| 3 | Min Platforms | [GFG](https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/) | Med | Sweep Line | 15m | Event-based counting |
| 4 | Meeting Rooms II | [LC 253](https://leetcode.com/problems/meeting-rooms-ii/) | Med | Sweep / Heap | 15m | Min concurrent |
| 5 | Interval List Intersections | [LC 986](https://leetcode.com/problems/interval-list-intersections/) | Med | Two Pointer | 15m | Interval merging |
| 6 | Car Pooling | [LC 1094](https://leetcode.com/problems/car-pooling/) | Med | Sweep Line | 15m | Difference array |
| 7 | Min Arrows Burst Balloons | [LC 452](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/) | Med | Sort + Greedy | 15m | Overlapping intervals |
| 8 | Min Taps Water Garden | [LC 1326](https://leetcode.com/problems/minimum-number-of-taps-to-open-to-water-a-garden/) | Hard | Jump Game variant | 25m | Coverage problem |

---

## 📚 Topic 11: Backtracking & Recursion

| # | Problem | Link | Diff | Pattern | Time | Why Important |
|---|---------|------|------|---------|------|---------------|
| 1 | Subsets | [LC 78](https://leetcode.com/problems/subsets/) | Med | Backtrack | 15m | Power set |
| 2 | Subsets II | [LC 90](https://leetcode.com/problems/subsets-ii/) | Med | Backtrack + Skip | 15m | Handle duplicates |
| 3 | Permutations | [LC 46](https://leetcode.com/problems/permutations/) | Med | Backtrack | 15m | Permutation generation |
| 4 | Combination Sum | [LC 39](https://leetcode.com/problems/combination-sum/) | Med | Backtrack | 15m | Unlimited pick |
| 5 | Combination Sum II | [LC 40](https://leetcode.com/problems/combination-sum-ii/) | Med | Backtrack + Skip | 15m | Unique combinations |
| 6 | Palindrome Partitioning | [LC 131](https://leetcode.com/problems/palindrome-partitioning/) | Med | Backtrack | 20m | String partitioning |
| 7 | N-Queens | [LC 51](https://leetcode.com/problems/n-queens/) | Hard | Backtrack | 25m | Classic constraint |
| 8 | Sudoku Solver | [LC 37](https://leetcode.com/problems/sudoku-solver/) | Hard | Backtrack | 30m | Constraint propagation |
| 9 | Generate Parentheses | [LC 22](https://leetcode.com/problems/generate-parentheses/) | Med | Backtrack | 15m | Open/close counting |
| 10 | Letter Combinations Phone | [LC 17](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) | Med | Backtrack | 10m | Multi-choice |
| 11 | Word Search | [LC 79](https://leetcode.com/problems/word-search/) | Med | DFS Backtrack | 20m | Grid backtracking |

---

## 📚 Topic 12: Trie & Advanced

| # | Problem | Link | Diff | Pattern | Time | Why Important |
|---|---------|------|------|---------|------|---------------|
| 1 | Implement Trie | [LC 208](https://leetcode.com/problems/implement-trie-prefix-tree/) | Med | Design | 15m | Trie foundation |
| 2 | Add & Search Words | [LC 211](https://leetcode.com/problems/design-add-and-search-words-data-structure/) | Med | Trie + DFS | 20m | Wildcard search |
| 3 | Word Search II | [LC 212](https://leetcode.com/problems/word-search-ii/) | Hard | Trie + Backtrack | 30m | Grid + Trie combo |
| 4 | Maximum XOR Two Numbers | [LC 421](https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/) | Med | Bit Trie | 25m | Bitwise trie |
| 5 | Replace Words | [LC 648](https://leetcode.com/problems/replace-words/) | Med | Trie | 15m | Prefix matching |

---

## 📊 Problem Count Summary

| Topic | Must-Do Count | Key Difficulty |
|-------|:------------:|:--------------:|
| Arrays & Prefix Sum | 28 | Easy–Med |
| Binary Search | 18 | Med–Hard |
| Sliding Window & Two Pointers | 20 | Med–Hard |
| Stack & Monotonic Stack | 16 | Med–Hard |
| Linked List | 18 | Easy–Hard |
| Heap / Priority Queue | 15 | Med–Hard |
| Trees & BST | 25 | Easy–Hard |
| Graphs | 25 | Med–Hard |
| Dynamic Programming | 35 | Med–Hard |
| Greedy & Intervals | 8 | Med |
| Backtracking | 11 | Med–Hard |
| Trie & Advanced | 5 | Med–Hard |
| **TOTAL** | **~224** | — |

> 224 high-quality problems covering all FAANG patterns. Realistic for 60 days at 8 hrs/day (~4 problems/day + revision).

---

*Generated: 2026-02-27. Sources: DSA_1.md + DSA_2.md. Deduplicated and pattern-optimized.*
