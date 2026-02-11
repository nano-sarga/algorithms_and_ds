
# Algoritms and Sortings /•᷅‎‎•᷄\੭

### Sorting algorithms you can run on your own input. Starting with sorting, more algorithms *coming soon*. ⋆｡𖦹 ˚ 𓇼 ˚｡⋆

## Progress ➟
Sorting
- [x] Bubble Sort
- [ ] Insert Sort
- [ ] Selection Sort
- [ ] Merge Sort
- [ ] Heap Sort
- [ ] Quick Sort
- [ ] Radix Sort
Algoritms........

## Technologies 🛠
+ Languages: C/C++
+ Tools: Git, CLion

## Bubble Sort . ⋆｡𖦹 ˚ 𓇼 ˚｡⋆

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, 
compares adjacent elements and swaps them if they are in the wrong order. 
This process is repeated until the list is sorted. 

### How it Works ⚡︎
1. Compare the first two elements of the array.
2. Swap them if the first is greater than the second.
3. Move to the next pair and repeat.
4. Continue this process until the array is sorted.

![complete_bubble](https://github.com/user-attachments/assets/dbd2061a-6ec2-45ef-8d30-810d2460212a)


### Example in C++ 모
```cpp
template <typename T>
void bubble_sort(T arr[], int size) {
    bool swapped = false;
    do {
        swapped = false;

        for (int j = 0; j + 1 < size; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        size--;
    } while (swapped);
}
```
### Complexity ⏱

* Time Complexity: O(n²) in worst and average case, O(n) in best case (already sorted)
* Space Complexity: O(1) (in-place sorting)
