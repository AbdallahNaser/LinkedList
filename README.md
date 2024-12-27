# 🔗 **Linked List Implementation in C++**

This repository contains an implementation of a **Singly Linked List** in C++, providing several operations for managing linked list nodes. The list supports basic operations like insertion, deletion, searching, and reversal.

---

## 🌟 **Features**

- **insertFirst(int element)**: Inserts an element at the beginning of the list.
- **insertLast(int element)**: Inserts an element at the end of the list.
- **insertAtPos(int pos, int element)**: Inserts an element at a specified position.
- **removeFirst()**: Removes the first element from the list.
- **removeLast()**: Removes the last element from the list.
- **removeE(int element)**: Removes all occurrences of a specified element.
- **reverse()**: Reverses the order of elements in the list.
- **Search(int element)**: Searches for an element in the list and returns its position.

---

## 📜 **Code Explanation**

### **LinkedList Class - `linkedList`**

The `linkedList` class supports the following methods:

- **`insertFirst(int element)`**: Adds an element at the beginning of the list.
- **`insertLast(int element)`**: Adds an element at the end of the list.
- **`insertAtPos(int pos, int element)`**: Inserts an element at a specific position (0-based index).
- **`removeFirst()`**: Removes the first element from the list.
- **`removeLast()`**: Removes the last element from the list.
- **`removeE(int element)`**: Removes all occurrences of a specific element.
- **`reverse()`**: Reverses the entire linked list.
- **`Search(int element)`**: Searches for an element and returns its index if found, otherwise returns `-1`.
- **`print()`**: Prints the elements of the list.

### **Structure**

Each node in the list is represented by the `Node` structure, which holds:
- `item`: The data of the node.
- `next`: A pointer to the next node in the list.

---

## 📋 **Example Usage**






🧑‍💻 Example Output

0 10 20 30 40 50

10 20 30 40 50

10 20 30 40

10 30 40

40 30 10

40
