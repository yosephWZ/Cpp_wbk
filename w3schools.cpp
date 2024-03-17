// @#$!@#$@!#$Progress### << ///Mar_2024..??>> @ @#$@%#!@%!Saving??@!#$@!#$@!#$!@#$@!#$
//!!!!! don't stay at one part for more than 1 weekds...!!!!
//!!!!! proceed as you go through by commenting .. for furhter refirinement..
//..//...//..//...//..//..//..//...//
//..//..Code explanation.//..use...//.ChatGPT.//..//..//...//
//..//...//..//...//..//..//..//...//
// exit(0); // 0 indicates successful termination


/*_______________________ Sololearn Codecoach Challenges__________________ 





#include <iostream>
using namespace std;

class A {
	public:
		~A(){cout <<1;}
	
};

class B {
	public:
		~B(){cout <<2;}
	
};

class C :public A, public B{
	public:
		~C(){cout <<3;}
	
};


int main() {

	C c;	

  // return 0;
}


#include <iostream>
using namespace std;

int main(){
		
	int x=5,p=1,sum=0;
	int r;
	
	while(x>0){
		r=x%2;
		sum+=r*p; // sum = sum +1 ..3
		p*=10;
		x/=2;	// x=x/2 .. 2
		
	cout<< sum <<endl;
	}

}




*/



/*______Codecoach Challenges 

#file:///D:\cNG\Cpp_wbk\beecrowd.cpp

#file:///D:\cNG\Cpp_wbk\codeforces.cpp

#file:///D:\cNG\Cpp_wbk\onlinejudge.cpp

#file:///D:\cNG\Cpp_wbk\ProjectEuler.cpp


*/


/* _____________________   C++ Getting Started 

	#include <iostream>
	using namespace std;

	int main() {
	  cout << "Hello World!";
	  exit(0); // 0 indicates successful termination
	  cout << "Hello World!";
	  return 0;
	}


*/

/*  _____________________  C++ Syntax  


	#include <iostream> // header file library 
	using namespace std;  // standard library

	int main() {   //a function

	cout << "Hello World!";  //object used to output/print text

	return 0;//ends the main function.
	}


*/

/*  _____________________  C++ Output (Print Text) 

#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  cout << "I am learning C++";
  return 0;
}


#include <iostream>
using namespace std; //\n characters after each other will create a blank lin

int main() {
  cout << "Hello World! \n\n";
  cout << "I am learning C++";
  return 0;
}

#include <iostream>
using namespace std; //new line, is with the endl manipulator:

int main() {
  cout << "Hello World!" << endl;
  cout << "I am learning C++";
  return 0;
}

*/


/*  _____________________  C++ Variables 


// #include <iostream>
// using namespace std;
// int main(){ 
	// int myNum = 15;
	// cout << myNum;
	// return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){ 

	// int myNum = 15;  // myNum is 15
	// myNum = 10;  // Now myNum is 10
	// cout << myNum;  // Outputs 10
		
	// return 0;
// }

//______ Constants

// #include <iostream>
// using namespace std;
// int main(){ 
	// const int myNum = 15;  // myNum will always be 15
	// myNum = 10; 
	// cout << myNum ;
// return 0;}

//______ Other Types

// #include <iostream>
// using namespace std;
// int main(){ 
	// int myNum = 5;               // Integer (whole number without decimals)
	// double myFloatNum = 5.99;    // Floating point number (with decimals)
	// char myLetter = 'D';         // Character
	// string myText = "Hello";     // String (text)
	// bool myBoolean = true; 
	// cout << myNum 		<<endl;
	// cout << myFloatNum  <<endl;
	// cout << myLetter    <<endl;
	// cout << myText 		<<endl;
	// cout << myBoolean	<<endl;
// return 0;}

//______ Display Variables

// #include <iostream>
// using namespace std;
// int main(){ 
	// int myAge = 35;
	// cout << "I am " << myAge << " years old.";
// return 0;}

//______ Add Variables Together

// #include <iostream>
// using namespace std;
// int main(){ 
	// int x = 5;
	// int y = 6;
	// int sum = x + y;
	// cout << sum;
// return 0;}

//______ Declare Many Variables


// #include <iostream>
// using namespace std;
// int main(){ 
	// int x=5,u=6,z=50;
	// cout<<x+u+z<<endl;
// return 0;}


//______ Identifiers


#include <iostream>
using namespace std;

int main() {
  // Good name
  int minutesPerHour = 60;
  
  // OK, but not so easy to understand what m actually is
  int m = 60;
  
  cout << minutesPerHour << "\n";
  cout << m;
  return 0;
}


//______ Constants

#include <iostream>
using namespace std;

int main() {
  const int myNum = 15;
  myNum = 10;
  cout << myNum;
  return 0;
}



*/

/* _____________________   C++ User Input 


// #include <iostream>
// using namespace std;
// int main(){ 
// int x; 
// cout << "Type a number: "; // Type a number and press enter
// cin >> x; // Get user input from the keyboard
// cout << "Your number is: " << x; // Display the input value
// return 0;}


// #include <iostream>
// using namespace std;
// int main(){
	// int x, y;
// int sum;
// cout << "Type a number: ";
// cin >> x;
// cout << "Type another number: ";
// cin >> y;
// sum = x + y;
// cout << "Sum is: " << sum; return 0;}



*/


/*  _____________________  C++ Data Types 


// #include <iostream>
// using namespace std;
// int main(){ 
	// int myNum = 5;               // Integer (whole number without decimals)
	// double myFloatNum = 5.99;    // Floating point number (with decimals)
	// char myLetter = 'D';         // Character
	// string myText = "Hello";     // String (text)
	// bool myBoolean = true; 
	// cout << myNum 		<<endl;
	// cout << myFloatNum  <<endl;
	// cout << myLetter    <<endl;
	// cout << myText 		<<endl;
	// cout << myBoolean	<<endl;
// return 0;}


//______ Numeric Types


//______ int
// #include <iostream>
// using namespace std;
// int main(){ 
	// int myNum = 1000;
	// cout << myNum;
// return 0;}

//______ float

// #include <iostream>
// using namespace std;
// int main(){ 
	// float ny=5.75;
	// cout<< ny;
// return 0;}

//______ double

// #include <iostream>
// using namespace std;
// int main(){ 
	// double ny=5.75;
	// cout<< ny;
// return 0;}

//______ Scientific Numbers


// #include <iostrem> 
// using namespace std;	
// int main(){ 
	// float f1 = 35e3;
// double d1 = 12E4;
// cout << f1;
// cout << d1;
// return 0;}

//______ Boolean Data Types


// #include <iostrem> 
// using namespace std;	
// int main(){ 
// bool isCodingFun = true;
// bool isFishTasty = false;
// cout << isCodingFun;  // Outputs 1 (true)
// cout << isFishTasty;  // Outputs 0 (false)

// return 0;}


//______ Character Data Types

// #include <iostrem> 
// using namespace std;	
// int main(){ 

// char myGrade = 'B';
// cout << myGrade;

// return 0;}


// #include <iostrem> 
// using namespace std;	
// int main(){ 

// char a = 65, b = 66, c = 67;
// cout << a;
// cout << b;
// cout << c;

// return 0;}

//______ String Data Types


// #include <iostrem> 
// using namespace std;	
// int main(){ 
// string greeting = "Hello";
// cout << greeting;
// return 0;}



// #include <iostream> 
// #include <string>
// using namespace std;	
// int main(){ 
// // Include the string library

// // Create a string variable
// string greeting = "Hello";

// // Output string value
// cout << greeting;
// return 0;}





*/

/*  _____________________  C++ Operators 


// #include <iostream>
// using namespace std;
// int main(){ 
	// int x = 100 + 50;
	// cout <<x;
// return 0;}



// #include <iostream>
// using namespace std;
// int main(){ 
// int sum1 = 100 + 50;        // 150 (100 + 50)
// int sum2 = sum1 + 250;      // 400 (150 + 250)
// int sum3 = sum2 + sum2;     // 800 (400 + 400)	// cout <<x;
// cout<< sum1<<endl;      // 150 (100 + 50)
// cout<< sum2<<endl;      // 400 (150 + 250)
// cout<< sum3<<endl;     // 800 (400 + 400)	// cout <<x;
// return 0;}

// #include <iostream>
// using namespace std;
// int main(){ 
// int x = 10;
	// x += 5;
	// cout << x<<endl;
	// x -= 5;
	// cout << x<<endl;
	// x *= 5;
	// cout << x<<endl;
	// x /= 5;
	// cout << x<<endl;
	// x %= 5;
	// cout << x<<endl;
	// x |= 5;
	// cout << x<<endl;
	// x ^= 5;
	// cout << x<<endl;
	// x >>= 5;
	// cout << x<<endl;
	// x <<= 5;
	// cout << x<<endl;
// return 0;}

//______ Assignment Operators

#include <iostream>
using namespace std;

int main() {
  int x = 10;
  cout << x;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int x = 10;
  x += 5;
  cout << x;
  return 0;
}

Comparison Operators


#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  cout << (x > y); // returns 1 (true) because 5 is greater than 3
  return 0;
}


Logical Operators


// Logical and	

#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  cout << (x > 3 && x < 10); // returns true (1) because 5 is greater than 3 AND 5 is less than 10
  return 0;

}

// Logical or	

#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  cout << (x > 3 || x < 4); // returns true (1) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
  return 0;
}

//Logical not	


#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  cout << (!(x > 3 && x < 10)); // returns false (0) because ! (not) is used to reverse the result
  return 0;
}






*/


