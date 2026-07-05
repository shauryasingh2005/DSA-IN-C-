# DSA in C++ 🚀

Welcome to my repository for Data Structures and Algorithms (DSA) in C++! 

This repository serves as a dedicated space to track my journey, practice problems, and implement core concepts as I learn.

---

## 📚 Core Algorithms & Concepts in Depth

Below are detailed explanations, complexity analyses, and walkthroughs of the topics covered in this repository.

---

### 1. Recursion & Backtracking

Recursion is a process where a function calls itself directly or indirectly to solve a smaller instance of the same problem.

#### Key Concepts:
*   **Base Case / Base Call:** The terminating condition that stops the recursion. Without a proper base case, the function calls itself indefinitely, leading to a stack overflow error.
*   **Recursion Flow (Call Stack):** Every recursive call adds a new frame to the call stack containing its parameters and local variables. Once the base case is reached, the stack begins to unwind (pop frames).
*   **Backtracking Recursion:** A technique where we search for a solution by doing work **after** the recursive call returns (during stack unwinding). For example:
    *   *Normal printing (1 to N):* Print the number, then make the recursive call.
    *   *Backtracking printing (1 to N):* Call the function recursively with `c-1`, and **then** print `c` after the recursive call returns. This prints in ascending order even when traversing downwards.
*   **Multiple Recursive Calls:** When a function calls itself more than once in a single execution path (e.g., Fibonacci numbers where $F(N) = F(N-1) + F(N-2)$).

#### Fibonacci Stack Unwinding Trace ($F(4)$):
```
                       F(4)
                     /      \
                 F(3)        F(2)
                /    \      /    \
             F(2)   F(1)  F(1)   F(0)
            /    \
         F(1)   F(0)
```
*   Each node returns its value up to its parent once the base cases ($F(1) = 1, F(0) = 0$) are resolved.

---

### 2. Hashing & Maps

Hashing is a technique used to uniquely identify objects and store/retrieve them in constant time.

#### Precomputation vs. Fetching:
*   **Precomputation:** Processing the input data once to build a lookup structure (e.g. counting frequencies).
*   **Fetching:** Querying the lookup structure in $\mathcal{O}(1)$ or $\mathcal{O}(\log N)$ time.

#### Hashing Types:
1. **Number Hashing:** Using a direct index array where the index matches the number, and the value stores its frequency.
2. **Character & String Hashing:** Using ASCII manipulation to fit characters into a small array. For lowercase English letters (`'a'` to `'z'`), we subtract `'a'` (e.g., `index = ch - 'a'`) to map them to indexes `0` to `25`.
3. **Map vs. Unordered Map (`std::map` vs `std::unordered_map`):**

| Feature | `std::map` | `std::unordered_map` |
| :--- | :--- | :--- |
| **Internal Structure** | Self-balancing BST (Red-Black Tree) | Hash Table (Bucket array) |
| **Time Complexity (Search)** | $\mathcal{O}(\log N)$ (Always) | $\mathcal{O}(1)$ average, $\mathcal{O}(N)$ worst |
| **Element Order** | Sorted by key | Unsorted / Random |
| **Keys Allowed** | Any comparable type (needs `<` operator) | Only hashable types |

---

### 3. Divide & Conquer Paradigm
The **Divide and Conquer** paradigm is a fundamental algorithm design pattern:
1. **Divide:** Split the problem into smaller, independent sub-problems.
2. **Conquer:** Solve the sub-problems recursively. If they are small enough (base case), solve them directly.
3. **Combine:** Merge the solutions of the sub-problems to form the final solution to the original problem.

---

### 4. Sorting Algorithms

#### Selection Sort
*   **Concept:** Divide the array into sorted and unsorted parts. Repeatedly find the minimum element in the unsorted part and swap it with the first element of that part.
*   **Complexity:** Time: $\mathcal{O}(N^2)$ (all cases) | Space: $\mathcal{O}(1)$

#### Bubble Sort
*   **Concept:** Repeatedly step through the list, compare adjacent elements, and swap them if they are in the wrong order.
*   **Complexity:** Time: $\mathcal{O}(N^2)$ worst/avg, $\mathcal{O}(N)$ best (if optimized with swap flag) | Space: $\mathcal{O}(1)$

#### Insertion Sort
*   **Concept:** Build the sorted array one item at a time by inserting each new element into its proper position relative to already-sorted elements.
*   **Complexity:** Time: $\mathcal{O}(N^2)$ worst/avg, $\mathcal{O}(N)$ best | Space: $\mathcal{O}(1)$

#### Merge Sort
*   **Concept:** A Divide & Conquer algorithm. Divide the array into halves, sort them recursively, and merge the sorted halves.
*   **Complexity:** Time: $\mathcal{O}(N \log N)$ (all cases) | Space: $\mathcal{O}(N)$ (requires auxiliary space for merging)

