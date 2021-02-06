# Lab 2: Remembering how to C

In 326, C sells C shells down by the C shore. Can't you C it?

In all seriousness, C is the language of choice for OS development (for better or worse). You will get comfortable using C in this class. Complete the following exercises to help get the C flowing again.

## Resources

* [Quick C Tutorial](http://booksite.elsevier.com/9780128000564/content/APP0C_C_Programming.pdf)


## Exercise 1

The programs in the `c-programs` directory all have something wrong with them. Your job is to:

1. Determine what the problem is
2. Fix the problem
3. Explain what was wrong (**why** the bug occurred) and how you fixed it. Edit the comment headers at the top of each file to give your explanation.

To compile all the programs, `cd` into the `c-programs` directory and run `make`. We'll be using `make` quite a bit this semester.


## Exercise 2

For our second exercise, we'll be implementing a function to read files line by line, similar to `fgets(3)` or `getline(3)`. However, you'll be using the much lower-level `read(2)` function. You will find the starter code and test cases in the `lineread` directory; run `make test` to run the tests.

`read()` takes three arguments:
* **fd** -- the *file descriptor* to read from. To get a file descriptor, use `open()`. For this assignment, `O_RDONLY` is sufficient for the *flags* parameter to `open()`.
* **buf** -- where data being read will be copied.
* **count** -- number of bytes to read. Since `read()` doesn't really recognize where lines start or end, you will tell it how many bytes to read at a time instead.

You'll build on this to implement your `lineread()` function.


## Grading

Demonstrate your (1) answers for Exercise 1 and (2) completed lineread code, plus test output on your Arch Linux VM to get credit for this assignment.

