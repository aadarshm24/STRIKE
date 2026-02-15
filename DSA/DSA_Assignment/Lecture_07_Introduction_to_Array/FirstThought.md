# First Thought questions and answers

## 1.why array starting value is zero?

Array indexing starts from 0 because the index represents the offset from the base address. The address of an element is calculated as:
```bash
Base Address + (index × size of element).
```
Starting from 0 avoids extra arithmetic operations and aligns naturally with pointer arithmetic.

---
## 2.Can We Take Input Size of Array

We can take input for array size, but if we declare the array in stack memory, large input may cause stack overflow because stack memory is limited. To avoid this, dynamic allocation or STL vector should be used.

---
## 3.What is stack memory and heap memory??
Memory in a program is divided mainly into:

###Stack Memory
* Used for function calls, local variables
* Automatically managed
* Limited in size (usually 1–8 MB)
* Faster access
* Memory deallocated when function ends

###Heap Memory
* Used for dynamic allocation
* Manually managed (new, malloc)
* Much larger than stack
* Slower than stack
* Exists until explicitly freed

In C++, vector allocates memory on heap.
---