/* C++ Basics Algorithm: Exercises, Practice, Solution

1. Write a C++ program to compute the sum of two given integer values. If the two values are the same, then return triple their sum.






2. Write a C++ program to find the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.






3. Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30.








4. Write a C++ program to check a given integer and return true if it is within 10 of 100 or 200.






5. Write a C++ program to create a string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged.
6. Write a C++ program to remove the character at a given position in the string. The given position will be in the range 0..string length -1 inclusive.
7. Write a C++ program to exchange the first and last characters in a given string and return the result string.
8. Write a C++ program to create a string that is 4 copies of the 2 front characters of a given string. If the given string length is less than 2 return the original string.
9. Write a C++ program to create a string with the last character added at the front and back of a given string of length 1 or more

10. Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7.








11. Write a C++ program to create a string taking the first 3 characters of a given string. Then, return the string with the 3 characters added to both the front and back. If the given string length is less than 3, use whatever characters are there.
12. Write a C++ program to check if a given string starts with 'C#' or not.



13. Write a C++ program to check if one given temperature is less than 0 and the other is greater than 100.





14. Write a C++ program to check two given integers whether either of them is in the range 100..200 inclusive.






15. Write a C++ program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the range, otherwise false.








16. Write a C++ program to check whether two given integer values are in the range 20..50 inclusive. Return true if 1 or other is in the range, otherwise false.








17. Write a C++ program to check if the string 'yt' appears at index 1 in a given string. If it appears return a string without 'yt' otherwise return the original string.
18. Write a C++ program to check the largest number among three given integers.








19. Write a C++ program to check which number is closest to the value 100 among two given integers. Return 0 if the two numbers are equal.






20. Write a C++ program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive.








21. Write a C++ program to find the larger value from two positive integer values that is in the range 20..30 inclusive. Also, return 0 if neither is in that range.








22. Write a C++ program to check if a given string contains between 2 and 4 'z' characters.




23. Write a C++ program to check if two given non-negative integers have the same last digit.








24. Write a C++ program to create the string which is n (non-negative integer) copies of a given string.
25. Write a C++ program to create another string which is n (non-negative integer) copies of the first 3 characters of a given string. If the length of the given string is less than 3 then return n copies of the string.
26. Write a C++ program to count the string "aa" in a given string and assume "aaa" contains two "aa".



27. Write a C++ program to check if the first appearance of "a" in a given string is immediately followed by another "a".



28. Write a C++ program to create another string made of every other character starting with the first from a given string.
29. Write a C++ program to create a string like "aababcabcd" from a given string "abcd".
30. Write a C++ program to count the number of times a substring of length 2 appears in a given string as well as its last two characters. Do not count the end substring.




31. Write a C++ program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere.



32. Write a C++ program to compare two given strings and return the number of positions where they contain the same length 2 substring.




33. Write a C++ program to create a new string from a given string where a specified character is removed except at the beginning and end.
34. Write a C++ program to create the string of the characters at indexes 0,1,4,5,8,9 ... from a given string.
35. Write a C++ program to count the number of 5's next to each other in an array of integers. Count the situation where the second 5 is actually a 6.



36. Write a C++ program to check if a triple is present in an array of integers or not. If a value appears three times in a row in an array it is called a triple.



37. Write a C++ program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30.








38. Write a C++ program that accepts two integers and returns true if either one is 5 or their sum or difference is 5.






39. Write a C++ program to test if a given non-negative number is a multiple of 13 or it is one more than a multiple of 13.








40. Write a C++ program to check if a given number that is not negative is a multiple of 3 or 7, but not both.






41. Write a C++ program to check if a given number is within 2 of a multiple of 10.








42. Write a C++ program to compute the sum of the two given integers. Return 18 if one of the given integer values is in the range 10..20 inclusive.








43. Write a C++ program to check whether a given string begins with "F" or ends with "B". If the string starts with "F" return "Fizz" and return "Buzz" if it finishes with "B". If the string starts with "F" and ends with "B" return "FizzBuzz". In other cases return the original string.
44. Write a C++ program to check if it is possible to add two integers to get the third integer from three given integers.





45. Write a C++ program to check if y is greater than x, and z is greater than y from three given integers x,y,z.





46. Write a C++ program to check if three given numbers are in strict increasing order. For example, 4, 7, 15, or 45, 56, 67, but not 4 ,5, 8 or 6, 6, 8. However, if a fourth parameter is true, equality is allowed, such as 6, 6, 8 or 7, 7, 7.
1, 2, 3, false
1, 2, 3, true
10, 2, 30, false
10, 10, 30, true




47. Write a C++ program to check if two or more integers that are not negative have the same rightmost digit.






48. Write a C++ program to check three given integers and return true if one of them is 20 lower than one of the others.






49. Write a C++ program to find the larger of two given integers. However if the two integers have the same remainder when divided by 7, then return the smaller integer. If the two integers are the same, return 0.






50. Write a C++ program to check two given integers. Each integer is in the range 10..99. Return true if a digit appears in both numbers, such as the 3 in 13 and 33.






51. Write a C++ program to compute the sum of two given non-negative integers x and y as long as the sum has the same number of digits as x. If the sum has more digits than x, return x without y.






52. Write a C++ program to compute the sum of three given integers. Return the third value if the two values are the same.








53. Write a C++ program to compute the sum of the three integers. If one of the values is 13 then do not count it and its right towards the sum.








54. Write a C++ program to compute the sum of the three given integers. Except for 13 and 17, any value in the range 10..20 inclusive counts as 0.








55. Write a C++ program to check two integers and return the value nearest to 13 without crossing over. Return 0 if both numbers go over.








56. Write a C++ program to check three given integers (small, medium and large) and return true if the difference between small and medium and the difference between medium and large is same.





57. Write a C++ program to create another string using two given strings s1, s2, the format of the new string will be s1s2s2s1.
58. Write a C++ program to insert a given string into middle of the another given string of length 4.
59. Write a C++ program to create another string using three copies of the last two characters of a given string of length at least two.
60. Write a C++ program to create a new string using the first two characters of a given string. If the string length is less than 2, return the original string.
61. Write a C++ program to create the string of the first half of a given string of even length.
62. Write a C++ program to create a new string without the first and last characters of a given string of length at least two.
63. Write a C++ program to create a new string from two given strings, one of which is shorter and the other is larger. The format of the updated string will be long string + short string + long string.
64. Write a C++ program to combine two strings of length at least 1, after removing their first character.
65. Write a C++ program to move the first two characters to the end of a given string of length at least two.
66. Write a C++ program to create a new string without the first and last characters of a given string of any length.
67. Write a C++ program to create a string using the two middle characters of a given string of even length (at least 2).
68. Write a C++ program to create a new string using the first and last n characters from a given string of length at least n.
69. Write a C++ program to create a string of length 2 starting at the given index of a given string.
70. Write a C++ program that takes at least 3 characters from the middle of a given string that would be used to create a string.
71. Write a C++ program to create a new string of length 2, using the first two characters of a given string. If the given string length is less than 2 use '#' as missing characters.
72. Write a C++ program to create a string taking the first character from a string and the last character from another given string. If the length of any given string is 0, use '#' as its missing character.
73. Write a C++ program to create a new string from a given string after swapping the last two characters.
74. Write a C++ program to check if a given string begins with 'abc' or 'xyz'. If the string begins with 'abc' or 'xyz' return 'abc' or 'xyz' otherwise return the empty string.
75. Write a C++ program to check whether the first two characters and the last two characters of a given string are the same.



76. Write a C++ program to add two given strings. If the given strings have different lengths, remove the characters from the longer string.
77. Write a C++ program to create a new string using 3 copies of the first 2 characters of a given string. If the length of the given string is less than 2 use the whole string.
78. Write a C++ program to create a new string from a string. Return the given string without the first two characters if the two characters at the beginning and end are the same. Otherwise, return the original string.
79. Write a C++ program to create a string from a given string without the first and last character. This is possible if the first or last characters are 'a' otherwise return the original given string.
80. Write a C++ program to create a new string from a given string. If the first or first two characters are 'a', return the string without those 'a' characters, otherwise return the original string.
81. Write a C++ program to check a given array of integers of length 1 or more and return true if 10 appears as either first or last element in the given array.




82. Write a C++ program to check a given array of integers of length 1 or more. The program will return true if the first element and the last element are equal in the given array.



83. Write a C++ program to check two given arrays of integers of length 1 or more. This will return true if they have the same first element or if they have the same last element.



84. Write a C++ program to compute the sum of the elements of an array of integers.


85. Write a C++ program to rotate the elements of a given array of integers (length 4 ) in the left direction and return the changed array.

86. Write a C++ program to reverse a given array of integers of length 5.

87. Write a C++ program to create an array containing the middle elements from the two given arrays of integers, each of length 5.

88. Write a C++ program to create an array taking the first and last elements of a given array of integers and length 1 or more.

89. Write a C++ program to determine whether a given array of integers of length 2 contains 15 or 20.



90. Write a C++ program to check if an array of integers with length 2 does not contain 15 or 20.



91. Write a C++ program to check a given array of integers and return true if the array contains 10 or 20 twice. The length of the array will be 0, 1, or 2.




92. Write a C++ program to check a given array of integers, length 3 and create an array. If there is a 5 in the given array immediately followed by a 7 then set 7 to 1.


93. Write a C++ program to compute the sum of the two given arrays of integers, length 3 and find the array that has the largest sum.

94. Write a C++ program to create an array taking two middle elements from a given array of integers of length even.

95. Write a C++ program to create an array by swapping the first and last elements of a given array of integers with a length of at least 1.

96. Write a C++ program to create an array length 3 from a given array (length at least 3) using the elements from the middle of the array.

97. Write a C++ program to find the largest value from the first, last, and middle elements of a given array of integers of odd length (at least 1).





98. Write a C++ program to count the even number of elements in a given array of integers.


99. Write a C++ program to compute the difference between the largest and smallest values in a given array of integers and length one or more.


100. Write a C++ program to compute the sum of values in a given array of integers except the number 17. Return 0 if the given array has no integers.

101. Write a C++ program to compute the sum of the numbers in a given array except the ones starting with 5 followed by at least one 6. Return 0 if the given array has no integers.


102. Write a C++ program to check if a given array of integers contains 5 next to a 5 somewhere.



103. Write a C++ program to check whether a given array of integers contains 5's and 7's.



104. Write a C++ program that checks if the sum of all 5' in the array is exactly 15.



105. Write a C++ program to check if the number of 3's is greater than the number of 5's.



106. Write a C++ program to check if a given array of integers contains a 3 or a 5.




107. Write a C++ program to check if a given array of integers contains no 3 or 5.




108. Write a C++ program to check if an array of integers contains a 3 next to a 3 or a 5 next to a 5 or both.




109. Write a C++ program to check a given array of integers. Then, return true if the given array contains two 5's next to each other, or two 5's separated by one element.




110. Write a C++ program to check a given array of integers and return true if there is a 3 with a 5 somewhere later in the given array.




111. Write a C++ program to check a given array of integers. The program will return true if the given array contains either 2 even or 2 odd values all next to each other.




112. Write a C++ program to check a given array of integers. The program will return true if the value 5 appears 5 times and there are no 5 next to each other.




113. Write a C++ program to check a given array of integers and return true if every 5 that appears in the given array is next to another 5.




114. Write a C++ program to check a given array of integers. The program will return true if the specified number of the same elements appears at the start and end of the given array.



115. Write a C++ program to check a given array of integers and return true if the array contains three increasing adjacent numbers.



116. Write a C++ program to check if the value of each element is equal or greater than the value of the previous element of a given array of integers.




117. Write a C++ program to check if there are two values 15, 15 adjacent to each other in a given array (length should be at least 2) of integers. Return true otherwise false.
118. Write a C++ program to find the largest average value between the first and second halves of a given array of integers. Ensure that the minimum length is at least 2. Assume that the second half begins at index (array length)/2.
119. Write a C++ program to count the number of strings with a given length in a given array of strings.
120. Write a C++ program to create an array using the first n strings from a given array of strings. (n>=1 and <=length of the array).
121. Write a C++ program to create an array from a given array of strings using all the strings whose lengths are matched with the given string length.
122. Write a C++ program to check a positive integer and return true if it contains the number 3. Otherwise return false.
123. Write a C++ program that creates a new array of odd numbers with specific lengths from a given array of positive integers.
124. Write a C++ program to create a list from a given list of integers where each element is multiplied by 5.
125. Write a C++ program that multiplies each integer three times to create a list from a given list of integers.
126. Write a C++ program to create a list from a given list of strings where each element has "$" added at the beginning and end position.
127. Write a C++ program to create a list from a given list of strings where each element is replaced by 3 copies of the string concatenated together.

128. Write a C++ program to create a list from a given list of integers. In this program, each integer value is added to 3 and the result value is multiplied by 4.
129. Write a C++ program to create a list of the rightmost digits from a given list of positive integers.



*/


