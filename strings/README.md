# STRINGS

	* Reverse words in a string (words are separated by one or more spaces). Now do it in-place. By far the most popular string question!
	* Reverse a string
	* Strip whitespace from a string in-place
void StripWhitespace(char* szStr)
	* Remove duplicate chars from a string ("AAA BBB" -> "A B")
int RemoveDups(char* szStr)
	* Find the first non-repeating character in a string:("ABCA" -> B )
int FindFirstUnique(char* szStr)
	* More Advanced Topics:
	* 
		* You may be asked about using Unicode strings. What the interviewer is usually looking for is:
		* 
			* each character will be two bytes (so, for example, char lookup table you may have allocated needs to be expanded from 256 to 256 * 256 = 65536 elements)
			* that you would need to use wide char types (wchar_t instead of char)
			* that you would need to use wide string functions (like wprintf instead of printf)

		* Guarding against being passed invalid string pointers or non nul-terminated strings (using walking through a string and catching memory exceptions


Strings

	* Find the first non-repeated character in a String

	* Reverse a String iteratively and recursively

	* Determine if 2 Strings are anagrams

	* Check if String is a palindrome

	* Check if a String is composed of all unique characters

	* Determine if a String is an int or a double

	* HARD: Find the shortest palindrome in a String

	* HARD: Print all permutations of a String

	* HARD: Given a single-line text String and a maximum width value, write the function 'String justify(String text, int maxWidth)' that formats the input text using full-justification, i.e., extra spaces on each line are equally distributed between the words; the first word on each line is flushed left and the last word on each line is flushed right

- Strings
- Look and Say
- Palindrome Substrings
- Regular Expression Match
- Remove Duplicates
- Remove White Spaces
- Reverse Sentence Words
- String Segmentation
- Xml To Tree

1) Write code to check a String is palindrome or not? (solution)
Palindrome are those String whose reverse is equal to original.This can be done by using either StringBuffer reverse() method or by technique demonstrated in the solution here.


2) Write a method which will remove any given character from a String? (solution)
hint : you can remove a given character from String by converting it into character array and then using substring() method for removing them from output string.


3) Print all permutation of String both iterative and Recursive way? (solution)


4) Write a function to find out longest palindrome in a given string? (solution)


5) How to find first non repeated character of a given String? (solution)


6) How to count occurrence of a given character in a String? (solution)


7) How to check if two String are Anagram? (solution)


