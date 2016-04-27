
# TODO

Other
	* Count the number of set bits in a byte/int32 (7 different solutions)
	* Difference between heap and stack? Write a function to figure out if stack grows up or down.
	* SQL query to select some rows out of a table (only because I had SQL on the resume)
	* Open a file as securely as possible (assume the user is hostile -- list all the nasty things that could happen and checks you would have to do to)
	* Implement a function to return a ratio from a double (ie 0.25 -> 1/4). The function will also take a tolerance so if toleran ce is .01 then FindRatio(.24, .01) -> 1/4
int FindRatio(double val, double tolerance, int& numerator, int& denominator)

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


Queues
	* Implement a Queue class in C++ (which data structure to use internally? why? how to notify of errors?)


- Dynamic Programming
- Largest Sum Sub-array
- Max Sum Nonadjacent elements
- Coin Changing
- Game Scoring

- Math & Stats
- Integer Division
- Hex to Integer
- Input 1,2 -> Response 2,1
- Number Validation
- Power: X ^ n
- Square Root
- All Possible Parentheses
- All Possible Combinations
- All Subsets
- Kth Permutation
- Permute String

- Miscellaneous
- Implement LRU Cache

- Graphs
- Clone a graph
- Longest Chain

- Stacks & Queues
- Queue Using Stack
- Stack Using Queue
Stacks, Queues, and Heaps

	* Implement a stack with push and pop functions

	* Implement a queue with queue and dequeue functions

	* Find the minimum element in a stack in O(1) time

	* Write a function that sorts a stack (bonus: sort the stack in place without extra memory)

	* Implement a binary min heap. Turn it into a binary max heap

	* HARD: Implement a queue using 2 stacks




- Back Tracking
- N-Queens
- Boggle


	* Use dynamic programming to find the first X prime numbers

	* Write a function that prints out the binary form of an int

	* Implement parseInt

	* Implement squareroot function

	* Implement an exponent function (bonus: now try in log(n) time)

	* Write a multiply function that multiples 2 integers without using *

	* HARD: Given a function rand5() that returns a random int between 0 and 5, implement rand7()

	* HARD: Given a 2D array of 1s and 0s, count the number of "islands of 1s" (e.g. groups of connecting 1s)



A building has 100 floors. One of the floors is the highest floor an egg can be dropped from without breaking.
If an egg is dropped from above that floor, it will break. If it is dropped from that floor or below, it will be completely undamaged and you can drop the egg again.

Given two eggs, find the highest floor an egg can be dropped from without breaking, with as few drops as possible.


Simulate a 7-Sided Die Using a 5-Sided Die »You have a function rand5() that generates a random integer from 1 to 5. Use it to write a function rand7() that generates a random integer from 1 to 7. rand5() returns each integer with equal probability... keep reading »



8) How to convert numeric String to int in Java? (solution)

Design Questions
	* How would you design a server that has to process a fair number of good number of requests a second. What if you didn't know how many requests you'd be getting? What if requests had different priorities? (I always think of theApache design for this question)
	* Design malloc and free. (give up? see how G++ malloc works or this page for more examples)
	* Design an elevator control system. Don't forget buttons on every floor and supporting multiple elevators. (What objects/methods/properties/how components communicate)
	* Design a chess game (what objects? what methods? which data where? how will it work?)
	* Design a deck of cards class (object/methods/data)
	* How would you design the infrastructure front half of a very large web ecommerce site? what if it was very personalized? (how sessions are handled? where and what you can cache? how to load-balance?)

Concurrency
	* Difference between Mutexes and Critical Sections?
	* What are Reentrant Locks? Implement a Reentrant Lock with Mutexes.
	* Implement a thread-safe class that will read/write to/from a buffer
TSBuffer::TSBuffer(int size)
int TSBuffer::Read(char* buff, int max_size)
int TSBuffer::Write(char* buff, int size)


Stacks, Queues, and Heaps

	* Implement a stack with push and pop functions

	* Implement a queue with queue and dequeue functions

	* Find the minimum element in a stack in O(1) time

	* Write a function that sorts a stack (bonus: sort the stack in place without extra memory)

	* Implement a binary min heap. Turn it into a binary max heap

	* HARD: Implement a queue using 2 stacks


Simulate a 7-Sided Die Using a 5-Sided Die »You have a function rand5() that generates a random integer from 1 to 5. Use it to write a function rand7() that generates a random integer from 1 to 7. rand5() returns each integer with equal probability... keep reading »


http://codingdojo.org/cgi-bin/index.pl?KataReversi

http://matteo.vaccari.name/aw/kata-cgi-quotes


