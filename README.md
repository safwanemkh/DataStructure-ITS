# 🛠️ Data Structures Word Processor 🚀

Hey! This is my **Data Structures Mini-Project**. 
The goal was simple:  use **Stacks, Queues, and Deques** to handle text like a pro.

---

## 💡 What's inside?

I built a small toolkit that solves 3 specific problems using 3 different structures:

1. **The "Anti-Duplicate" Tool (Stack)**
   - **Logic:** LIFO (Last-In, First-Out).
   - **Use Case:** It cleans up adjacent duplicates in a string. 
   - *Example:* `abbaca` becomes `ca`. If the next letter matches the top of the stack, they both vanish!

2. **The "Input Buffer" (Queue)**
   - **Logic:** FIFO (First-In, First-Out).
   - **Use Case:** Simulates how a computer stores your keystrokes.
   - *Example:* The first letter you type is the first one to be processed. Simple and efficient.

3. **The "Palindrome Master" (Circular Deque)**
   - **Logic:** Double-Ended access + Circular Memory.
   - **Use Case:** Checks if a word is a palindrome (like `KAYAK` or `RADAR`).
   - **The Cool Part:** It uses `% MAX` (modulo) to wrap around the array. No wasted memory, no unnecessary shifting.

---

## 🛠️ Tech Stack & Structure

- **Language:** C 
- **Organization:** - `structures.h`:  (structs & prototypes).
    - `logic.c`: The "Engine" (all the heavy lifting functions).
    - `main.c`: The "Dashboard" (interactive menu).

---

## 🚀 How to run it?

1. **Clone the github repo**
2. **Open your terminal** and compile everything together:
   ```bash
   gcc main.c logic.c -o TextProcessor