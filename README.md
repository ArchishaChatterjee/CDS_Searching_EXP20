# Experiment 20: Searching Algorithms in C++

---

## Aim
To study and implement different **Searching Algorithms** in C++ to efficiently locate data within an array.  
The objectives are to perform:  
1. **Binary Search**  
2. **Linear Search**  
3. **Linear Search using Classes**  
4. **Linear Search with Repeated Data**  
5. **Sequential Search**

---

## Tools
- **Programming Language**: C++  
- **Compiler**: g++ / Turbo C++ / MinGW  
- **IDE/Editor**: Code::Blocks, Dev C++, or Visual Studio Code  
- **Operating System**: Windows / Linux / macOS  

---

## Theory
Searching algorithms are designed to **find the position of a target element** in a collection of data.  
They are fundamental to programming, as they form the basis for data retrieval in databases, arrays, and data structures.

Two main categories of searching are:
1. **Sequential (Linear) Searching** – checks each element one by one.  
2. **Binary Searching** – divides the dataset into halves repeatedly for faster searching (requires sorted data).  

---

### 1. Linear Search
Linear Search sequentially scans each element of an array until the desired element is found or the end is reached.  

**Characteristics:**
- Works on unsorted data.  
- Simple but slower for large datasets.  

**Time Complexity:**  
- Best Case: O(1)  
- Average Case: O(n)  
- Worst Case: O(n)

---

### 2. Binary Search
Binary Search works on **sorted data**.  
It repeatedly divides the array into halves, eliminating half of the remaining elements each time.  

**Characteristics:**
- Efficient and faster than Linear Search.  
- Works only for sorted arrays.  

**Time Complexity:**  
- Best Case: O(1)  
- Average Case: O(log n)  
- Worst Case: O(log n)

---

### 3. Linear Search using Classes
This approach wraps the linear search logic inside a **class** to demonstrate object-oriented programming principles.  
The class contains:
- An array  
- Member functions for input, searching, and display  

---

### 4. Linear Search with Repeated Data
In cases where a data element appears more than once, the algorithm continues searching after a match to find **all occurrences** of the element.  

---

### 5. Sequential Search
Sequential Search is similar to Linear Search but emphasizes the concept of step-by-step comparison in a loop until a match is found.  
It is often used for unsorted datasets.  

---

## Algorithm

### A. Binary Search
1. Start the program.  
2. Input a sorted array of `n` elements.  
3. Set `low = 0` and `high = n - 1`.  
4. While `low <= high`:  
   - Find `mid = (low + high) / 2`.  
   - If `arr[mid] == key`, element is found.  
   - If `arr[mid] < key`, set `low = mid + 1`.  
   - Else, set `high = mid - 1`.  
5. If not found, display “Element not found.”  

---

### B. Linear Search
1. Input an array of `n` elements.  
2. Input the element to search.  
3. Traverse the array from start to end.  
4. If an element matches the search key, display its position.  
5. If no match is found, display “Element not found.”  

---

### C. Linear Search using Class
1. Define a class `SearchArray` with:  
   - Data members: array, size  
   - Member functions: `input()`, `display()`, `linearSearch()`  
2. Use member functions to take input and search for the desired element.  
3. Display the result accordingly.  

---

### D. Linear Search with Repeated Data
1. Input an array with possible duplicate elements.  
2. Input the search key.  
3. Traverse the array using a loop.  
4. Whenever a match is found, record its index.  
5. Display all positions where the key appears.  

---

### E. Sequential Search
1. Input an array and a key element.  
2. Compare each element in sequence with the key.  
3. If a match is found, stop and display its position.  
4. If not found, print “Not Found.”  

---

## Functions Used
- **`linearSearch(int arr[], int n, int key)`** – Searches linearly for an element.  
- **`binarySearch(int arr[], int low, int high, int key)`** – Performs binary search on sorted data.  
- **`searchRepeated(int arr[], int n, int key)`** – Finds all occurrences of a repeated element.  
- **`display()`** – Displays the array elements.  
- **Class Functions** – `input()`, `display()`, and `search()` for object-oriented implementation.  

---

## Conclusion
From this experiment, we successfully implemented and compared various **searching algorithms** in C++.  
We observed that:  
1. **Linear Search** is easy to implement but slower for large datasets.  
2. **Binary Search** is significantly faster but requires sorted input.  
3. **Class-based Linear Search** helps modularize and encapsulate logic using OOP principles.  
4. **Linear Search with Repeated Data** demonstrates how to handle multiple occurrences effectively.  
5. **Sequential Search** reinforces the basic idea of element-by-element searching.  

This experiment provided a clear understanding of how different searching methods work and their trade-offs in efficiency, implementation, and use cases.
