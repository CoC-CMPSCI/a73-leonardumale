[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=23911535&assignment_repo_type=AssignmentRepo)
# A73: Circular Left Shift in Array (in-place)

**Code your program here:** [https://classroom.github.com/a/liA2W0yd](https://classroom.github.com/a/liA2W0yd)

---

## 3. Elaborate on Errors and Troubleshooting

- Programming algorithms used
- Errors encountered and troubleshooting steps taken
- Error experiences and lessons learned (how you identified and fixed each error)

---

## [Programming Assignment Guide]

**Read the Assignment Directions below, then complete the following main.cpp in your cloned Repository.**

In this assignment, you will complete the **shiftleft()** function in main.hpp. **Do NOT edit main.cpp** — it already drives the function.

Full assignment instructions are embedded below. Read them carefully before coding.

Implementation Hint

| Function: void shiftleft(int number[], int SIZE, int count) |
|---|
| • Rotate the array left by count positions, in place. No additional array.<br>• If count > SIZE, use count % SIZE.<br>• reverse the first count elements<br>• reverse the remaining SIZE - count elements<br>• reverse the entire array<br>• Example: [1,2,3,4,5] with count = 3 → [4,5,1,2,3]<br>• Example: [10,13,5,7,2] with count = 1 → [13,5,7,2,10] |

**How to compile and run your program:**

- To compile your program in VS Code, open the new terminal (ctrl-`) and type: g++ main.cpp -o main
- To run your program: ./main

**How to test your program:**

- To run all tests: make test
- To run a specific test (e.g., T1): make test ARGS="[T1]"

**[Expected Output]**

*Your output should contain the correct values. The exact wording or formatting may differ — tests check values only, not the entire output.*

Example run with input: 3 (count = 3)

```cpp
Enter your number for circular shift left
    0    1    2    3    4    5    6    7    8    9
    3    4    5    6    7    8    9    0    1    2
```

**How to pass the test:**

Test items: **compile, run, T1, T2, T3, T4**

| Test | Input | Expected Values (checked by test) | Points |
|---|---|---|---|
| T1 | shiftleft([1..5],5,3) and shiftleft([10,13,5,7,2],5,1) | [4,5,1,2,3] and [13,5,7,2,10] | 20 |
| T2 | shiftleft([0..9],10,5) and shiftleft([1..6],6,3) | [5..9,0..4] and [4,5,6,1,2,3] | 20 |
| T3 | shift count > SIZE (count=6 on size 5; count=11 on size 4) | uses count % SIZE — same as shift 1 / shift 3 | 20 |
| T4 | shiftleft by 0 and by SIZE | array unchanged in both cases | 20 |

To test your program, type the command in your terminal: make test

**Make sure that your program passes the test and there is ✓ in your GitHub Classroom Repository.**

