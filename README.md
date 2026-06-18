# DSA in C++ 🚀

Welcome to my repository for Data Structures and Algorithms (DSA) in C++! 

This repository serves as a dedicated space to track my journey, practice problems, and implement core concepts as I learn.

---

## 📚 Core Algorithms & Concepts in Depth

Below are detailed explanations, complexity analyses, and code walks of the sorting and searching paradigms implemented in this repository.

### 1. Divide & Conquer Paradigm
The **Divide and Conquer** paradigm is a fundamental algorithm design pattern. It works by recursively breaking down a problem into two or more sub-problems of the same or related type, until these become simple enough to be solved directly. The solutions to the sub-problems are then combined to give a solution to the original problem.

It consists of three main steps:
1. **Divide:** Split the problem into smaller, independent sub-problems.
2. **Conquer:** Solve the sub-problems recursively. If they are small enough (base case), solve them directly.
3. **Combine:** Merge the solutions of the sub-problems to form the final solution to the original problem.

---

### 2. Merge Sort
**Merge Sort** is a classic sorting algorithm that uses the **Divide & Conquer** paradigm. It is a stable, comparison-based sorting algorithm.

#### How It Works:
1. **Divide:** Find the midpoint of the array, `mid = (low + high) / 2`, and split the array into two halves.
2. **Conquer:** Recursively sort both halves using Merge Sort.
3. **Combine:** Merge the two sorted halves back into a single sorted array.

```
       [4, 3, 2, 5, 1]          <- Unsorted Array
         /          \
     [4, 3]        [2, 5, 1]    <- Divide (Split)
     /    \        /       \
   [4]    [3]    [2]     [5, 1]
                          /   \
                        [5]   [1]
    \      /      |       \   /
     [3, 4]      [2]      [1, 5]
       \          \        /
     [3, 4]         [1, 2, 5]   <- Conquer (Merge Sorted Sub-arrays)
         \          /
       [1, 2, 3, 4, 5]          <- Fully Sorted Array
```

#### Complexity Analysis:
*   **Time Complexity:**
    *   **Best Case:** $\mathcal{O}(N \log N)$
    *   **Average Case:** $\mathcal{O}(N \log N)$
    *   **Worst Case:** $\mathcal{O}(N \log N)$
*   **Space Complexity:** $\mathcal{O}(N)$ (Auxiliary space for the temporary merging array/vector).

---

### 3. Selection Sort
**Selection Sort** is a simple comparison-based sorting algorithm. It divides the input list into two parts: the sublist of items already sorted, and the sublist of items remaining to be sorted.

#### How It Works:
1. Start with the first element of the unsorted part.
2. Search through the unsorted array to find the minimum value.
3. Swap this minimum value with the first element of the unsorted part.
4. Move the boundary between the sorted and unsorted parts one element to the right.
5. Repeat until the entire array is sorted.

#### Complexity Analysis:
*   **Time Complexity:**
    *   **Best Case:** $\mathcal{O}(N^2)$ (Still scans the unsorted part)
    *   **Average Case:** $\mathcal{O}(N^2)$
    *   **Worst Case:** $\mathcal{O}(N^2)$
*   **Space Complexity:** $\mathcal{O}(1)$ (In-place sorting).

---

### 4. Bubble Sort
**Bubble Sort** is a straightforward sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

#### How It Works:
1. Compare adjacent elements (e.g., index `i` and `i+1`).
2. If `arr[i] > arr[i+1]`, swap them.
3. Repeat this process for all elements. After the first pass, the largest element "bubbles up" to its correct position at the end.
4. Perform $N-1$ passes to fully sort the array.

#### Complexity Analysis:
*   **Time Complexity:**
    *   **Best Case:** $\mathcal{O}(N)$ (With an optimized version that stops if no swaps occurred)
    *   **Average Case:** $\mathcal{O}(N^2)$
    *   **Worst Case:** $\mathcal{O}(N^2)$
*   **Space Complexity:** $\mathcal{O}(1)$ (In-place sorting).

---

### 5. Insertion Sort
**Insertion Sort** works similarly to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part.

#### How It Works:
1. Assume the first element is already sorted.
2. Take the next element from the unsorted part and compare it with elements in the sorted part (moving backwards).
3. Shift all elements in the sorted part that are larger than the key element to the right.
4. Insert the key element at its correct position.
5. Repeat for all elements.

#### Complexity Analysis:
*   **Time Complexity:**
    *   **Best Case:** $\mathcal{O}(N)$ (Array is already sorted; no shifts needed)
    *   **Average Case:** $\mathcal{O}(N^2)$
    *   **Worst Case:** $\mathcal{O}(N^2)$
*   **Space Complexity:** $\mathcal{O}(1)$ (In-place sorting).

---

### 6. Two-Pointer Technique (In-Depth)
The **Two-Pointer Technique** is an extremely efficient search/traversal pattern that uses two reference pointers (typically indices) to traverse a data structure (usually an array or linked list) in a coordinated manner. 

#### Common Patterns:
1. **Opposite Directions (Left/Right Pointer):**
   *   Used on sorted arrays.
   *   One pointer starts at the beginning (`left = 0`) and the other at the end (`right = size - 1`).
   *   They move toward each other based on condition checks (e.g., Two Sum on a sorted array, reversing an array, checking for palindromes).
2. **Same Direction (Fast/Slow Pointer / Sliding Window):**
   *   Used for finding cycles (e.g., Floyd's Cycle Detection) or processing contiguous subarrays.

#### Application Example (Two Sum on Sorted Array):
To find if two elements sum to a `target`:
*   If `arr[left] + arr[right] == target`, return the values.
*   If `arr[left] + arr[right] > target`, we need a smaller sum, so decrement `right` (`right--`).
*   If `arr[left] + arr[right] < target`, we need a larger sum, so increment `left` (`left++`).

---

## 📊 Summary of Sorting Algorithms

| Algorithm | Best Time Complexity | Average Time Complexity | Worst Time Complexity | Space Complexity | Stable? |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Selection Sort** | $\mathcal{O}(N^2)$ | $\mathcal{O}(N^2)$ | $\mathcal{O}(N^2)$ | $\mathcal{O}(1)$ | No |
| **Bubble Sort** | $\mathcal{O}(N)$ (Optimized) | $\mathcal{O}(N^2)$ | $\mathcal{O}(N^2)$ | $\mathcal{O}(1)$ | Yes |
| **Insertion Sort** | $\mathcal{O}(N)$ | $\mathcal{O}(N^2)$ | $\mathcal{O}(N^2)$ | $\mathcal{O}(1)$ | Yes |
| **Merge Sort** | $\mathcal{O}(N \log N)$ | $\mathcal{O}(N \log N)$ | $\mathcal{O}(N \log N)$ | $\mathcal{O}(N)$ | Yes |

---

## 📌 Repository File Mapping

*   **Recursion:** (`L9recursion.cpp`)
*   **Hashing & Maps:** (`L10hashing.cpp`, `c.cpp`)
*   **Arrays & Basics:** (`L6array.cpp`, `L1,L2.cpp`, `L3.cpp`, etc.)
*   **Sorting Algorithms:** (`L11sorting.cpp`) - Includes Selection, Insertion, Bubble, and Merge Sort.
*   **Two-Pointer & Array Reversal:** (`twopointer.cpp`) - Includes array summation, sorted Two Sum, and array reversal.

---
*Happy Coding!* 😊

