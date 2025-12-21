## Stack vs Heap

| **Stack** | **Heap** |
| --- | --- |
| 1. Stack memory is allocated is the process of assigning memory for local variables and function calls in the call stack | 1. Heap memory is allocated dynamically during the function execution. |
| 2. Stack memory is a contiguous block in the call stack. | 2. Heap memory is allocated memory randomly. |
| 3. Stack memory is thread safe, can only be access by the owner. | 3. Heap memory can be access from any thread. |
| 4. Stack memory allocation and deallocation is managed by the compiler. | 4. Heap memory allocation and deallocation is managed by the programmer. |
| 5. faster due to it’s automatic allocation and deallocation management. | 5. Slower due to it’s manual management. |