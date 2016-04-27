# ARRAYS

## FIND
	- You are given an array with integers between 1 and 1,000,000. One integer is in the array twice. How can you determine which one? Can you think of a way to do it using little extra memory.
	-  You are given an array with integers between 1 and 1,000,000. One integer is missing. How can you determine which one? Can you think of a way to do it while iterating through the array only once. Is overflow a problem in the solution? Why not?
	-  In an array 1-100 numbers are stored, one number is missing how do you find it? (solution)
	-  In an array 1-100 exactly one number is duplicate how do you find it?
	-  In an array 1-100 multiple numbers are duplicates, how do you find it?
	One trick in this programming questions is by using HashMap or Hashtable , we can store number as key and its occurrence as value, if number is already present in Hashtable then increment its value or insert value as 1 and later on print all those numbers whose values are more than one.
	- How to find top two maximum number in array? 


# DUPS



## 
-  Find the most frequent integer in an array

-  Returns the largest sum of contiguous integers in the array
Example: if the input is (-10, 2, 3, -2, 0, 5, -15), the largest sum is 8
int GetLargestContiguousSum(int* anData, int len)
	* Implement Shuffle given an array containing a deck of cards and the number of cards. Now make it O(n).
	* Return the sum two largest integers in an array
int SumTwoLargest(int* anData, int size)
	* Sum n largest integers in an array of integers where every integer is between 0 and 9
int SumNLargest(int* anData, int size, int n)



- Binary Search
- Merge Overlapping Intervals
- Find Smallest Common Number
- Find Low High Index
- Optimal Job Selection
- Move Zeros To Left
- Rotate Array
- Search Rotated Array
- Max in Sliding Window
- Sort Nuts and Bolts
- Stock Prices




-  Find pairs in an integer array whose sum is equal to 10 (bonus: do it in linear time)
-  Given 2 integer arrays, determine of the 2nd array is a rotated version of the 1st array. Ex. Original Array A={1,2,3,5,6,7,8} Rotated Array B={5,6,7,8,1,2,3}
-  Write fibbonaci iteratively and recursively (bonus: use dynamic programming)
-  Find the only element in an array that only occurs once.
-  Find the common elements of 2 int arrays


-  Given two arrays, 1,2,3,4,5 and 2,3,1,0,5 find which number is not present in the second array.
Here is a quick tip to solve this programming question: put the elements of the second array in the Hashtable and for every element of the first array, check whether it’s present in the hash or not, O/P all those elements from the first array that are not present in the hash table
- How do you find second highest number in an integer array?
- How to find all pairs in array of integers whose sum is equal to given number?
- How to remove duplicate elements from array?
- How to find largest and smallest number in array? (solution)