/* C++ Basic 

1. Write a program in C++ to print welcome text on a separate line.
2. Write a program in C++ to print the sum of two numbers.
3. Write a in C++ program to find the size of fundamental data types.
4. Write a program in C++ to print the sum of two numbers using variables.
5. Write a in C++ program to check the upper and lower limits of integers.
6. Write a C++ program that checks whether primitive values cross the limit.
7. Write a C++ program that displays mixed data types and arithmetic operations.












8. Write a C++ program to check overflow/underflow during various arithmetic operations.
9. Write a C++ program to display the operation of pre and post increment and decrement.
10. Write a C++ program to format the output.
11. Write a C++ program to print the results of the specified operations.
12. Write a C++ program to add two numbers and accept them from the keyboard.
13. Write a C++ program that swaps two numbers.
14. Write a C++ program that calculates the volume of a sphere.
15. Write a C++ program that calculates the volume of a cube.
16. Write a C++ program that calculates the volume of a cylinder.
17. Write a C++ program to find the Area and Perimeter of a Rectangle.
18. Write a C++ program to find the area of any triangle using Heron's formula.
19. Write a C++ program to find the area and circumference of a circle.
20. Write a C++ program to convert temperature in Celsius to Fahrenheit.
21. Write a C++ program to convert temperature in Fahrenheit to Celsius.
22. Write a C++ program to find the third angle of a triangle.
23. Write a program in C++ that converts kilometers per hour to miles per hour.
24. Write a program in C++ to convert temperature in Kelvin to Fahrenheit.
25. Write a program in C++ to convert temperature in Kelvin to Celsius.
26. Write a program in C++ to convert temperature in Fahrenheit to Kelvin.
27. Write a program in C++ to convert temperature in Celsius to Kelvin.
28. Write a C++ program to find the area of the Scalene Triangle.
29. Write a C++ program to compute the quotient and remainder.
30. Write a C++ program to compute the total and average of four numbers.
31. Write a C++ program to input a single-digit number and print it in a rectangular form of 4 columns and 6 rows.






32. Write a program in C++ to check whether a number is positive, negative or zero.
33. Write a program in C++ to divide two numbers and print them on the screen.
34. Write a C++ program to display the current date and time.
35. Write a program in C++ to compute the specified expressions and print the output.
36. Write a program in C++ to test Type Casting.








37. Write a C++ program to print a mystery series from 1 to 50.

38. Write a C++ program that takes a number as input and prints its multiplication table up to 10.










39. Write a C++ program to print the following pattern.
40. Write a C++ program to print the area and perimeter of a rectangle.
41. Write a C++ program to print an American flag on the screen.
42. Write a C++ program that accepts the user's first and last name and prints them in reverse order with a space between them.
43. Write a C++ program that accepts the radius of a circle from the user and computes the area and circumference.
44. Write a C++ program to get the volume of a sphere with radius 6.
45. Write a C++ program to calculate the volume of a cone.
46. Write a C++ program to calculate the volume of a cylinder.
47. Write a C++ program to calculate the sum of all even and odd numbers in an array.
48. Write a C++ program that swaps two variables without using a third variable.
49. Write a C++ program to print the code (ASCII code / Unicode code etc.) of a given character.
50. Write a C++ program to enter length in centimeters and convert it into meters and kilometers.
51. Write a C++ program that converts kilometers per hour to miles per hour.
52. Write a C++ program to enter two angles of a triangle and find the third angle.
53. Write a C++ program to calculate the area of an equilateral triangle.
54. Write a C++ program to enter P, T, R and calculate Simple Interest.
55. Write a C++ program to enter P, T, R and calculate compound interest.

56. Write a C++ program to show the manipulation of a string.
57. Write a C++ program to print the area of a hexagon.
58. Write a C++ program to print the area of a polygon.
59. Write a C++ program to compute the distance between two points on the surface of the earth.
60. Write a C++ program to add two binary numbers.
61. Write a C++ program to swap the first and last digits of any number.
62. Write a C++ program that reads the integer n and prints a twin prime that has the maximum size among twin primes less than or equal to n.
63. Write a C++ program that prints the three highest numbers from a list of numbers in descending order.
64. Write a C++ program to compute the sum of the two given integers and count the number of digits in the sum value.
65. Write a C++ program to check whether a given length of three sides forms a right triangle.
66. Write a C++ program to add all the numbers from 1 to a given number.
67. Write a C++ program that prints the central coordinate and the radius of a circumscribed circle of a triangle. This circle is created from three points on the plane surface.
68. Write a C++ program that reads seven numbers and sorts them in descending order.
69. For n = 10, write a C++ program that reads the integer n and prints its factorial.
70. Write a C++ program to replace all the lower-case letters in a given string with the corresponding capital letters.
71. Write a C++ program that reads a sequence of integers and prints the mode values of the sequence. The number of integers is greater than or equal to 1 and less than or equal to 100.
72. Write a C++ program that reads n digits chosen from 0 to 9 and counts the number of combinations where the sum of the digits equals the given number. Do not use the same digits in a combination.



73. Write a C++ program that accepts the sales unit price and sales quantity of various items and computes the total sales amount and the average sales quantity. All input values must be greater than or equal to 0 and less than or equal to 1,000. In addition, the number of pairs of sales unit and sales quantity does not exceed 100. If a fraction occurs in the average of the sales quantity, round to the first decimal place.
74. Write a C++ program that accepts various numbers and computes the difference between the highest number and the lowest number. All input numbers should be real numbers between 0 and 1,000,000. The output (real numbers) may include an error of 0.01 or less.
75. Write a C++ program to compute the sum of the specified number of prime numbers.
76. An even number of 4 or more can be represented by the sum of two prime numbers. This is called the Goldbach expectation, and it is confirmed that it is correct up to a considerable number by computer calculation. For example, 10 can be expressed as the sum of two prime numbers 7 + 3, 5 + 5. Write a C++ program that accepts an integer (n) from the user and outputs the number of combinations that express n as the sum of two prime numbers.
77. There are four different points on a plane: A(x1, y1), B(x2, y2), C(x3, y3) and D(x4, y4).




78. Write a C++ program to sum all positive integers in a sentence.
79. Write a C++ program to display all the leap years between two given years. If there is no leap year in the given period,display a suitable message.
80. Write a C++ program that accepts n different numbers (0 to 100) as well as an integer s which is equal to the sum of the n different numbers.
81. Write a C++ program that replaces all the words "dog" with "cat".
82. Write a C++ program that reads a list of pairs of a word and a page number, and prints the word and a list of the corresponding page numbers.
83. Write a C++ program to convert a given number into hours and minutes. Separate the number of hours and minutes with a colon.
84. Write a C++ program to check whether the sequence of the numbers in a given array is an "Arithmetic" or "Geometric" sequence. Return -1 if the sequence is not "Arithmetic" or "Geometric".
85. Write a C++ program to find the total number of minutes between two given times (formatted with a colon and am or pm).
86. Write a C++ program to add up all the digits between two given integers. Add all the digits between 11 and 16.




*/



