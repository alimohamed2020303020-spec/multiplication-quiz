# Multiplication Quiz

A small console game written in C++. Pick any number and the program quizzes you on its multiplication table, from `x 1` to `x 12`.

## How it works

- You choose the number for the table (for example `7`).
- The program asks 12 questions: `7 x 1`, `7 x 2`, ... `7 x 12`.
- If your answer is wrong, you can try again until you get it right.
- The final mark counts only the questions you answered correctly on the **first try**.
- Invalid input (like letters) doesn't crash the program. It shows an error and asks again.

## Build and run

You need a C++ compiler such as `g++` or `clang`.

```bash
g++ main.cpp -o quiz
./quiz
```

On Windows:

```bash
g++ main.cpp -o quiz.exe
quiz.exe
```

## Example

```
Enter the table number: abc
ERROR: this is not a number, try again
Enter the table number: 3
What is 3 x 1 : 3
Correct!
What is 3 x 2 : 5
Wrong, try again: 6
Correct!
What is 3 x 3 : 9
Correct!
...

The final mark: 11 / 12
```

## Concepts used

- `for` and `while` loops
- A reusable function (`readInt`) for reading numbers safely
- Input validation with `cin.fail()`, `cin.clear()` and `cin.ignore()`
- Conditions, counters and a `bool` flag to track first-try answers

## Ideas for the future

- Ask the questions in random order using `rand()`
- Let the user choose how many questions to ask
- Show the correct answer after a number of wrong attempts
