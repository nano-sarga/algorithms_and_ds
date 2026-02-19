
# Algoritms and Sortings /•᷅‎‎•᷄\੭

### Sorting algorithms you can run on your own input. Starting with sorting, more algorithms *coming soon*. ⋆｡𖦹 ˚ 𓇼 ˚｡⋆

## Progress ➟
Sorting
- [x] Bubble Sort
- [x] Insert Sort
- [x] Selection Sort
- [x] Merge Sort
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

## Insertion Sort . ⋆｡𖦹 ˚ 𓇼 ˚｡⋆

Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time.
It works similarly to how you sort cards in your hand — you take one card and insert it into its correct position among the already sorted cards.

### How it Works ⚡︎

1. Start from the second element of the array.
2. Compare it with elements before it.
3. Shift larger elements one position to the right.
4. Insert the element into its correct place.
5. Repeat until the whole array is sorted.

![insrtion_sort](https://github.com/user-attachments/assets/3671b9f1-e2d6-4f29-8656-40467ff57e47)


### Example in C++ 모
```cpp
template <typename T>
void insertion_sort(T arr[], int size) {
    for (int i = 1; i < size; i++) {
        T key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
```
### Complexity ⏱

* Time Complexity: O(n²) worst & average, O(n) best (already sorted)
* Space Complexity: O(1) (in-place sorting)

## Selection Sort . ⋆｡𖦹 ˚ 𓇼 ˚｡⋆

Selection Sort is a simple sorting algorithm that repeatedly selects the smallest element from the unsorted part of the array and moves it to the beginning.
It divides the array into two parts: sorted and unsorted.

### How it Works ⚡︎

1. Find the smallest element in the array.
2. Swap it with the first element.
3. Move the boundary of the sorted section one step right.
4. Repeat until the array is fully sorted.

### Example in C++ 모
```cpp
template <typename T>
void selection_sort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}
```
### Complexity ⏱

* Time Complexity: O(n²) in all cases
* Space Complexity: O(1) (in-place sorting)

## Merge Sort . ⋆｡𖦹 ˚ 𓇼 ˚｡⋆

Merge Sort is a divide-and-conquer sorting algorithm that divides the array into halves, recursively sorts them, and then merges the sorted halves.
It’s much more efficient on large datasets than simple sorts like Bubble or Insertion.

### How it Works ⚡︎

1. Divide the array into two halves.
2. Recursively sort each half.
3. Merge the two sorted halves into one sorted array.
4. Repeat until the whole array is sorted.

### Example in C++ 모
```cpp
#include <iostream>

template <typename T>
void merge(T vec[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    T* L = new T[n1];
    T* R = new T[n2];

    for (int i = 0; i < n1; i++) L[i] = vec[left + i];
    for (int j = 0; j < n2; j++) R[j] = vec[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) vec[k++] = L[i++];
        else vec[k++] = R[j++];
    }

    while (i < n1) vec[k++] = L[i++];
    while (j < n2) vec[k++] = R[j++];

    delete[] L;
    delete[] R;
}

template <typename T>
void merge_sort(T vec[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort(vec, left, mid);
        merge_sort(vec, mid + 1, right);
        merge(vec, left, mid, right);
    }
}
```
### Complexity ⏱

* Time Complexity: O(n log n) in all cases
* Space Complexity: O(n) (requires temporary arrays for merging)