/*  _____________________  C++ Strings  

#include <iostream>
using namespace std;
int main(){ 
	string greeting = "Hello";
	cout << greeting <<endl;
return 0;}


#include <iostream>
#include <string>
using namespace std;
int main(){ 
	// Include the string library

// Create a string variable
string greeting = "Hello";
cout << greeting << endl;
return 0;}


// String Concatenation

#include <iostream>
using namespace std;
int main(){ 
	string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;
cout << fullName;

return 0;}

// String Length

#include <iostream>
using namespace std;
int main(){ 
	string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "The length of the txt string is: " << txt.length();
return 0;}


// Access Strings


#include <iostream>
using namespace std;
int main(){ 
	string myString = "Hello";
cout << myString[0];
// Outputs H
return 0;}

#include <iostream>
using namespace std;
int main(){ 
	string myString = "Hello";
cout << myString[1];
// Outputs e
return 0;}


// Change String Characters

#include <iostream>
using namespace std;
int main(){ 
	string myString = "Hello";
	myString[0] = 'J';
	cout << myString;
	// Outputs Jello instead of Hello

return 0;}

// User Input Strings

#include <iostream>
using namespace std;
int main(){ 
string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName;

// Type your first name: John
// Your name is: John
return 0;}


#include <iostream>
using namespace std;
int main(){ 
string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;
return 0;

}


// Adding Numbers and Strings

#include <iostream>
using namespace std;
int main(){ 

int x = 10;
int y = 20;
int z = x + y;      // z will be 30 (an integer)
return 0;

}


#include <iostream>
using namespace std;
int main(){ 

string x = "10";
string y = "20";
string z = x + y;   // z will be 1020 (a string)

return 0;

}

#include <iostream>
using namespace std;
int main(){ 

string x = "10";
int y = 20;
string z = x + y;

return 0;

}

// Omitting Namespace



#include <iostream>
#include <string>
using namespace std;
int main(){ 
  std::string greeting = "Hello";
  std::cout << greeting;
  
return 0;

}







// */


/* C++ String
1. Write a C++ program to reverse a given string.
2. Write a C++ program to change every letter in a given string with the letter following it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).
3. Write a C++ program to capitalize the first letter of each word in a given string. Words must be separated by only one space.
4. Write a C++ program to find the largest word in a given string.
5. Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string.
6. Write a C++ program to check whether the characters e and g are separated by exactly 2 places anywhere in a given string at least once.
7. Write a C++ program to count all the vowels in a given string.
8. Write a C++ program to count all the words in a given string.
9. Write a C++ program to check whether two characters appear equally in a given string.
10. Write a C++ program to check if a given string is a Palindrome or not.
11. Write a C++ program to find a word in a given string that has the highest number of repeated letters.
12. Write a C++ program to insert a dash character (-) between two odd numbers in a given string of numbers.
13. Write a C++ program to change the case (lower to upper and upper to lower cases) of each character in a given string.
14. Write a C++ program to find the numbers in a given string and calculate the sum of all numbers.
15. Write a C++ program to convert a given non-negative integer into English words.
16. Write a C++ program to find the longest common prefix from a given array of strings.
17. Write a C++ program to find all combinations of well-formed brackets from a given pair of parentheses.
18. Write a C++ program to find the length of the longest valid (correct-formed) parentheses substring of a given string.
19. Write a C++ program to reverse only the vowels of a given string.
20. Write a C++ program to find the length of the longest palindrome in a given string (uppercase or lowercase letters).
21. Write a C++ program to check whether a given string is a subsequence of another given string. Return 1 for true and 0 for false.
22. Write a C++ program to remove all special characters from a given string.
23. Write a C++ program that counts the number of unique characters in two given strings.
24. Write a C++ program to count the number of duplicate characters in a given string.
25. Write a C++ program to find the longest sequence of consecutive ones in a given binary string.
1100110001
11
26. Write a C++ program to check if a given string is a title-cased string or not. When the string is title cased, return "True", otherwise return "False".
27. Write a C++ program to insert a space when a lower character follows an upper character in a given string.
28. Write a C++ program to extract the first specified number of vowels from a given string. If the specified number is less than the number of vowels present in the text, display "n is less than the number of vowels present in the string".
29. Write a C++ program to print a given integer with commas separating the thousands.
5,000
30. Write a C++ program to identify the missing letter in a given string (list of alphabets). The method returns, "There is no missing letter!" if no letters are missing from the string.
31. Write a C++ program to check if a given string contains only uppercase or only lowercase letters. Return "True" if the string is uppercase or lowercase, otherwise "False".
32. Write a C++ program that takes a string and reverses the words of three or more lengths in a string. Return the updated string. As input characters, only spaces and letters are permitted.
33. A string is created using the letters of another string. Letters are case sensitive. Write a C++ program to verify that the letters in the second string appear in the first string. Return true otherwise false.
34. Write a C++ program that removes a specific word from a given string. Return the updated string.
35. Write a C++ program to reverse all words that have odd lengths in a string.
36. Write a C++ program to check whether there are two consecutive (following each other continuously), identical letters in a given string.
37. Write a C++ program that counts the number of instances of a certain character in a given string.
38. Write a C++ program that removes a specific character from a given string. Return the updated string.
39. Write a C++ program that checks whether a given string contains unique characters or not. Return true if the string contains unique characters otherwise false.
40. For two given strings, str1 and str2, write a C++ program to select only the characters that are lowercase in the other string at the same position. Return characters as a single string.
41. Write a C++ program that finds the position of the second occurrence of a string in another string. If the substring does not appear at least twice return -1.
42. Write a C++ program that alternates the case of each letter in a given string of letters.


*/




/*  _____________________  C++ Math 




// #include <iostream>
// using namespace std;
// int main() { 
	// cout << max(5, 10);
	// cout << min(5, 10);
// return 0;}

//  _____________________  C++ <cmath> Header




// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() { 
	// cout << sqrt(64)<<"\n";
	// cout << round(2.6)<<"\n";
	// cout << log(2)<<"\n";
// return 0;}

*/


/* C++ Math
1. Write a C++ program to check whether a given number is a power of two or not.
2. Write a C++ program to check the additive persistence of a given number.
3. Write a C++ program to reverse the digits of a given integer.
4. Write a C++ program to divide two integers (dividend and divisor) without using the multiplication, division and mod operators.
5. Write a C++ program to calculate x raised to the power n (xn).
6. Write a C++ program to get the fraction part from two given integers representing the numerator and denominator in string format.
7. Write a C++ program to get the Excel column title that corresponds to a given column number (integer value).
1 -> A
2 -> B
3 -> C
26 -> Z
27 -> AA
28 -> AB
8. Write a C++ program to get the column number (integer value) that corresponds to a column title as it appears on an Excel sheet.
9. Write a C++ program to find the number of trailing zeroes in a given factorial.
10. Write a C++ program to count the total number of digits 1 appearing in all positive integers less than or equal to a given integer n.
11. Write a C++ program to add repeatedly all digits of a given non-negative number until the result has only one digit.
12. Write a C++ program to check if a given integer is a power of three or not.
13. For a non negative integer in the range 0 = i = n write a C++ program to calculate the number of 1's in their binary representation and return them as an array.


14. Write a C++ program to get the maximum product of a given integer after breaking the integer into the sum of at least two positive integers.
15. Write a C++ program to find the nth digit of the number 1 to n?
16. Write a C++ program to find the square root of a number using the Babylonian method.
17. Write a C++ program to multiply two integers without using multiplication, division, bitwise operators, and loops.
18. Write a C++ program to convert a given integer to a Roman numeral.
19. Write a C++ program to convert a given integer to a Roman numeral.
20. Write a C++ program to calculate the product of two positive integers represented as strings. Return the result as a string.
21. A decimal number is defined as a number whose whole number and fractional parts are separated by a decimal point in algebra. Write a C++ program to check if a given string is a decimal number or not.
22. Write a C++ program to compute the sum of a pair of binary strings. Binary strings will be returned, and input strings shouldn't be blank or contain just 1 or 0 characters.
23. Write a C++ program to compute the square root of a given non-negative integer. Return type should be an integer.
24. Write a C++ program to count prime numbers less than a given positive number.
25. Write a C++ program to count the total number of digits 1 present in all positive numbers less than or equal to a given integer.
26. Write a C++ program to find the missing number in a given array of integers taken from the sequence 0, 1, 2, 3, ...,n.
27. Write a C++ program to find the number of perfect squares (e.g. 1, 4, 9, 16, ...) that represent the sum of a given number.
28. Write a C++ program to break a given integer into at least two parts (positive integers) to maximize the product of those integers.
29. Write a C++ program that takes a number (n) and counts all numbers with distinct digits of length y within a specified range.

30. Write a C++ program to check whether a given positive integer is a perfect square or not.
31. Write a C++ program to replace a given number until it becomes 1. If the given number(n) is even replace n with n/2 and if the number(n) is odd replace n with either n+1 or n-1. Find the minimum number of replacements.
32. Write a C++ program to find the number of arithmetic slices in a given array of integers.
33. Write a C++ program to count from 1 to a specified number and display each number as the product of its prime factors.

34. Write a function which returns an array or collection which contains the prime decomposition of a given number greater than 1.
35. Write a C++ program to generate a sequence of primes by means of trial division.

*/


