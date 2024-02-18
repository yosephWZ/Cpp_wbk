//@#$!@#$@!#$Progress### << ///Jan_2023..??>> @ @#$@%#!@%!Saving??@!#$@!#$@!#$!@#$@!#$
//!!!!! don't stay at one part for more than 1 weekds...!!!!
//!!!!! proceed as you go through by commenting .. for furhter refirinement..
//..//...//..//...//..//..//..//...//
//..//..Code explanation.//..use...//.ChatGPT.//..//..//...//
//..//...//..//...//..//..//..//...//


/*_______________________ Sololearn Codecoach Challenges__________________ */

    // exit(0); // 0 indicates successful termination


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

// new online solutions added w3resource.. 
// https://www.w3resource.com/cpp-exercises/basic-algorithm/index.php


/* C++ Basics 

1.Write a program in C++ to print a welcome text in a separate line.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




2.Write a program in C++ to print the sum of two numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




3.Write a program in C++ to find Size of fundamental data types.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




4.Write a program in C++ to print the sum of two numbers using variables.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




5.Write a program in C++ to check the upper and lower limits of integer.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




6.Write a program in C++ to check whether the primitive values crossing the limits or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




7.Write a program in C++ to display various type or arithmetic operation using mixed data type.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




8.Write a program in C++ to check overflow/underflow during various arithmetical operation.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




9.Write a program in C++ to display the operation of pre and post increment and decrement.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




10.Write a program in C++ to formatting the output
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




11.Write a program in C++ to print the result of the specified operations.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




12.Write a program in C++ to add two numbers accept through keyboard.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




13.Write a program in C++ to swap two numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




14.Write a program in C++ to calculate the volume of a sphere.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




15.Write a program in C++ to calculate the volume of a cube.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




16.Write a program in C++ to calculate the volume of a cylinder.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




17.Write a program in C++ to find the Area and Perimeter of a Rectangle.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




18.Write a program in C++ to find the area of any triangle using Heron's Formula.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




19.Write a program in C++ to find the area and circumference of a circle.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




20.Write a program in C++ to convert temperature in Celsius to Fahrenheit.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




21.Write a program in C++ to convert temperature in Fahrenheit to Celsius.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




22.Write a program in C++ to find the third angle of a triangle.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




23.Write a program in C++ that converts kilometers per hour to miles per hour.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




24.Write a program in C++ to convert temperature in Kelvin to Fahrenheit.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




25.Write a program in C++ to convert temperature in Kelvin to Celsius.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




26.Write a program in C++ to convert temperature in Fahrenheit to Kelvin.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




27.Write a program in C++ to convert temperature in Celsius to Kelvin.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




28.Write a program in C++ to find the area of Scalene Triangle.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




29.Write a program in C++ to compute quotient and remainder.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




30.Write a program in C++ to compute the total and average of four numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




31.Write a program in C++ to input a single digit number and print a rectangular form of 4 columns and 6 rows.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




32.Write a program in C++ to check whether a number is positive, negative or zero.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




33.Write a program in C++ to divide two numbers and print on the screen.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




34.Write a C++ program to display the current date and time.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




35.Write a program in C++ to compute the specified expressions and print the output.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




36.Write a program in C++ to test the Type Casting.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




37.Write a program in C++ to print a mystery series from 1 to 50.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




38.Write a program in C++ that takes a number as input and prints its multiplication table upto 10.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




39.Write a program in C++ to print the following pattern.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




40.Write a program in C++ to print the area and perimeter of a rectangle.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-40.html



41.Write a program in C++ to print an American flag on the screen.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




42.Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-42.html




43.Write a language program which accepts the radius of a circle from the user and compute the area and circumference.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




44.Write a language program to get the volume of a sphere with radius 6.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




45.Write a program in C++ to calculate the volume of a cube.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




46.Write a program in C++ to calculate the volume of a cylinder.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




47.Write a program in C++ to find the area of any triangle using Heron's Formula.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




48.Write a program in C++ which swap the values of two variables not using third variable.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




49.Write a program in C++ to print the code (ASCII code / Unicode code etc.) of a given character.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




50.Write a program in C++ to enter length in centimeter and convert it into meter and kilometer.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




51.Write a program in C++ that converts kilometers per hour to miles per hour.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




52.Write a program in C++ to enter two angles of a triangle and find the third angle.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




53.Write a program in C++ to calculate area of an equilateral triangle.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




54.Write a program in C++ to enter P, T, R and calculate Simple Interest.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




55.Write a program in C++ to enter P, T, R and calculate Compound Interest.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




56.Write a program in C++ to show the manipulation of a string.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




57.Write a program in C++ to print the area of a hexagon.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




58.Write a program in C++ to print the area of a polygon.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




59.Write a program in C++ to compute the distance between two points on the surface of earth.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




60.Write a program in C++ to add two binary numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




61.Write a C++ program to swap first and last digits of any number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




62.Write a C++ program to which reads an given integer n and prints a twin prime which has the maximum size among twin primes less than or equals to n.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




63.Write a C++ program which prints three highest numbers from a list of numbers in descending order.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




64.Write a C++ program to compute the sum of the two given integers and count the number of digits of the sum value.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




65.Write a C++ program to check whether given length of three side form a right triangle.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




66.Write a C++ program to reverse a given string. The size of the string should be less or equal to 25.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




67.Write a C++ program to which prints the central coordinate and the radius of a circumscribed circle of a triangle which is created by three points on the plane surface.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




68.Write a C++ program to read seven numbers and sorts them in descending order.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




69.Write a C++ program to read an integer n and prints the factorial of n, assume that n = 10.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




70.Write a C++ program to replace all the lower-case letters of a given string with the corresponding capital letters
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




71.Write a C++ program which reads a sequence of integers and prints mode values of the sequence. The number of integers is greater than or equals to 1 and less than or equals to 100.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




72.Write a C++ program to which reads n digits chosen from 0 to 9 and counts the number of combinations where the sum of the digits equals to given number. Do not use the same digits in a combination.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




73.Write a C++ program that accepts sales unit price and sales quantity of various items and compute total sales amount and the average sales quantity. All input values must greater than or equal to 0 and less than or equal to 1,000, and the number of pairs of sales unit and sales quantity does not exceed 100. If a fraction occurs in the average of the sales quantity, round the first decimal place.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




74.Write a C++ program that accepts various numbers and compute the difference between the highest number and the lowest number. All input numbers should be real numbers between 0 and 1,000,000. The output (real number) may include an error of 0.01 or less.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




75.Write a C++ program to compute the sum of the specified number of Prime numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




76.An even number of 4 or more can be represented by the sum of two prime numbers. This is called Goldbach expectation, and it is confirmed that it is correct up to a considerably large number by computer calculation. For example, 10 can be expressed as the sum of two prime numbers 7 + 3, 5 + 5. Write a C++ program that accept an integer (n) from the user and outputs the number of combinations that express n as a sum of two prime numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




77.There are four different points on a plane: A(x1, y1), B(x2, y2), C(x3, y3) and D(x4, y4)
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




78.Write a C++ program to sum of all positive integers in a sentence.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




79.Write a C++ program to display all the leap years between two given years. If there is no leap year in the given period,display a suitable message.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




80.Write a C++ program that accepts n different numbers (0 to 100) and s which is equal to the sum of the n different numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




81.Write a C++ program to which replace all the words "dog" with "cat"
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




82.Write a C++ program which reads a list of pairs of a word and a page number, and prints the word and a list of the corresponding page numbers
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-41.html




*/


