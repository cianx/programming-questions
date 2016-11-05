
# TODO

Cover
    Types/Control statements
    String operations
        print
        format
        parse
        regex
        split
        trim
        convert to int/float
    data structures
        hash/tree
        array
        list
        queue
    classes

    logging
    error handling
    threads

PROBLEMS FOR COMPUTER SOLUTION (BOOK)
-

Other




- Stacks & Queues
    - Queue Using Stack
    - Stack Using Queue
    - Implement a Priority Q or Heap

	* Implement a stack with push and pop functions
	* Implement a queue with queue and dequeue functions
	* Find the minimum element in a stack in O(1) time
	* Write a function that sorts a stack (bonus: sort the stack in place without extra memory)
	* Implement a binary min heap. Turn it into a binary max heap
	* HARD: Implement a queue using 2 stacks

- N-Queens
- Boggle


	* Use dynamic programming to find the first X prime numbers
* Implement a function to return a ratio from a double (ie 0.25 -> 1/4). The function will also take a tolerance so if toleran ce is .01 then FindRatio(.24, .01) -> 1/4
int FindRatio(double val, double tolerance, int& numerator, int& denominator)

	* Write a function that prints out the binary form of an int

	* Write a multiply function that multiples 2 integers without using *

	* HARD: Simulate a 7-Sided Die Using a 5-Sided Die »You have a function rand5() that generates a random integer from 1 to 5. Use it to write a function rand7() that generates a random integer from 1 to 7. rand5() returns each integer with equal probability... keep reading »

	* HARD: Given a 2D array of 1s and 0s, count the number of "islands of 1s" (e.g. groups of connecting 1s)




Concurrency
	* Difference between Mutexes and Critical Sections?
	* What are Reentrant Locks? Implement a Reentrant Lock with Mutexes.
	* Implement a thread-safe class that will read/write to/from a buffer
TSBuffer::TSBuffer(int size)
int TSBuffer::Read(char* buff, int max_size)
int TSBuffer::Write(char* buff, int size)

Design Questions
    * Design a deck of cards class (object/methods/data)

Puzzles
    * You have 2 supposedly unbreakable light bulbs and a 100-floor building. Using fewest possible drops, determine how much of an impact this type of light bulb can withstand. (i.e. it can withstand a drop from 17th floor, but breaks from the 18th).
Note that the ever-popular binary search will give you a worst case of 50 drops. You should be able to do it with under 20.
    * There are n gas stations positioned along a circular road. Each has a limited supply of gas. You can only drive clockwise around the road. You start with zero gas. Knowing how much gas you need to get from each gas station to the next and how much gas you can get at each station, design an algorithm to find the gas station you need to start at to get all the way around the circle.
    * Out of 10 coins, one weighs less then the others. You have a scale.
    *
        * How can you determine which one weighs less in 3 weighs?
        * Now how would you do it if you didn't know if the odd coin weighs less or more?

    * What is the next line in the following sequence:
1
11
21
Answer: it's 1211 and the next is 111221