/* C++ Numbers
1. Write a program in C++ to check whether a given number is an ugly number or not.
2. Write a program in C++ to check whether a given number is Abundant or not.
3. Write a program in C++ to find the Abundant numbers (integers) between 1 and 1000.








4. Write a program in C++ to check whether a given number is Perfect or not.
28 is a perfect number
5. Write a program in C++ to find Perfect numbers and the number of Perfect numbers between 1 and 1000.
6. Write a program in C++ to check whether a given number is Deficient or not.
7. Write a program in C++ to find the Deficient numbers (integers) between 1 and 100.

8. Write a program in C++ to generate random integers in a specific range.
9. Write a program in C++ to check whether a given number is a Kaprekar number or not.
45 is a Kaprekar number
10. Write a program in C++ to generate and show all Kaprekar numbers less than 1000.

11. Write a program in C++ to check whether a number is a Lychrel number or not.
12. Write a C++ program to find the Lychrel numbers and the number of Lychrel numbers in the range 1 to 1000 (after 500 iterations).
13. Write a program in C++ to generate and show the first 15 Narcissistic decimal numbers.

14. Write a program in C++ to display the first 10 Lucus numbers.

15. Write a program in C++ to display the first 10 Catlan numbers.

16. Write a program in C++ to determine whether a number is Happy or not.
23 is a Happy number
17. Write a C++ program to find the Happy numbers between 1 and 1000.

18. Write a C++ program to check whether a number is Disarium or not.
19. Write a C++ program to find Disarium numbers between 1 and 1000.

20. Write a C++ program to check if a number is a Harshad Number or not.
21. Write a C++ program to find the Harshad numbers between 1 and 100.
22. Write a program in C++ to check whether a number is a Pronic Number or Heteromecic Number or not.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
23. Write a program in C++ to find Pronic numbers between 1 and 1000.

24. Write a program in C++ to check if a number is Authomorphic or not.
25. Write a C++ program to find the Authomorphic numbers between 1 and 1000.

26. Write a C++ program to check whether a number is a Duck Number or not.
27. Write a C++ program to find Duck Numbers between 1 and 500.

28. Write a C++ program to check two numbers are Amicable numbers or not.
29. Write a C++ program to count the amicable pairs in an array.
30. Write a C++ program to check if a given number is circular prime or not.
31. Write a C++ program to find circular prime numbers up to a specific limit.

32. Write a C++ program to check whether a given number is a perfect cube or not.
33. Write a C++ program to display the first 10 Fermat numbers.
34. Write a program in C++ to find any number between 1 and n that can be expressed as the sum of two cubes in two (or more) different ways.










35. Write a C++ program to check if a number is a Mersenne number or not.
31 is a Mersenne number.
36. Write a C++ program to generate Mersenne primes within a range of numbers.

37. Write a C++ program to find Narcissistic decimal numbers within a specific range.

38. Write a C++ program to check whether a given number is a palindrome or not.
141 is a Palindrome Number.
39. Write a C++ program to print the first 20 numbers of the Pell series.
40. Write a C++ program to find Strong Numbers within a range of numbers.
41. Write a C++ program to check if a number is Keith or not (with explanation).





42. Write a C++ program to create the first twenty Hamming numbers.









43. Write a C++ program to check whether a given number is an Armstrong number or not.

44. Write a C++ program to find the Armstrong number for a given range of numbers.

45. Write a C++ program to check whether a number is a Strong Number or not.


*/


/* C++ Date
1. Write a C++ program to get the current date and time.
2. Write a C++ program to get the day of the week from a given date. Return the day as a string. The format of the day is MM/DD/YYYY.
3. Write a C++ program to convert a given year to a century.
4. Write a C++ program to check whether a given year is a leap year or not.
5. Write a C++ program to compute the number of days in a month for a given year and month.
6. Write a C++ program to count the number of days between two given dates.

*/


/*  _____________________  C++ Booleans 




#include <iostream>
using namespace std;
int main(){ 
	bool isCodingFun = true;
	bool isFishTasty = false;
	cout << isCodingFun;  // Outputs 1 (true)
	cout << isFishTasty;  // Outputs 0 (false)

return 0;}

#include <iostream>
using namespace std;
int main(){ 
int x = 10;
int y = 9;
cout << (x > y); // returns 1 (true), because 10 is higher than 9
return 0;}

#include <iostream>
using namespace std;
int main(){ 
cout << (10 > 9); // returns 1 (true), because 10 is higher than 9
return 0;}

#include <iostream>
using namespace std;
int main(){ 
int x = 10;
cout << (x == 10);  // returns 1 (true), because the value of x is equal to 10
return 0;}


#include <iostream>
using namespace std;
int main(){ 
cout << (10 == 15);  // returns 0 (false), because 10 is not equal to 15
return 0;}

*/

/*  _____________________  C++ If ... Else 




#include <iostream>
using namespace std;
int main(){ 
	if (20 > 18) {
  cout << "20 is greater than 18";
}
return 0;}

#include <iostream>
using namespace std;
int main(){ 
	int x = 20;
int y = 18;
if (x > y) {
  cout << "x is greater than y";
}
return 0;}

#include <iostream>
using namespace std;
int main(){ 
	int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
// Outputs "Good evening."
return 0;}

#include <iostream>
using namespace std;
int main(){ 
	int time = 22;
if (time < 10) {
  cout << "Good morning.";
} else if (time < 20) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
return 0;}

#include <iostream>
using namespace std;
int main(){ 
	int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
return 0;}

#include <iostream>
using namespace std;
int main(){ 
	int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;
return 0;}

*/

/*  _____________________  C++ Switch 




#include <iostream>
using namespace std;
int main(){ 
	
return 0;}


#include <iostream>
using namespace std;
int main(){ 
	int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
return 0;}


#include <iostream>
using namespace std;
int main(){ 
	int day = 4;
switch (day) {
  case 6:
    cout << "Today is Saturday";
    break;
  case 7:
    cout << "Today is Sunday";
    break;
  default:
    cout << "Looking forward to the Weekend";
}
return 0;}

*/

/*  _____________________  C++ While Loop  




#include <iostream>
using namespace std;
int main(){ 
	int i = 0;
while (i < 5) {
  cout << i << "\n";
  i++;
}

return 0;}


#include <iostream>
using namespace std;
int main(){ 
	int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 5);
return 0;}

*/


/*  _____________________  C++ For Loop




#include <iostream>
using namespace std;
int main(){ 
for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}
return 0;}

#include <iostream>
using namespace std;
int main(){ 
for (int i = 0; i <= 10; i = i + 2) {
  cout << i << "\n";
}
return 0;}

*/