/* C++ Basic Algorithm: Exercises, Practice, Solution





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


/* C++ String


*/


/* C++ Date


*/


/* C++ Array 



1.Write a C++ program to find the largest element of a given array of integers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



2.Write a C++ program to find the largest three elements in an array.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



3.Write a C++ program to find second largest element in an given array of integers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



4.Write a C++ program to find k largest elements in a given array of integers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



5.Write a C++ program to find the smallest and second smallest elements in a given array of integers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



6.Write a C++ program to find all elements in array of integers which have at-least two greater elements.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



7.Write a C++ program to find the most occurring element in an array of integers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



8.Write a C++ program to find the next greater element of every element of a given array of integers. Ignore those elements which have no greater element.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



9.Write a C++ program to sort a given unsorted array of integers, in wave form.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



10.Write a C++ program to find the smallest element missing in a sorted array.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



11.Write a C++ program to update every array element by multiplication of next and previous values of a given array of integers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



12.Write a C++ program to rearrange the elements of a given array of integers in zig-zag fashion way.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



13.Write a C++ program to separate even and odd numbers of an array of integers. Put all even numbers first, and then odd numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



14.Write a C++ program to separate 0s and 1s from a given array of values 0 and 1.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



15.Write a C++ program to rearrange a given sorted array of positive integers .
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



16.Write a C++ program to sort a given array of 0s, 1s and 2s. In the final array put all 0s first, then all 1s and all 2s in last.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



17.Write a C++ program to sort (in descending order) an array of distinct elements according to absolute difference of array elements and with a given value.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



18.Write a C++ program to move all negative elements of an array of integers to the end of the array without changing the order of positive element and negative element.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



19.Write a C++ program to find a number which occurs odd number of times of a given array of positive integers. In the said array all numbers occur even number of times.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



20.Write a C++ program to count the number of occurrences of given number in a sorted array of integers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



21.Write a C++ program to find the two repeating elements in a given array of integers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



22.Write a C++ program to find the missing element from two given arrays of integers except one element.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



23.Write a C++ program to find the element that appears once in an array of integers and every other element appears twice.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



24.Write a C++ program to find the first repeating element in an array of integers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



25.Write a C++ program to find and print all common elements in three sorted arrays of integers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



26.Write a C++ program to find and print all unique elements of a given array of integers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html



27.Write a C++ program to find the number of pairs of integers in a given array of integers whose sum is equal to a specified number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.html


*/


