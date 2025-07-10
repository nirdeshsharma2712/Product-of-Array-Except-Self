# 📊 LeetCode Problem: Product of Array Except Self

## 🧩 Problem Statement

Given an integer array **nums**, return an array **answer** such that `answer[i]` is equal to the **product** of all the elements of nums except `nums[i]`.
The product of any **prefix** or **suffix** of nums is guaranteed to fit in a `32-bit` integer.

> **Note :**
> - You must write an algorithm that runs in `O(n)` time and without using the division operation.



## 🧠 Approach:  Prefix & Suffix Multiplication

- Initialize `ans[]` with all `1s`.

- Traverse left to right to build **prefix** product.

- Then **traverse** right to left to build **suffix** product, multiplying it with `ans[i]`.



## ✅ Example Walkthrough

### Example 1

##### Input: nums = [1,2,3,4]
##### Output: [24,12,8,6]


### Example 2

##### Input: [-1,1,0,-3,3]
##### Output: [0,0,9,0,0]


## 🛠️ Constraints

- `2 <= nums.length <= 10^5`
- `-30 <= nums[i] <= 30`
- The **input** is generated such that `answer[i]` is guaranteed to fit in a `32-bit` **integer**..