/* C++ For Loops 

1.Write a program in C++ to find the first 10 natural numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



2.Write a program in C++ to find the sum of first 10 natural numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



3.Write a program in C++ to display n terms of natural number and their sum.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



4.Write a program in C++ to find the perfect numbers between 1 and 500.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



5.Write a program in C++ to check whether a number is prime or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



6.Write a program in C++ to find prime number within a range.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



7.Write a program in C++ to find the factorial of a number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



8.Write a program in C++ to find the last prime number occur before the entered number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



9.Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



10.Write a program in C++ to find the sum of digits of a given number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



11.Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



12.Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



13.Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



14.Write a program in C++ to find the sum of series 1 - X^2/2! + X^4/4!-.... upto nth term.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



15.Write a program in C++ to asked user to input positive integers to process count, maximum, minimum, and average or terminate the process with -1.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



16.Write a program in C++ to list non-prime numbers from 1 to an upperbound.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



17.Write a program in C++ to print a square pattern with # character.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



18.Write a program in C++ to display the cube of the number upto given an integer.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



19.Write a program in C++ to display the multiplication table vertically from 1 to n.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



20.Write a program in C++ to display the n terms of odd natural number and their sum.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



21.Write a program in C++ to display the n terms of even natural number and their sum.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



22.Write a program in C++ to display the n terms of harmonic series and their sum.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



23.Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



24.Write a program in C++ to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



25.Write a program in C++ to find the sum of the series [ x - x^3 + x^5 + ......].
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



26.Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



27.Write a program in C++ to display the first n terms of Fibonacci series.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



28.Write a program in C++ to find the number and sum of all integer between 100 and 200 which are divisible by 9.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



29.Write a program in C++ to find LCM of any two numbers using HCF.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



30.Write a program in C++ to display the number in reverse order.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



31.Write a program in C++ to find out the sum of an A.P. series.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



32.Write a program in C++ to find the Sum of GP series.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



33.Write a program in C++ to Check Whether a Number can be Express as Sum of Two Prime Numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



34.Write a program in C++ to find the length of a string without using the library function.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



35.Write a program in C++ to display the pattern like right angle triangle using an asterisk.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



36.Write a program in C++ to display the pattern like right angle triangle with number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



37.Write a program in C++ to make such a pattern like right angle triangle using number which will repeat the number for that row.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



38.Write a program in C++ to make such a pattern like right angle triangle with number increased by 1.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



39.Write a program in C++ to make such a pattern like a pyramid with numbers increased by 1.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



40.Write a program in C++ to make such a pattern like a pyramid with an asterisk.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



41.Write a program in C++ to make such a pattern like a pyramid using number and a number will repeat for a row.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



42.Write a program in C++ to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



43.Write a program in C++ to print the Floyd's Triangle.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



44.Write a program in C++ to display the pattern like a diamond.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



45.Write a program in C++ to display Pascal's triangle like pyramid.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



46.Write a program in C++ to display Pascal's triangle like right angle traingle.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



47.Write a program in C++ to display such a pattern for n number of rows using number. Each row will contain odd numbers of number. The first and last number of each row will be 1 and middle column will be the row number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



48.Write a program in C++ to display the pattern like pyramid using the alphabet.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



49.Write a program in C++ to print a pyramid of digits as shown below for n number of lines.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



50.Write a program in C++ to print a pattern like highest numbers of columns appear in first row.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



51.Write a program in C++ to display the pattern using digits with right justified and the highest columns appears in first row.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



52.Write a program in C++ to display the pattern using digits with left justified and the highest columns appears in first row in descending order.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



53.Write a program in C++ to display the pattern like right angle triangle with right justified using digits.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



54.Write a program in C++ to display the pattern power of 2, triangle.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



55.Write a program in C++ to display such a pattern for n number of rows using number. Each row will contain odd numbers of number. The first and last number of each row will be 1 and middle column will be the row number. n numbers of columns will appear in 1st row.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



56.Write a program in C++ to find the first and last digit of a number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



57.Write a program in C++ to find the sum of first and last digit of a number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



58.Write a program in C++ to calculate product of digits of any number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



59.Write a program in C++ to find the frequency of each digit in a given integer.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



60.Write a program in C++ to input any number and print it in words.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



61.Write a program in C++ to print all ASCII character with their values.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



62.Write a program in C++ to find power of any number using for loop.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



63.Write a program in C++ to enter any number and print all factors of the number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



64.Write a program in C++ to find one's complement of a binary number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



65.Write a program in C++ to find two's complement of a binary number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



66.Write code to create a checkerboard pattern with the words "black" and "white".
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



67.Write a program in C++ to calculate the sum of the series 1?2+2?3+3?4+4.5+5.6+.......
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



68.Write a program that will print the first N numbers for a specific base.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



69.Write a program in C++ to produce a square matrix with 0's down the main diagonal, 1's in the entries just above and below the main diagonal, 2's above and below that, etc.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



70.Write a program in C++ to convert a decimal number to binary number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



71.Write a program in C++ to convert a decimal number to hexadecimal number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



72.Write a program in C++ to convert a decimal number to octal number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



73.Write a program in C++ to convert a binary number to decimal number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



74.Write a program in C++ to convert a binary number to hexadecimal number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



75.Write a program in C++ to convert a binary number to octal number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



76.Write a program in C++ to convert a octal number to decimal number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



77.Write a program in C++ to convert a octal number to binary number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



78.Write a program in C++ to convert a octal number to a hexadecimal number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



79.Write a program in C++ to convert a hexadecimal number to decimal number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



80.Write a program in C++ to convert hexadecimal number to binary number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



81.Write a program in C++ to convert a hexadecimal number to octal number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



82.Write a program in C++ to compare two numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



83.Write a program in C++ to compute the sum of the digits of an integer.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



84.Write a program in C++ to compute the sum of the digits of an integer using function.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



85.Write a program in C++ to reverse a string.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



86.Write a program in C++ to count the letters, spaces, numbers and other characters of an input string.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



87.Write a program in C++ to create and display unique three-digit number using 1, 2, 3, 4. Also count how many three-digit numbers are there.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-1.html



*/


/*  _____________________  C++ Break and Continue 




#include <iostream>
using namespace std;
int main(){ 
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  cout << i << "\n";
}
return 0;}

#include <iostream>
using namespace std;
int main(){ 
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
}


#include <iostream>
using namespace std;
int main(){ 
int i = 0;
while (i < 10) {
  cout << i << "\n";
  i++;
  if (i == 4) {
    break;
  }
}
return 0;}


#include <iostream>
using namespace std;
int main(){ 
int i = 0;
while (i < 10) {
  if (i == 4) {
    i++;
    continue;
  }
  cout << i << "\n";
  i++;
}
return 0;}



*/


/*  _____________________  C++ Arrays 




// #include <iostream>
// using namespace std;
// int main(){ 




string cars[4];

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};


int myNum[3] = {10, 20, 30};
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0];

cars[0] = "Opel";

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel";
cout << cars[0];


string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
for(int i = 0; i < 4; i++) {
  cout << cars[i] << "\n";
}


string cars[] = {"Volvo", "BMW", "Ford"}; // size of array is always 3


string cars[] = {"Volvo", "BMW", "Ford"};
string cars[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};


string cars[5] = {"Volvo", "BMW", "Ford"}; // size of array is 5, even though it's only three elements inside it


string cars[3] = {"Mazda"};
string cars[4] = {"Tesla"};


string cars[5];
cars[0] = {"Volvo"};
cars[1] = {"BMW"};





// return 0;}


*/


/* C++ Array
1. Write a C++ program to find the largest element of a given array of integers.
2. Write a C++ program to find the largest three elements in an array.
3. Write a C++ program to find the second largest element in an array of integers.
4. Write a C++ program to find the k largest elements in a given array of integers.
5. Write a C++ program to find the second smallest elements in a given array of integers.
6. Write a C++ program to find all elements in an array of integers that have at least two significant elements.
7. Write a C++ program to find the most frequent element in an array of integers.
8. Write a C++ program to find the next more powerful element of every element of a given array of integers. Ignore those elements that have no greater element.
9. Write a C++ program to sort a given unsorted array of integers, in wave form.
10. Write a C++ program to find the smallest element missing from a sorted array.
11. Write a C++ program to update every array element by multiplication of the next and previous values of a given array of integers.
12. Write a C++ program to rearrange the elements of a given array of integers in a zig-zag pattern.
13. Write a C++ program to separate even and odd numbers in an array of integers. Put all even numbers first, and then odd numbers.
14. Write a C++ program to separate 0s and 1s from a given array of values 0 and 1.
15. Write a C++ program to rearrange a given sorted array of positive integers .
16. Write a C++ program to sort a given array of 0s, 1s and 2s. In the final array put all 0s first, then all 1s and all 2s last.
17. Write a C++ program to sort (in descending order) an array of distinct elements according to the absolute difference of array elements and with a given value.
18. Write a C++ program to move all negative elements of an array of integers to the end of the array. This is done without changing the order of the positive and negative elements of the array.
19. Write a C++ program to find a number that occurs an odd number of times in a given array of positive integers. In the array, all numbers occur an even number of times.
20. Write a C++ program to count the number of occurrences of a given number in a sorted array of integers.
21. Write a C++ program to find the two repeating elements in a given array of integers.
22. Write a C++ program to find the missing element from two given arrays of integers except one element.
23. Write a C++ program to find the element that appears once in an array of integers and every other element appears twice.
24. Write a C++ program to find the first repeating element in an array of integers.
25. Write a C++ program to find and print all common elements in three sorted arrays of integers.
26. Write a C++ program to find and print all distinct elements of a given array of integers.
27. Write a C++ program to find the number of pairs of integers in a given array of integers whose sum is equal to a specified number.
28. Write a C++ program to arrange the numbers in a given array in a way that the sum of some numbers equals the largest number in the array.
29. Write a C++ program to find the second lowest and highest numbers in a given array.
30. Write a C++ program to find the third largest string in a given array of strings.


*/


/* C++ Vector
1. Write a C++ program to check whether numbers in a vector can be rearranged so that each number appears exactly once in a consecutive list of numbers. Return true otherwise false.

2. Write a C++ program that returns the elements in a vector that are strictly smaller than their adjacent left and right neighbours.



3. Write a C++ program to create an n x n matrix by taking an integer (n) as input from the user.


4. Write a C++ program to capitalize the first character of each element of a given string vector. Return the vector.
5. Write a C++ program to verify that all of the letters in the second string appear in the first string as well. Return true otherwise false.
6. Write a C++ program that takes a vector of strings and returns only those strings that contain a number(s). Return an empty vector if none.

*/