/* C++ Vector

*/


/* C++ Dynamic Memory

*/


/* C++ Allocation

*/


/* C++ Recursion


*/


/* C++ Object Oreinted Programming

*/


/* C++ File Handling

*/


/* C++ Math

*/



/* C++ Linked List

*/


/* C++ Stack

*/


/* C++ Queue

*/

/* C++ Numbers 


1.Write a program in C++ to check whether a given number is an ugly number or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



2.Write a program in C++ to check whether a given number is Abundant or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



3.Write a program in C++ to find the Abundant numbers (integers) between 1 to 1000.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



4.Write a program in C++ to check whether a given number is Perfect or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



5.Write a program in C++ to find Perfect numbers and number of Perfect numbers between 1 to 1000.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



6.Write a program in C++ to check whether a given number is Deficient or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



7.Write a program in C++ to find the Deficient numbers (integers) between 1 to 100.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



8.Write a program in C++ to generate random integers in a specific range.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



9.Write a program in C++ to check whether a given number is a Kaprekar number or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



10.Write a program in C++ to generate and show all Kaprekar numbers less than 1000.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



11.Write a program in C++ to check whether a number is Lychrel number or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



12.Write a program in C++ to find the Lychrel numbers and the number of Lychrel number within the range 1 to 1000(after 500 iteration).
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



13.Write a program in C++ to generate and show the first 15 Narcissistic decimal numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



14.Write a program in C++ to display the first 10 Lucus numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



15.Write a program in C++ to display the first 10 Catlan numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



16.Write a program in C++ to check a number is a Happy or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



17.Write a program in C++ to find the Happy numbers between 1 to 1000.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



18.Write a program in C++ to check whether a number is Disarium or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



19.Write a program in C++ to find Disarium numbers between 1 to 1000.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



20.Write a program in C++ to check if a number is Harshad Number or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



21.Write a program in C++ to find Harshad Number between 1 to 100.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



22.Write a program in C++ to check whether a number is a Pronic Number or Heteromecic Number or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



23.Write a program in C++ to find Pronic Number between 1 to 1000.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



24.Write a program in C++ to check if a number is Authomorphic or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



25.Write a program in C++ to find the Authomorphic numbers between 1 to 1000.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



26.Write a program in C++ to check whether a number is a Duck Number or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



27.Write a program in C++ to find Duck Numbers between 1 to 500.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



28.Write a program in C++ to check two numbers are Amicable numbers or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



29.Write a program in C++ to count the amicable pairs in an array.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



30.Write a program in C++ to check if a given number is circular prime or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



31.Write a program in C++ to find circular prime numbers upto a specific limit.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



32.Write a program in C++ to check whether a given number is a perfect cube or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



33.Write a program in C++ to display first 10 Fermat numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



34.Write a program in C++ to find any number between 1 and n that can be expressed as the sum of two cubes in two (or more) different ways.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



35.Write a program in C++ to Check if a number is Mersenne number or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



36.Write a program in C++ to generate Mersenne primes within a range of numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



37.Write a program in C++ to find Narcissistic decimal numbers within a specific range.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



38.Write a program in C++ to check whether a given number is palindrome or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



39.Write a program in C++ to print the first 20 numbers of the Pell series.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



40.Write a program in C++ to check if a number is Keith or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



41.Write a program in C++ to check if a number is Keith or not(with explanation).
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



42.Write a program in C++ to create the first twenty Hamming numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



43.Write a C++ program to check whether a given number is an Armstrong number or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



44.rite a program in C++ to find the Armstrong number for a given range of number.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



45.Write a program in C++ to check whether a number is a Strong Number or not.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html



46.Write a program in C++ to find Strong Numbers within a range of numbers.
file:///D:/cNG/-/W3Resource%20Offline%20Dec%202019_2/W3Resource%20Offline%20Dec%202019/www.w3resource.com/cpp-exercises/numbers/cpp-numbers-exercise-1.html

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




