//@#$!@#$@!#$Progress### << ///Jan_2023..??>> @ @#$@%#!@%!Saving??@!#$@!#$@!#$!@#$@!#$
//!!!!! don't stay at one part for more than 1 weekds...!!!!
//!!!!! proceed as you go through by commenting .. for furhter refirinement..
//..//...//..//...//..//..//..//...//
//..//..Code explanation.//..use...//.ChatGPT.//..//..//...//
//..//...//..//...//..//..//..//...//


/*_______________________ Sololearn Codecoach Challenges__________________ */


/* _____________________  C++ Getting Started 

	#include <iostream>
	using namespace std;

	int main() {
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