/*  _____________________  C++ References 




// #include <iostream>
// using namespace std;
// int main(){ 


string food = "Pizza";  // food variable
string &meal = food;    // reference to food

string food = "Pizza";
string &meal = food;

cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza


string food = "Pizza";

cout << &food; // Outputs 0x6dfed4





// return 0;}


*/

/*  _____________________  C++ Pointers 




// #include <iostream>
// using namespace std;
// int main(){ 



string food = "Pizza"; // A food variable of type string

cout << food;  // Outputs the value of food (Pizza)
cout << &food; // Outputs the memory address of food (0x6dfed4)





string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";


string* mystring; // Preferred
string *mystring;
string * mystring;


string food = "Pizza";  // Variable declaration
string* ptr = &food;    // Pointer declaration

// Reference: Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
cout << *ptr << "\n";




string food = "Pizza";
string* ptr = &food;

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Access the memory address of food and output its value (Pizza)
cout << *ptr << "\n";

// Change the value of the pointer
*ptr = "Hamburger";

// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";

// Output the new value of the food variable (Hamburger)
cout << food << "\n";
// return 0;}


*/


/*  _____________________  C++ Dereference 




#include <iostream>
#include <string>
using namespace std;

int main(){ 


	string food = "Pizza";  // Variable declaration
	string* ptr = &food;    // Pointer declaration

	// Reference: Output the memory address of food with the pointer (0x6dfed4)
	cout << ptr << "\n";

	// Dereference: Output the value of food with the pointer (Pizza)
	cout << *ptr << "\n";



return 0;}

// */


/*  _____________________  C++ Modify Pointers 





#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string* ptr = &food;

  // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Access the memory address of food and output its value
  cout << *ptr << "\n";
  
  // Change the value of the pointer
  *ptr = "Hamburger";
  
  // Output the new value of the pointer
  cout << *ptr << "\n";
  
  // Output the new value of the food variable
  cout << food << "\n";
  return 0;
}



// */



/*  _____________________  C++ Functions 




#include <iostream>
using namespace std;

void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction();
  return 0;
}

#include <iostream>
using namespace std;

void myFunction() {
  cout << "I just got executed!\n";
}

int main() {
  myFunction();
  myFunction();
  myFunction();
  return 0;
}


#include <iostream>
using namespace std;

int main() {
  myFunction();
  return 0;
}

void myFunction() {
  cout << "I just got executed!";
}

#include <iostream>
using namespace std;

// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}




// */


/*  _____________________  C++ Functions Parameters





#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}



// */

/*  _____________________  C++ Default Parameters




#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}



// */



/*  _____________________  C++ Multiple Parameters




#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}


// */


/*  _____________________  C++ The Return Keyword




#include <iostream>
using namespace std;

int myFunction(int x) {
  return 5 + x;
}

int main() {
  cout << myFunction(3);
  return 0;
}
#include <iostream>
using namespace std;

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  cout << myFunction(5, 3);
  return 0;
}
#include <iostream>
using namespace std;

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(5, 3);
  cout << z;
  return 0;
}

// */


/* _____________________  C++ Functions - Pass By Reference




#include <iostream>
using namespace std;

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(5, 3);
  cout << z;
  return 0;
}

// */                                 


/* _____________________  C++ Pass Array to a Function     




#include <iostream>  
using namespace std;  

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {  
    cout << myNumbers[i] << "\n";    
  } 
}

int main() {  
  int myNumbers[5] = {10, 20, 30, 40, 50};  
  myFunction(myNumbers);
  return 0;
}  

// */                                 

       
/* _____________________  C++ Function Overloading  



      
#include <iostream>
using namespace std;

int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}

// */                                 


/* _____________________  C++ Recursion                   




#include <iostream>
using namespace std;

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result;
  return 0;
}

// */                                 


/* C++ Recursion
1. Write a C++ program to find the sum of all elements in an array using recursion.
2. Write a C++ program to calculate the factorial of a given number using recursion.
3. Write a C++ program to implement a recursive function to get the nth Fibonacci number.
4. Write a C++ program to implement a recursive function to calculate the sum of digits of a given number.
5. Write a C++ program to implement a recursive function to find the maximum and minimum elements in an array.
6. Write a C++ program to reverse a string using recursion.
7. Write a C++ program to implement a recursive function to calculate the power of a number.
8. Write a C++ program to implement a recursive function to check if a given string is a palindrome.
9. Write a C++ program to implement a recursive function to reverse a linked list.
10. Write a C++ program to implement a recursive function to find the greatest common divisor (GCD) of two numbers.
11. Write a C++ program to implement a recursive function to count the number of occurrences of a specific element in an array of integers.
12. Write a C++ program to implement a recursive function to generate all permutations of a given string.
13. Write a C++ program to implement a recursive function to calculate the product of two numbers without using the multiplication operator.
14. Write a C++ program to implement a recursive function to calculate the sum of even and odd numbers in a given range.
15. Write a C++ program to implement a recursive function to check if a given binary tree is a binary search tree.
16. Write a C++ program to implement a recursive function to find the sum of all prime numbers in a given range.


*/


/* C++ Dynamic Memory Allocation
1. Write a C++ program to dynamically allocate an integer, a character and a string and assign a value to them.
2. Write a C++ program to dynamically allocate an array of integers and strings and initialize its elements.
3. Write a C++ program to dynamically allocate two two-dimensional arrays of floating values and strings. Initialize its elements.
4. Write a C++ program to dynamically allocate memory for a character and a string. Input a character and a string from the user.
5. Write a C++ program to dynamically create an object of a class using the new operator.
6. Write a C++ program to dynamically create an array of objects using the new operator.
7. Write a C++ program to dynamically allocate memory for a structure and input its members from the user.
8. Write a C++ program to dynamically allocate memory for a linked list and perform basic operations like insert and delete node(s).
9. Write a C++ program to dynamically allocate memory for a stack data structure. Implement push and pop operations on this stack.
10. Write a C++ program to dynamically allocate memory for a queue data structure. Implement enqueue and dequeue operations on this queue.

*/


/*  _____________________  C++ Classes and Objects        




#include <iostream>
#include <string>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15;
  myObj.myString = "Some text";

  // Print values
  cout << myObj.myNum << "\n"; 
  cout << myObj.myString; 
  return 0;
}

// */                                 


/* C++ Object Oreinted Programming
1. Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
2. Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.
3. Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
4. Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.
5. Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
6. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
7. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance.
8. Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.
9. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information.
10. Write a C++ program to implement a class called Shape with virtual member functions for calculating area and perimeter. Derive classes such as Circle, Rectangle, and Triangle from the Shape class and override virtual functions accordingly.

*/


/*  _____________________  C++ Class Methods 





#include <iostream>
using namespace std;

class MyClass {         // The class
  public:               // Access specifier
    void myMethod() {   // Method/function
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}

// */


/* _______________________ C++ Constructors 





#include <iostream>
using namespace std;

class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}


#include <iostream>
using namespace std;

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) {  // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}

#include <iostream>
using namespace std;

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}

// */

/*  _____________________  C++ Access Specifiers 





#include <iostream>
using namespace std;

class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (x is public)
  myObj.y = 50;  // Not allowed (y is private)
  return 0;
}

// */

/*  _____________________  C++ Encapsulation 




#include <iostream>
using namespace std;

class Employee {
  private:
    int salary;

  public:
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}


// */

/*  _____________________  C++ Inheritance 




#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
  public: 
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public: 
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}



// */

/*  _____________________  C++ Polymorphism 




#include <iostream>
using namespace std;

// Parent class
class MyClass {
  public: 
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Child class
class MyChild: public MyClass {
};

// Grandchild class 
class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}


// */

/*  _____________________  C++ Files 




#include <iostream>
using namespace std;

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class.\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class.\n" ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}

// */


/* C++ File Handling
1. Write a C++ program to create a new text file and write some text into it.
2. Write a C++ program to open an existing text file and display its contents on the console.
3. Write a C++ program to count the number of lines in a text file.
4. Write a C++ program to count the number of words in a text file.
5. Write a C++ program to copy the contents of one text file to another.
6. Write a C++ program to find and replace a specific word in a text file.
7. Write a C++ program to append new data to an existing text file.
8. Write a C++ program to sort the lines of a text file in alphabetical order.
9. Write a C++ program to merge multiple text files into a single file.
10. Write a C++ program to split a large text file into smaller files of equal size.
11. Write a C++ program to search for a specific string in a text file and display its line number(s).
12. Write a C++ program to encrypt the contents of a text file using a simple encryption algorithm.
13. Write a C++ program to decrypt the contents of a text file encrypted using the above algorithm.
14. Write a C++ program to read a CSV file and display its contents in tabular form.
15. Write a C++ program to calculate the average of numbers stored in a file.

*/


/*  _____________________  C++ Exceptions 



#include <iostream>
using namespace std;

// Base class
class Employee  {
  protected:  // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}


// */


