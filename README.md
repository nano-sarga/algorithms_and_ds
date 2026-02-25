
# Algoritms and Sortings /•᷅‎‎•᷄\੭

### Sorting algorithms you can run on your own input. Starting with sorting, more algorithms *coming soon*. ⋆｡𖦹 ˚ 𓇼 ˚｡⋆

# Progress ➟
## Sorting
- [x] [Bubble Sort](#bubble)
- [x] [Insertion Sort](#insertion)
- [x] [Selection Sort](#selection)
- [x] [Merge Sort](#merge)
- [x] [Heap Sort](#heap)
- [x] [Quick Sort](#quick)
- [x] [Counting Sort](#counting)
- [x] [Bucket Sort](#bucket)
- [ ] Radix Sort
Algoritms........

## Technologies 🛠
+ Languages: C/C++
+ Tools: Git, CLion

## Build and run
Run the program by launching the compiled executable file from the project directory in the terminal.
```
mkdir build
cd build
cmake ..
make
./program
```

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

![insertion_sort_gif](https://github.com/user-attachments/assets/69e4564b-c6c7-4851-b1ef-d0f94f4e02a7)



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

![selecton_sort](https://github.com/user-attachments/assets/a4a16fe8-5b18-4986-a705-b50eefce50dc)


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

## Heap Sort . ⋆｡𖦹 ˚ 𓇼 ˚｡⋆

Heap Sort is a **comparison-based sorting algorithm** that uses a binary heap data structure.  
It first builds a max-heap from the array, then repeatedly extracts the maximum element and places it at the end of the array.

### How it Works ⚡︎
1. Build a max-heap from the input array.
2. Swap the root (maximum) with the last element.
3. Reduce the heap size by one and heapify the root.
4. Repeat until the heap size is 1.

### Example in C++ 모
```cpp
template <typename T>
void heapify(std::vector<T>& vec, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && vec[left] > vec[largest])
        largest = left;
    if (right < n && vec[right] > vec[largest])
        largest = right;
    if (largest != i) {
        my_swap(vec[i], vec[largest]);
        heapify(vec, n, largest);
    }
}

template <typename T>
void heap(std::vector<T>& vec) {
    int n = vec.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(vec, n, i);
    for (int i = n - 1; i >= 0; i--) {
        my_swap(vec[0], vec[i]);
        heapify(vec, i, 0);
    }
}
```

### Complexity ⏱

* Time Complexity: O(n log n) in all cases
* Space Complexity: O(1) (in-place sorting)

## Quick Sort . ⋆｡𖦹 ˚ 𓇼 ˚｡⋆

Quick Sort is a **divide-and-conquer** sorting algorithm that picks a "pivot" element, partitions the array into elements less than and greater than the pivot, and recursively sorts the partitions.  
It’s very efficient on large datasets and widely used in practice.

### How it Works ⚡︎
1. Choose a pivot element (commonly the last element).
2. Partition the array: elements smaller than pivot go left, larger go right.
3. Recursively apply Quick Sort to left and right partitions.
4. Repeat until the array is sorted.

### Example in C++ 모
```cpp
template <typename T>
int partition(std::vector<T>& vec, int low, int high) {
    T pivot = vec[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (vec[j] < pivot) {
            i++;
            my_swap(vec[i], vec[j]);
        }
    }
    my_swap(vec[i + 1], vec[high]);
    return i + 1;
}

template <typename T>
void quick_sort(std::vector<T>& vec, int low, int high) {
    if (low < high) {
        int pi = partition(vec, low, high);
        quick_sort(vec, low, pi - 1);
        quick_sort(vec, pi + 1, high);
    }
}

template <typename T>
void quick(std::vector<T>& vec) {
    if (!vec.empty())
        quick_sort(vec, 0, vec.size() - 1);
}
```

### Complexity ⏱

* Time Complexity:
    * Best & Average: O(n log n)
    * Worst (already sorted + bad pivot): O(n²)
* Space Complexity: O(log n) (recursive stack)

## Counting Sort . ⋆｡𖦹 ˚ 𓇼 ˚｡⋆

Counting Sort is a **non-comparison-based** sorting algorithm that works by counting the occurrences of each distinct element and using this count to place elements in the correct position.  
It’s very efficient for sorting integers within a known range.

### How it Works ⚡︎
1. Find the maximum element in the array.
2. Create a count array to store occurrences of each element.
3. Modify the count array to store the cumulative count.
4. Place each element in its correct position in the output array.
5. Copy the sorted output back to the original array.

### Example in C++ 모
```cpp
template <typename T>
void counting(std::vector<T>& vec) {
    if (vec.empty()) return;

    T maxVal = *std::max_element(vec.begin(), vec.end());
    T minVal = *std::min_element(vec.begin(), vec.end());
    int range = maxVal - minVal + 1;

    std::vector<int> count(range, 0);

    for (T x : vec)
        count[x - minVal]++;

    int index = 0;
    for (int i = 0; i < range; i++) {
        while (count[i]-- > 0)
            vec[index++] = i + minVal;
    }
}
```

### Complexity ⏱

* Time Complexity: O(n + k), where k is the range of input
* Space Complexity: O(n + k) (needs output and count arrays)

## Bucket Sort . ⋆｡𖦹 ˚ 𓇼 ˚｡⋆

Bucket Sort is a **distribution-based sorting algorithm** that distributes elements into several “buckets” and then sorts each bucket individually (often using another sorting algorithm).  
It works best when input is uniformly distributed over a range.

### How it Works ⚡︎
1. Create `n` empty buckets (lists).
2. Distribute each array element into the appropriate bucket.
3. Sort each bucket individually (e.g., using insertion sort).
4. Concatenate all buckets to get the sorted array.

### Example in C++ 모
```cpp
template <typename T>
void bucket(std::vector<T>& vec) {
    if (vec.empty()) return;

    T minVal = *std::min_element(vec.begin(), vec.end());
    T maxVal = *std::max_element(vec.begin(), vec.end());
    T range = maxVal - minVal;

    int n = vec.size();
    std::vector<std::vector<T>> buckets(n);

    for (T x : vec) {
        int index = n * (x - minVal) / (range + 1);
        buckets[index].push_back(x);
    }

    for (auto &bucket : buckets)
        std::sort(bucket.begin(), bucket.end());

    int idx = 0;
    for (auto &bucket : buckets) {
        for (T x : bucket)
            vec[idx++] = x;
    }
}
```

### Complexity ⏱

* Time Complexity:
    * Best & Average: O(n + k)
    * Worst: O(n²) (if all elements fall into one bucket)
* Space Complexity: O(n + k) (for buckets)
