# Hash-Table-using-singly-Array-to-find-longest-subsequence in C

## Overview
This program demonstrates a basic **hash table implementation** in C, including functionality to insert elements, display the hash table, and find the largest sequence of consecutive numbers stored in the hash table. It uses linear probing to resolve collisions.

---

## Features

1. **Hash Table with Linear Probing**:  
   The program uses a fixed-size array (`arr`) to implement a hash table. Linear probing is employed to handle collisions, where the program searches for the next available slot in the event of a collision.

2. **Sequence Check**:  
   A function (`check`) calculates the largest sequence of consecutive numbers stored in the hash table.

3. **Basic Operations**:  
   - **Insert**: Adds elements to the hash table.
   - **Display**: Prints the contents of the hash table.
   - **Check**: Finds the longest sequence of consecutive numbers.

---

## Files

### `hash_table_sequence.c`
This file contains the source code for:
- **Insert function**
- **Display function**
- **Check function**

---

## Functions

### 1. `void insert(int val)`
- **Purpose**: Inserts a value into the hash table using the hash function and resolves collisions with linear probing.
- **Parameters**:
  - `val`: The value to be inserted.
- **Logic**:
  - Compute the hash key as `(val % 10) - 1`.
  - If the computed slot is occupied, search for the next empty slot using linear probing.

---

### 2. `void display()`
- **Purpose**: Prints all elements in the hash table.
- **Logic**:
  - Iterate through the array and print the value at each slot.

---

### 3. `void check()`
- **Purpose**: Finds the largest sequence of consecutive numbers in the hash table.
- **Logic**:
  - Iterate through the hash table, comparing each element with others to find consecutive sequences.
  - Count the length of each sequence and track the maximum.

---

## Usage

1. **Compilation**: Compile the code using a C compiler, e.g., `gcc`:
   ```bash
   gcc -o hash_table_sequence hash_table_sequence.c
