# C++ Experiment 2: Bitwise Operations & Bit Manipulation

---

## 🎯 Aim

- Implement a C++ program to perform basic **bitwise operations**:  
  - AND  
  - OR  
  - XOR  
  - NOT  
  - Left Shift  
  - Right Shift  
- Perform **bit setting and clearing** operations using bit manipulation.

---

## 🧠 Objectives

- Understand how bitwise operators work in C++  
- Learn how to manipulate individual bits using shift and mask techniques  
- Implement **set** and **clear** operations on specific bit positions  
- Practice low-level data manipulation for efficient programming  
- Gain insight into binary-level representation of integers

---

## 🛠 Tools Used

- **Programming Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Editor/IDE**: Visual Studio Code  
- **Operating System**: Windows 10  

---

## 📘 Algorithm Explanation

### ➤ Bitwise Operation Program

1. Start the program  
2. Initialize two integers `a = 8` and `b = 3`  
3. Perform and display the result of:
   - **Bitwise AND** → `a & b`  
   - **Bitwise OR** → `a | b`  
   - **Bitwise XOR** → `a ^ b`  
   - **Bitwise NOT** of `a` → `~a`  
   - **Left Shift** `a` by 2 → `a << 2`  
   - **Right Shift** `a` by 1 → `a >> 1`  
4. End the program  

---

### ➤ Bit Manipulation (Set & Clear Bit)

1. Start the program  
2. Initialize a base value `value = 80`  
3. Prompt the user to enter:
   - A bit position to **set**  
   - A bit position to **clear**  
4. Read the bit positions `setPos` and `clearPos` using `cin`  
5. Perform bit manipulation:
   - Set the bit at position 3 using `value | (1 << 3)`  
   - Clear the bit at position 4 using `value & ~(1 << 4)`  
6. Display the results after setting and clearing bits  
7. End the program  

---

## ✅ Conclusion

This experiment introduced the use of **bitwise operators** in C++, which are essential for low-level programming, embedded systems, and optimization tasks.  
I learned how to apply bitwise AND, OR, XOR, NOT, and shift operations on integers.  
Additionally, I explored how to **set** and **clear** individual bits using masking and shifting techniques.  
These operations are highly efficient and critical for direct memory access, hardware control, and bit-level data processing.

---