/* C++ Linked List
1. Write a C++ program to create and display a Singly Linked List.

2. Write a C++ program to create a singly linked list of n nodes and display it in reverse order.


3. Write a C++ program to create a singly linked list of n nodes and count the number of nodes.


4. Write a C++ program to insert a new node at the beginning of a Singly Linked List.


5. Write a C++ program to insert a new node at the end of a Singly Linked List.


6. Write a C++ program to find the middle element of a given Linked List.




7. Write a C++ program to insert a new node at the middle of a given Singly Linked List.




8. Write a C++ program to get Nth node in a given Singly Linked List.

9. Write a C++ program to insert a new node at any position of a Singly Linked List.




10. Write a C++ program to delete first node of a given Singly Linked List.


11. Write a C++ program to delete a node from the middle of Singly Linked List.





12. Write a C++ program to delete the last node of a Singly Linked List.



13. Write a C++ program to delete the nth node of a Singly Linked List from the end.



14. Write a C++ program to find the kth node of a linked list by starting at the middle and moving towards the head.

15. Write a C++ program to create and display a doubly linked list.
16. Write a C++ program to create a doubly linked list of n nodes and display it in reverse order.
17. Write a program in C++ to create a doubly linked list of n nodes and count the number of nodes.
18. Write a C++ program to insert a new node at the beginning of a Doubly Linked List.
19. Write a C++ program to insert a new node at the end of a Doubly Linked List.
20. Write a C++ program to find the middle element of a given Doubly Linked List.
21. Write a C++ program to insert a new node at the middle of a given Doubly Linked List.

*/


/* C++ Stack
1. Write a C++ program to implement a stack using an array with push and pop operations. Find the top element of the stack and check if the stack is empty or not.

2. Write a C++ program to implement a stack using an array with push and pop operations. Check if the stack is full.
3. Write a C++ program to sort a given stack (using an array) using another stack.
4. Write a C++ program that reverses the stack (using an array) elements.
5. Write a C++ program to calculate the average value of the stack (using an array) elements.
6. Write a C++ program to find the maximum element in a stack (using an array).
7. Write a C++ program to find the minimum element in a stack (using an array).
8. Write a C++ program to find the middle element of a stack (using an array).
9. Write a C++ program to delete the middle element of a stack (using an array).
10. Write a C++ program to find and remove the largest element in a stack.
11. Write a C++ program to find and remove the lowest element in a stack.
12. Write a C++ program to remove duplicates from a stack using arrays.
13. Write a C++ program to delete all occurrences of an item in a stack using arrays.
14. Write a C++ program to get the Kth element of a stack from top position.




15. Write a C++ program to replace the kth element with new value in a stack (using an array).
16. Write a C++ program to implement a stack using a linked list with push, pop operations.
17. Write a C++ program to check a stack's size and whether it is empty or not. The stack is implemented using a linked list.
18. Write a C++ program to reverse the elements of a stack (using a linked list).
19. Write a C++ program to sort the elements of a stack (using a linked list).
20. Write a C++ program to implement a stack using a dynamic array with push and pop operations. Find the top element of the stack and check if the stack is empty or not.
21. Write a C++ program that sorts the stack (using a dynamic array) elements.
22. Write a C++ program that reverses the stack (using a dynamic array) elements.
23. Write a C++ program to find the middle element of a stack (using a dynamic array).
24. Write a C++ program to implement a stack using a vector with push and pop operations. Check if the stack is empty or not and find the top element of the stack.
25. Write a C++ program that sorts the stack (using a vector) elements.
26. Write a C++ program that reverses the stack (using a vector) elements.
27. Write a C++ program to find the middle element(s) of a stack (using a vector).


28. Write a C++ program to implement a stack using a Deque with push and pop operations. Check if the stack is empty or not and find the top element of the stack.
29. Write a C++ program that sorts the stack (using a Deque) elements.
30. Write a C++ program that reverse the stack (using a Deque) elements.

*/


/* C++ Queue
1. Write a C++ program to implement a queue using an array with enqueue and dequeue operations. Find the top element of the stack and check if the stack is empty, full or not.
2. Write a C++ program to reverse the elements of a queue.
3. Write a C++ program to sort the elements of a queue.
4. Write a C++ program to find the sum of all elements of a queue.
5. Write a C++ program to find the average of all elements of a queue.
6. Write a C++ program to find the median of all elements of a queue.
7. Write a C++ program to find the mode of all elements of a queue.
8. Write a C++ program to find the mean, variance and standard deviation of all elements of a queue.
9. Write a C++ program to find the maximum element of a queue.
10. Write a C++ program to find the minimum element of a queue.
11. Write a C++ program to find the second highest element of a queue.
12. Write a C++ program to find the second lowest element of a queue.
13. Write a C++ program to remove a given element from a queue.
14. Write a C++ program to remove all the elements from a queue.
15. Write a C++ program to remove all even elements from a queue.
16. Write a C++ program to remove all odd elements from a queue.
17. Write a C++ program to remove all duplicate elements from a queue.
18. Write a C++ program to remove all elements greater than a number from a queue.
19. Write a C++ program to concatenate two queues.
20. Write a C++ program to copy one queue to another.
21. Write a C++ program to find the top and bottom elements of a queue.
22. Write a C++ program to get the Nth element from the bottom of a queue.
23. Write a C++ program to get the Nth element from the top of a queue.
24. Write a C++ program to find the position of an element in a queue.
25. Write a C++ program to check if two queues are equal.
26. Write a C++ program to find the intersection of two queues.
27. Write a C++ program to find the union of two queues.

*/


/* C++ Sorting Searching 

1.Write a C++ program to sort the values of three variables which contain any value (numbers and/or literals).
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/sorting-and-searching/cpp-sorting-and-searching-exercise-1.html



2.Write a C++ program to sort an array of positive integers using the Bead sort algorithm.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/sorting-and-searching/cpp-sorting-and-searching-exercise-1.html



3.Write a C++ program to sort a list of numbers using Bogosort algorithm.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/sorting-and-searching/cpp-sorting-and-searching-exercise-1.html



4.Write a C++ program to sort an array of elements using the Bubble sort algorithm.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/sorting-and-searching/cpp-sorting-and-searching-exercise-1.html



5.Write a C++ program to sort an array of elements using the Cocktail sort algorithm.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/sorting-and-searching/cpp-sorting-and-searching-exercise-1.html



6.Write a C++ program to sort an array of elements using the Counting sort algorithm.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/sorting-and-searching/cpp-sorting-and-searching-exercise-1.html



7.Write a C++ program to sort an array of elements using the Gnome sort algorithm.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/sorting-and-searching/cpp-sorting-and-searching-exercise-1.html



8.Write a C++ program to sort an array of elements using the Heapsort sort algorithm.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/sorting-and-searching/cpp-sorting-and-searching-exercise-1.html



9.Write a C++ program to sort an array of elements using the Insertion sort algorithm.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/sorting-and-searching/cpp-sorting-and-searching-exercise-1.html



10.Write a C++ program to sort a collection of integers using the Merge sort.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/sorting-and-searching/cpp-sorting-and-searching-exercise-1.html



11.Write a program in C++ to print the result of the specified operations.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/sorting-and-searching/cpp-sorting-and-searching-exercise-1.html



12.Write a C++ program to sort a collection of integers using the Quick sort.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/sorting-and-searching/cpp-sorting-and-searching-exercise-1.html



13.Write a C++ program to sort a collection of integers using the Radix sort.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/sorting-and-searching/cpp-sorting-and-searching-exercise-1.html



14.Write a C++ program to sort a collection of integers using the Selection sort.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/sorting-and-searching/cpp-sorting-and-searching-exercise-14.html




*/


/* C++ Sorting Searching 

1. Write a C++ program to sort the values of three variables which contain any value (numbers and/or literals).
2. Write a C++ program to sort an array of positive integers using the Bead sort algorithm.
3. Write a C++ program to sort a list of numbers using the Bogosort algorithm.
4. Write a C++ program to sort an array of elements using the Bubble sort algorithm.
5. Write a C++ program to sort an array of elements using the Cocktail sort algorithm.
6. Write a C++ program to sort an array of elements using the Counting sort algorithm.
7. Write a C++ program to sort an array of elements using the Gnome sort algorithm.
8. Write a C++ program to sort an array of elements using the Heapsort sort algorithm.
9. Write a C++ program to sort an array of elements using the Insertion sort algorithm.
10. Write a C++ program to sort a collection of integers using the Merge sort.
11. Write a C++ program to sort a collection of integers using Pancake sort.
12. Write a C++ program to sort a collection of integers using Quick sort.
13. Write a C++ program to sort a collection of integers using Radix sort.
14. Write a C++ program to sort a collection of integers using Selection sort.
1. Write a C++ program to sort the values of three variables which contain any value (numbers and/or literals).
2. Write a C++ program to sort an array of positive integers using the Bead sort algorithm.
3. Write a C++ program to sort a list of numbers using the Bogosort algorithm.
4. Write a C++ program to sort an array of elements using the Bubble sort algorithm.
5. Write a C++ program to sort an array of elements using the Cocktail sort algorithm.
6. Write a C++ program to sort an array of elements using the Counting sort algorithm.
7. Write a C++ program to sort an array of elements using the Gnome sort algorithm.
8. Write a C++ program to sort an array of elements using the Heapsort sort algorithm.
9. Write a C++ program to sort an array of elements using the Insertion sort algorithm.
10. Write a C++ program to sort a collection of integers using the Merge sort.
11. Write a C++ program to sort a collection of integers using Pancake sort.
12. Write a C++ program to sort a collection of integers using Quick sort.
13. Write a C++ program to sort a collection of integers using Radix sort.
14. Write a C++ program to sort a collection of integers using Selection sort.
*/


// new online solutions added w3resource.. 
// https://www.w3resource.com/cpp-exercises/basic-algorithm/index.php
