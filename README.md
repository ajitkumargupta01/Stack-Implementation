This code only works with some specified compilers like dev c++, code blocks, etc. If you want to run this code in another compiler then you have to make some inner changes like 

step 1: You have to remove the header file "#include<conio.h>".

Step 2: Find the getch() function and remove it or make it a comment.

Step 3: Check whether the code is running. If not, fix some errors. This code will work perfectly.


Stack Implementation in C
This repository contains a simple implementation of a stack data structure using an array in C. The stack follows a Last In, First Out (LIFO) principle, where the most recently added element is the first to be removed.

Features:

Push: Add an element to the top of the stack.

Pop: Remove and return the element from the top of the stack.

Display Stack: Show all elements currently in the stack.

Position: Display the current position of the top of the stack.

Is Empty: Check if the stack is empty.

Is Full: Check if the stack is full.

Exit: Exit the program.

Menu:
Upon running the program, a menu is displayed with the following options:

PUSH: Add an element to the stack.

POP: Remove the top element from the stack.

POSITION: Display the position of the top element in the stack.

DISPLAY: Display all elements in the stack.

IS EMPTY: Check if the stack is empty.

IS FULL: Check if the stack is full.

EXIT: Exit the program.


Input:

The user is prompted to enter the stack size before the operations.

For Push operation, the user will input the element to be added to the stack.

Stack Overflow/Underflow:

Overflow occurs when the user tries to push an element into a full stack.

Underflow occurs when the user tries to pop an element from an empty stack.

Limitations:

The maximum size of the stack is set to 100 elements. This can be adjusted in the code by modifying the stack[100] 
declaration.

This program uses a system("cls") to clear the console.