#### Summary Table:
| Algorithm | Best Time | Average Time | Worst Time | Space Complexity | Stable? |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Selection Sort** | $\mathcal{O}(N^2)$ | $\mathcal{O}(N^2)$ | $\mathcal{O}(N^2)$ | $\mathcal{O}(1)$ | No |
| **Bubble Sort** | $\mathcal{O}(N)$ | $\mathcal{O}(N^2)$ | $\mathcal{O}(N^2)$ | $\mathcal{O}(1)$ | Yes |
| **Insertion Sort** | $\mathcal{O}(N)$ | $\mathcal{O}(N^2)$ | $\mathcal{O}(N^2)$ | $\mathcal{O}(1)$ | Yes |
| **Merge Sort** | $\mathcal{O}(N \log N)$ | $\mathcal{O}(N \log N)$ | $\mathcal{O}(N \log N)$ | $\mathcal{O}(N)$ | Yes |

---

### 5. Two-Pointer Technique (In-Depth)
The **Two-Pointer Technique** uses two indices to traverse an array or list synchronously.

#### Patterns:
1. **Opposite Directions (Left/Right Pointer):**
   *   Used on sorted arrays.
   *   One pointer starts at the beginning (`left = 0`) and the other at the end (`right = size - 1`).
   *   They move toward each other based on condition checks.
   *   *Examples:* Two Sum on sorted array (`arr[left] + arr[right] == target`), array reversal.
2. **Same Direction (Fast/Slow Pointer / Sliding Window):**
   *   One pointer moves faster than the other, or both define a sliding window boundary.
   *   *Examples:* Cycle detection, maximum sum subarray of size K.
3. **Three-Pointer / Partitioning (Dutch National Flag Algorithm):**
   *   Used to sort elements into three distinct groups (e.g., `0`s, `1`s, and `2`s) in a single pass.
   *   Three pointers (`low`, `mid`, `high`) partition the array such that all elements before `low` are `0`, elements from `low` to `mid-1` are `1`, and elements after `high` are `2`.

---

### 6. Multi-Pointer / 3Sum Problems

#### 3Sum (Unique Triplets summing to 0)
*   **Concept:** Find all unique triplets `[nums[i], nums[j], nums[k]]` such that `nums[i] + nums[j] + nums[k] == 0`.
*   **Approach:** Sort the array. Iterate through fixing the first element `nums[i]`. For each fixed element, use two pointers (`l = i+1` and `r = n-1`) to find pairs that sum to `-nums[i]`. Skip duplicate values for `nums[i]`, `nums[l]`, and `nums[r]` to avoid duplicates.
*   **Complexity:** Time: $\mathcal{O}(N^2)$ | Space: $\mathcal{O}(1)$ or $\mathcal{O}(N)$ depending on sorting.

#### 3Sum Closest
*   **Concept:** Find three integers in `nums` such that their sum is closest to `target`.
*   **Approach:** Sort the array. Iterate fixing the first element `nums[i]`, and use two pointers (`l = i+1` and `r = n-1`). Track the sum that minimizes `|sum - target|`. Move pointers closer depending on whether the current sum is less than or greater than `target`.
*   **Complexity:** Time: $\mathcal{O}(N^2)$ | Space: $\mathcal{O}(1)$

#### 3Sum Smallest
*   **Concept:** Find the number of index triplets `i, j, k` with `0 <= i < j < k < n` satisfying `nums[i] + nums[j] + nums[k] < target`.
*   **Approach:** Sort the array. Fix the first element `nums[i]`. With two pointers `l = i+1` and `r = n-1`, if `nums[i] + nums[l] + nums[r] < target`, then any triplet with third index from `l+1` to `r` is also valid (since array is sorted). Add `r - l` to the count and increment `l`. Otherwise, decrement `r`.
*   **Complexity:** Time: $\mathcal{O}(N^2)$ | Space: $\mathcal{O}(1)$

---

### 7. Sorting Colors (Dutch National Flag Algorithm)
*   **2-Pass Counting Sort:** Scan the array once to count the number of `0`s, `1`s, and `2`s, then write them back sequentially.
*   **1-Pass DNF Pointer Algorithm:** Maintain three pointers `low = 0`, `mid = 0`, and `high = n-1`.
    *   If `nums[mid] == 0`: Swap `nums[low]` and `nums[mid]`, increment both `low` and `mid`.
    *   If `nums[mid] == 1`: Increment `mid`.
    *   If `nums[mid] == 2`: Swap `nums[mid]` and `nums[high]`, decrement `high` (do not increment `mid` as the swapped value needs to be processed).
*   **Complexity:** Time: $\mathcal{O}(N)$ in a single pass | Space: $\mathcal{O}(1)$

---

## 📌 Repository File Mapping

*   **Recursion & Backtracking:** (`L9recursion.cpp`)
*   **Hashing & Maps:** (`L10hashing.cpp`, `c.cpp`)
*   **Arrays & Basics:** (`L6array.cpp`, `L1,L2.cpp`, `L3.cpp`, etc.)
*   **Sorting Algorithms:** (`L11sorting.cpp`) - Includes Selection, Insertion, Bubble, and Merge Sort.
*   **Two-Pointer & Multi-Pointer (3Sum, Closest, Smallest, DNF, Sort Colors):** (`twopointer.cpp`, `LEETCODE.cpp`)
*   **Basic Counting Sort / Colors:** (`c.cpp`)

---
*Happy Coding!* 😊
