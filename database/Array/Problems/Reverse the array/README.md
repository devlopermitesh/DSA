# 🧩 Problem: Reverse an Array

## 📜 Problem Statement

Given an array, reverse its elements **in-place** so that:

* The first element becomes the last
* The second becomes the second last
* And so on…

---

## ✅ Example

**Input:**

```python
[1, 2, 3, 4, 5]
```

**Output:**

```python
[5, 4, 3, 2, 1]
```

---

## 🔍 Logic & Approach

To reverse an array **in-place** (without using extra space), we use the **two-pointer technique**:

1. Initialize:

   * `start = 0` (beginning of the array)
   * `end = len(array) - 1` (end of the array)

2. While `start < end`:

   * Swap `array[start]` and `array[end]`
   * Increment `start`
   * Decrement `end`

**Time Complexity:** `O(n)`
**Space Complexity:** `O(1)`

---

## 🧠 Pseudocode

```
function reverseArray(array):
    start = 0
    end = length of array - 1

    while start < end:
        temp = array[start]
        array[start] = array[end]
        array[end] = temp

        start = start + 1
        end = end - 1

    return array
```

---

## 💻 Python Code

```python
def reverse_array(arr):
    start = 0
    end = len(arr) - 1

    while start < end:
        # Swap the elements
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1

    return arr

# Example usage
input_array = [1, 2, 3, 4, 5]
print("Original:", input_array)
reversed_array = reverse_array(input_array.copy())  # use copy() to preserve original
print("Reversed:", reversed_array)
```

