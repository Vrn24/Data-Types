# C++ Data Types

This repository contains examples and explanations of data types in C++. Understanding data types is fundamental to programming in C++, as they define the kind of data a variable can hold. This README provides an overview of commonly used data types in C++ and how to use them.

## Table of Contents
- [Data Types](#data-types)
  - [Built-in Data Types](#built-in-data-types)
  - [User-Defined Data Types](#user-defined-data-types)
- [Variable Declaration](#variable-declaration)
- [Sizeof Operator](#sizeof-operator)


## Data Types

### Built-in Data Types

C++ provides several built-in data types, including:

1. *int*: Represents integer values, e.g., `int myInt = 42;`.
2. *float*: Represents floating-point numbers, e.g., `float myFloat = 3.14;`.
3. *double*: Represents double-precision floating-point numbers, e.g., `double myDouble = 2.71828;`.
4. *char*: Represents single characters, e.g., `char myChar = 'A';`.
5. *bool*: Represents boolean values, which can be either `true` or `false`, e.g., `bool myBool = true;`.

### User-Defined Data Types

You can also define your own data types using structs, enums, and classes.

- *Structs*: Groups related variables under a single name. Example:
  cpp
  struct Point {
      int x;
      int y;
  };
  

- *Enums*: Define a set of named integral constants. Example:
  cpp
  enum Color {
      RED,
      GREEN,
      BLUE
  };
  

- *Classes*: Blueprint for creating objects. Example:
  cpp
  class Car {
  public:
      string make;
      string model;
      int year;
  };
  

## Variable Declaration

To declare a variable in C++, specify the data type followed by the variable name.

cpp
int age = 30;
float pi = 3.14159;
char grade = 'A';
bool isStudent = true;



## Sizeof Operator

You can determine the size (in bytes) of a data type using the `sizeof` operator:
cpp
int sizeOfInt = sizeof(int); // Returns the size of an int


### OUTPUT image: 
![image](https://github.com/Vrn24/Data-Types/assets/112547439/b6cd9ce5-a984-4c32-bbe8-a67240380cc1)


### Image color Output image:
![image](https://github.com/Vrn24/Data-Types/assets/112547439/4a7468d2-cc1a-40e3-92a1-99918ff7fb36)


# Number Comparision

## Table of Contents
- [Theory](#theory)
  - [Logical Operators](#logical-operators)
  - [Conditional Statements](#conditional-statements)
- [Algorithm](#alorithm)


## Theory:
Equality (==): Compares whether two values are equal.

Inequality (!=): Compares whether two values are not equal.

Greater Than (>): Compares whether one value is greater than another.

Less Than (<): Compares whether one value is less than another.

Greater Than or Equal To (>=): Compares whether one value is greater than or equal to another.

Less Than or Equal To (<=): Compares whether one value is less than or equal to another.

  ## Logical Operators:
  
  Logical operators, such as && (logical AND) and || (logical OR), can be used to combine multiple comparison operations in complex conditions. int age = 25; if (age >= 18 && age <= 60) { // Code to execute if age is between 18 and 60
  
  }
  
  ## Conditional Statements: 
  Conditional statements, like if, else if, and else, are used to execute different code blocks based on the result of comparison operations. int score = 85; if (score >= 90) { // Code for A grade } else if (score >= 80) { // Code for B grade } else { // Code for C grade or lower } In summary, number comparison in C++ involves using comparison operators to evaluate and compare numeric values. These comparisons are essential for making decisions and controlling program flow, and they are used extensively in various programming scenarios.

## Algorithm 
1.Include Headers: Include necessary headers, such as , at the beginning of your program.

2.Declare and Initialize Variables: Declare and initialize the numeric variables you want to compare. In this example, we have num1 and num2.

3.Compare Numbers Using if-else Statements:

The if statement is used to test whether num1 is equal to num2. The else if statement checks if num1 is less than num2. The else statement handles the case where num1 is greater than num2. 4.Execute Code Blocks: Depending on the comparison results, the appropriate code block within the if or else if sections is executed.

5.Continue the Program: The program continues with the rest of its logic after the if-else statements.

OUTPUT image![image](https://github.com/Vrn24/Data-Types/assets/112547439/85241757-643e-4e26-886e-f49909782a67)





