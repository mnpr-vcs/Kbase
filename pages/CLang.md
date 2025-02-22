- C is a powerful, general-purpose programming language. It's known for its efficiency, control over hardware, and portability. It's often used for system programming, embedded systems, game development, and more.
  collapsed:: true
  title:: CLang
	- Quick Concepts
	  collapsed:: true
		- **Data Types:**  `int` (integers), `float` (floating-point numbers), `char` (characters), `double` (double-precision floating-point), `void` (no type).
		- **Variables:**declare and initialize variables to store data.  (e.g., `int age = 25;`)
		- **Operators:** Arithmetic operators (+, -, *, /, %), assignment operators (=, +=, -=), comparison operators (==, !=, <, >, <=, >=), logical operators (&&, ||, !).
		- **Input/Output:** `printf()` (for printing to the console), `scanf()` (for reading from the console).
		- **Control Flow:**
		- **`if`, `else if`, `else` statements:** For conditional execution.
		- **`for` loops:** For repeating a block of code a specific number of times.
		- **`while` loops:** For repeating a block of code until a condition is met.
		- **`do-while` loops:** Similar to `while`, but the code block is executed at least once.
		- **`switch` statements:** For choosing between multiple code blocks based on a value.
		- **Functions:** How to define and call functions to organize your code.  Learn about parameters and return values.
		- **Arrays:** How to create and use arrays to store collections of data of the same type. (e.g., `int numbers[10];`)
		- **Strings:** How to work with strings (sequences of characters).  C strings are null-terminated character arrays.
		- **Pointers:** Pointers store memory addresses.
		- **Structures:** to create structures to group related data together.
		- **Unions:** Similar to structures, but members share the same memory location.
		- **Enums (Enumerations):**  For defining named integer constants.
	- Advanced Concepts
	  collapsed:: true
		- **Memory Management (Dynamic Allocation):** `malloc()`, `calloc()`, `free()`.  Crucial for managing memory efficiently.
		- **File Handling:** How to read from and write to files.
		- **Preprocessor Directives:**  `#include`, `#define`, etc.
		- **Bitwise Operators:** For manipulating individual bits.
		- **More on Pointers (Pointers to Pointers, Function Pointers):**  These are more advanced but very powerful.
- EnvSetup
  collapsed:: true
	- Compiler: GCC, Clang
	- Text Editor
	- Syntax
	  collapsed:: true
		- ```hello.c
		  #include <stdio.h>
		  
		  int main() {
		      printf("Hello, World!\n");
		      return 0;
		  }
		  ```
		- Compile : `gcc hello.c -o hello`
		- Execute : `./hello`
- **Basic Syntax:** Variables, data types, operators, and expressions.
  collapsed:: true
	- Variables : `int age;`
	- **Data Types:** built-in:
	  collapsed:: true
		- `int`: Integer numbers (e.g., -10, 0, 15).
		- `float`: Single-precision floating-point numbers (e.g., 3.14, 2.5).
		- `double`: Double-precision floating-point numbers (more precise than `float`).
		- `char`: Single characters (e.g., 'a', 'Z', '$').
		- `_Bool` (C99): Represents boolean values (true or false), typically 1 or 0.
		- `void`: Represents the absence of a specific type.  We'll see this later with functions.
	- **Operators:**  Operators are symbols that perform operations on values.
	  collapsed:: true
		- **Arithmetic Operators:** `+` (addition), `-` (subtraction), `*` (multiplication), `/` (division), `%` (modulo - remainder).
		- **Assignment Operators:** `=` (assignment), `+=`, `-=`, `*=`, `/=`, `%=` (combined assignment and arithmetic).
		- **Comparison Operators:** == (equal to), != (not equal to), > (greater than), < (less than), >= (greater than or equal to), <= (less than or equal to).
		- **Logical Operators:** 1 <!----> && (logical AND), || (logical OR), ! (logical NOT).
	- Expressions : An expression is a combination of variables, constants, and operators that evaluates to a value.
	  collapsed:: true
		- ```
		  int age = 50;
		  int sum = age + 10;
		  ```
- **Control Flow:** Conditional statements (if, else, switch) and loops (for, while, do-while).
  collapsed:: true
	- Control flow statements allows one to control the order in which statements are executed in a program.
	- **If**
	  collapsed:: true
		- ```
		  if (condition) {
		      // Code to execute if the condition is true
		  }
		  ```
	- **If else**
	  collapsed:: true
		- ```
		  if (condition) {
		      // Code to execute if the condition is true
		  } else {
		      // Code to execute if the condition is false
		  }
		  ```
	- **else if**
	  collapsed:: true
		- ```
		  if (condition1) {
		      // Code to execute if condition1 is true
		  } else if (condition2) {
		      // Code to execute if condition2 is true
		  } else {
		      // Code to execute if none of the conditions are true
		  }
		  ```
	- **switch**: A more efficient way to handle multiple conditions based on a single variable.
	  collapsed:: true
		- ```
		  switch (variable) {
		      case value1:
		          // Code to execute if variable == value1
		          break; // Important: break prevents fallthrough
		      case value2:
		          // Code to execute if variable == value2
		          break;
		      default:  // Optional: Code to execute if no case matches
		          // ...
		  }
		  ```
	- **for**
	  collapsed:: true
		- ```
		  for (initialization; condition; increment/decrement) {
		      // Code to execute repeatedly
		  }
		  ```
	- **while**
	  collapsed:: true
		- ```
		  while (condition) {
		      // Code to execute repeatedly
		  }
		  ```
	- **do while** : the code block is executed at least once before the condition is checked.
	  collapsed:: true
		- ```
		  do {
		      // Code to execute repeatedly
		  } while (condition);
		  ```
- **Functions:** Defining and calling functions, scope, and parameters.
  collapsed:: true
	- **Definition**
	  collapsed:: true
		- ```
		  return_type function_name(parameter_list) {
		      // Function body (code to be executed)
		      return value; // If the function has a return type other than void
		  }
		  ```
		- `return_type`: The data type of the value the function returns. If the function doesn't return a value, use `void`.
		- `parameter_list`: A list of parameters (variables) that the function receives as input.  If the function doesn't take any parameters,  can be left empty or use `void`.
		- `return value`: The value that the function returns.  This must match the `return_type`.
	- **Call**
	  collapsed:: true
		- ```
		  result = function_name(argument_list);
		  ```
		- `argument_list`: The values passed to the function as input. These must match the types and order of the parameters in the function definition.
	- **Prototype**
	  collapsed:: true
		- A declaration of a function that tells the compiler the function's name, return type, and parameters.  It's good practice to declare function prototypes before using them, especially if the function is defined *after* it's used in the code. the prototype can be put in a header file (`.h`) or at the top of `.c` file
		- ```
		  int add(int a, int b); // Function prototype
		  void greet(char name[]); // Function prototype
		  ```
	- **Parameters (Formal Arguments) vs. Arguments (Actual Arguments):**
	  collapsed:: true
		- The variables declared in the function definition are called *parameters*.
		- The values passed to the function when it's called are called *arguments* ).
	- **Scope** : The region of a program where a variable or function can be accessed. Variables declared inside a function are local to that function and cannot be accessed from outside.
	- **Return Statement:** The `return` statement is used to return a value from a function.  If a function has a `void` return type, one can use `return;` without a value to simply exit the function.
	-
- **Arrays:** Working with arrays, multi-dimensional arrays.
  collapsed:: true
	- Arrays are used to store collections of elements of the same data type. They provide a way to work with multiple values efficiently.
	- **Declaring**
	  collapsed:: true
		- ```
		  data_type array_name[size];
		  ```
		- `data_type`: The data type of the elements in the array (e.g., `int`, `float`, `char`).
		- `array_name`: The name of the array.
		- `size`: The number of elements the array can hold.  This must be a constant integer value.
	- **initializing**
	  collapsed:: true
		- ```c
		  int numbers[5] = {10, 20, 30, 40, 50}; // initialized at declaration
		  int scores[3];
		  scores[0] =33;
		  scores[1] =66;
		  scores[2] =99;
		  ```
	- **Accessing**
	  collapsed:: true
		- accessed using their index, starting from 0.
		- ```c
		  printf("%d\n", numbers[0]); // Accessing the first element (10)
		  printf("%d\n", scores[2]);   // Accessing the third element (99)
		  ```
		- > *C does `not` perform bounds checking on arrays.  If one tries to access an element outside the valid range (0 to size-1), the program might crash or behave unpredictably.  It's self responsibility to make sure one's working within the array bounds.*
- **Enums**:  An **enum** is a special type that represents a group of constants (unchangeable values).
- **Pointers:** Understanding pointers, pointer arithmetic, and their relationship with arrays.
  collapsed:: true
	- A pointer is a variable that stores the *memory address* of another variable.  a way to indirectly access a variable through its location in memory.
	  collapsed:: true
		- Pointers store memory addresses.
		- The `*` operator is used for dereferencing (accessing the value at an address).
		- The `&` operator is used to get the address of a variable.
		- Pointer arithmetic is useful for working with arrays.
		- Pointers are essential for dynamic memory allocation
	- **Declaring**
	  collapsed:: true
		- ```
		  data_type *pointer_name;
		  ```
		- `data_type`: The data type of the variable that the pointer will point to.  It's important that the pointer's data type matches the type of the variable it will point to.
		- `*`: The asterisk indicates that this is a pointer variable.
		- `pointer_name`: The name of the pointer.
	- **The Address-of Operator (`&`):**  The `&` operator is used to get the memory address of a variable.
	- **The Dereference Operator (`*`):** The `*` operator is used to access the value stored at the memory address that a pointer holds.  This is called *dereferencing* the pointer.
	- **Syntax**
	  collapsed:: true
		- ```c
		  #include <stdio.h>
		  - int main() {
		    int age = 30;
		    int *age_pointer = &age;
		    printf("Address of age: %p\n", &age);
		    printf("Value of age: %d\n", age);
		    // the address stored in age_pointer (same as &age)
		    printf("Value of age_pointer: %p\n", age_pointer);
		    printf("Value at the address stored in age_pointer: %d\n", *age_pointer);
		    *age_pointer = age+1; // Modifying the value at the address
		    printf("New value of age: %d\n", age);
		  - return 0;
		  }
		  ```
	- **Pointers and Arrays**
	  collapsed:: true
		- The name of an array, when used without an index, decays to a pointer to the first element of the array.
		- ```c
		  int numbers[5] = {10, 20, 30, 40, 50};
		  int *ptr = numbers; // ptr now points to numbers[0]
		  
		  printf("%d\n", *ptr);      // Prints 10 (numbers[0])
		  printf("%d\n", *(ptr + 1)); // Prints 20 (numbers[1])  // Pointer arithmetic
		  ```
	- **Pointer Arithmetic**
	  collapsed:: true
		- perform arithmetic operations on pointers (but only addition and subtraction).  This is very useful for traversing arrays.
		- `ptr + n`:  Moves the pointer `n` positions forward in memory (where each position is the size of the data type the pointer points to).
		- `ptr - n`: Moves the pointer `n` positions backward.
	- **Pointer and Functions**
	  collapsed:: true
		- pass pointers to functions.  This allows the function to modify the original variables (rather than just copies).  This is often more efficient than passing large data structures.
		- ```c
		  void increment(int *x) {
		      (*x)++; // Increment the value at the address
		  }
		  
		  int main() {
		      int num = 10;
		      increment(&num); // Pass the address of num
		      printf("%d\n", num); // Output: 11
		      return 0;
		  }
		  ```
- **Strings:** Manipulating strings in C.
  collapsed:: true
	- While C doesn't have a built-in "string" data type like some other languages, it represents strings as arrays of characters, terminated by a null character (`\0`).
	- **Null Terminator (`\0`):**  The null terminator is a special character that marks the end of a string.  It's crucial because it tells string functions where the string ends.  If you forget the null terminator, your program might behave unpredictably.
	- **Declare**
	  collapsed:: true
		- ```c
		  char string_name[size];
		  ```
		- `char`:  Strings are arrays of characters.
		- `string_name`: The name of the string (which is actually a character array).
		- `size`: The maximum number of characters the string can hold, *including* the null terminator.
	- **Initialization**
	  collapsed:: true
		- ```c
		  // compiler auto adds the null terminator
		  char message[] = "Hello"; 
		  // specify the size
		  char name[10] = "Alice";  
		  // explicitly adding the null terminator.
		  // char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; 
		  ```
	- **String Functions :** C provides several useful functions for working with strings, which are defined in the `string.h` header file.
	  collapsed:: true
		- `strcpy(destination, source)`: Copies the string `source` to the string `destination`.
		- `strcat(destination, source)`: Concatenates (appends) the string `source` to the string `destination`.
		- `strlen(string)`: Returns the length of the string (excluding the null terminator).
		- `strcmp(string1, string2)`: Compares two strings lexicographically (alphabetical order). Returns 0 if the strings are equal, a negative value if string1 is less than string2, and a positive value if string1 is greater than string2.
		- Considerations
		  collapsed:: true
			- **Buffer Overflows:** Make sure your string arrays are large enough to hold the strings.  Use functions like `strncpy` (which limits the number of characters copied) instead of `strcpy` when in need to be extra careful.
			- **String Literals:** Strings enclosed in double quotes (e.g., "Hello") are called string literals.  They are stored in read-only memory.  They can't modified directly.
- **Structures and Unions:** Creating custom data types.
  collapsed:: true
	- These are ways to create your own custom data types by grouping together variables of different data types.
	- **Structures:** A structure is a collection of variables (members) of possibly different data types, grouped together under a single name.  Structures are used to represent complex data entities.
	  collapsed:: true
		- **Definition**
		  collapsed:: true
			- ```c
			  struct structure_name {
			      data_type member1;
			      data_type member2;
			      // ... more members
			  };
			  ```
		- **Creating Structure variable**
		  collapsed:: true
			- ```c
			  struct structure_name variable_name;
			  ```
		- **Accessing Structure Members:**
		  collapsed:: true
			- Use the dot operator (`.`) to access individual members of a structure.
			- ```c
			  variable_name.member1 = value;
			  printf("%d\n", variable_name.member2);
			  ```
		- EG.
		  collapsed:: true
			- ```c
			  #include <stdio.h>
			  #include <string.h>
			  
			  struct Student {
			      int rollNumber;
			      char name[50];
			      float marks;
			  };
			  
			  int main() {
			      struct Student student1;
			  
			      student1.rollNumber = 101;
			      strcpy(student1.name, "Alice");
			      student1.marks = 95.5;
			      printf("Roll Number: %d\n", student1.rollNumber);
			      printf("Name: %s\n", student1.name);
			      printf("Marks: %.2f\n", student1.marks);
			  
			      struct Student student2;
			      student2.rollNumber = 102;
			      strcpy(student2.name, "Bob");
			      student2.marks = 88.0;
			      printf("\nRoll Number: %d\n", student2.rollNumber);
			      printf("Name: %s\n", student2.name);
			      printf("Marks: %.2f\n", student2.marks);
			  
			      return 0;
			  }
			  ```
	- **Unions:** A union is similar to a structure, but it stores only *one* value at a time. All members of a union share the same memory location. This means that one can only use one member of a union at any given time.  Unions are useful when one needs to store different types of data in the same memory location at different times.
	  collapsed:: true
		- **Definition**
		  collapsed:: true
			- ```c
			  union union_name {
			      data_type member1;
			      data_type member2;
			      // ... more members
			  };
			  ```
		- **Creating Union Variables**
		  collapsed:: true
			- ```c
			  union union_name variable_name;
			  ```
		- **Accessing Union Members**
		  collapsed:: true
			- Use the dot operator (`.`) to access individual members of a union.
	- **Key Differences between Structures and Unions:**
	  collapsed:: true
		- **Memory Allocation:** Structures allocate memory for *all* of their members. Unions allocate memory only for the *largest* of their members.
		- **Simultaneous Use:** You can use *all* members of a structure at the same time. You can use only *one* member of a union at a time.
	- **When to use Structures and Unions:**
	  collapsed:: true
		- **Structures:** Use structures when you need to group related data of different types and use all of that data simultaneously.  This is the most common use case.
		- **Unions:** Use unions when you need to store different types of data in the same memory location at different times, often to save memory or when the exact type of data is not known in advance.
- **File Handling:** Reading from and writing to files.
  collapsed:: true
	- File handling allows programs to read data from and write data to files on your computer's storage. This is essential for tasks like storing data persistently, reading configuration files, and processing large datasets.
	- **Opening a File**
	  collapsed:: true
		- ```c
		  FILE *file_pointer = fopen("filename", "mode");
		  ```
		- `FILE *file_pointer`: A pointer to a `FILE` structure. This pointer will be used to interact with the file.
		- `"filename"`: The name of the file (a string).
		- collapsed:: true
		  
		  `"mode"`: A string specifying the mode in which the file is opened:
			- `"r"`: Read mode (opens the file for reading).  File must exist.
			- `"w"`: Write mode (opens the file for writing).  Creates the file if it doesn't exist, overwrites if it does.
			- `"a"`: Append mode (opens the file for appending).  Creates the file if it doesn't exist, adds to the end if it does.
			- `"rb"`: Read binary mode.
			- `"wb"`: Write binary mode.
			- `"ab"`: Append binary mode.
			- `"r+"`: Read and write mode.
			- `"w+"`: Read and write mode (creates or overwrites).
			- `"a+"`: Read and append mode.
		- **Checking for Errors:**  It's crucial to check if `fopen` was successful.  If the file cannot be opened (e.g., file not found, permission issues), `fopen` returns `NULL`.
		  collapsed:: true
			- ```c
			  FILE *file = fopen("myfile.txt", "r");
			  if (file == NULL) {
			      perror("Error opening file"); // Prints a descriptive error message
			      return 1; // Indicate an error
			  }
			  ```
	- **Reading from a File**
	  collapsed:: true
		- `fscanf(file_pointer, "format_specifiers", &variable1, &variable2, ...)`:  Similar to `scanf`, but reads from a file.
		- `fgets(buffer, size, file_pointer)`: Reads a line from the file into the `buffer` (a character array).  Stops reading when it encounters a newline character or reaches `size - 1` characters.
		- `fgetc(file_pointer)`: Reads a single character from the file.
	- **Writing to a File**
	  collapsed:: true
		- `fprintf(file_pointer, "format_specifiers", variable1, variable2, ...)`: Similar to `printf`, but writes to a file.
		- `fputs(string, file_pointer)`: Writes a string to the file.
		- `fputc(character, file_pointer)`: Writes a single character to the file.
	- **Closing a File** It's *essential* to close files when you're finished with them to release system resources and ensure that data is written to the file properly.
	  collapsed:: true
		- `fclose(file_pointer);`
	- Eg.
	  collapsed:: true
		- ```c
		  #include <stdio.h>
		  #include <string.h>
		  
		  int main() {
		      // Writing to a file:
		      FILE *outfile = fopen("output.txt", "w");
		      if (outfile == NULL) {
		          perror("Error opening output file");
		          return 1;
		      }
		  
		      fprintf(outfile, "Name: %s\n", "Alice");
		      fprintf(outfile, "Age: %d\n", 30);
		      fputs("Hello, file!\n", outfile);
		      fclose(outfile);
		  
		      // Reading from a file:
		      FILE *infile = fopen("output.txt", "r");
		      if (infile == NULL) {
		          perror("Error opening input file");
		          return 1;
		      }
		  
		      char name[50];
		      int age;
		      char buffer[100];
		  
		      fscanf(infile, "Name: %s", name);
		      fscanf(infile, "Age: %d", &age);
		      fgets(buffer, 100, infile); // Read the rest of the line (including "Hello, file!")
		  
		      printf("Name: %s\n", name);
		      printf("Age: %d\n", age);
		      printf("Message: %s", buffer);
		  
		      fclose(infile);
		  
		      return 0;
		  }
		  ```
	- **Binary Files:**
	  collapsed:: true
		- For reading and writing binary data (non-text data), use the binary modes (`"rb"`, `"wb"`, `"ab"`, `"r+b"`, etc.).  You'll typically use functions like `fread` and `fwrite` for binary file I/O
		-
- **Memory Management:** Dynamic memory allocation (malloc, calloc, free).
  collapsed:: true
	- Dynamic memory allocation allows one to allocate memory during the runtime of a program, as needed.  This is very useful when one doesn't know the exact amount of memory needed beforehand (e.g., when dealing with user input or data of varying sizes).
	- C provides several functions for dynamic memory allocation, which are declared in the `stdlib.h` header file:
	  collapsed:: true
		- `malloc(size)`
		  collapsed:: true
			- Allocates a block of memory of the specified `size` (in bytes).  Returns a pointer to the beginning of the allocated memory, or `NULL` if the allocation fails.
		- `calloc(number_of_elements, size_of_each_element)`
		  collapsed:: true
			- Allocates memory for an array of `number_of_elements`, where each element is of the specified `size`.  It also initializes the allocated memory to zero.  Returns a pointer to the beginning of the allocated memory, or `NULL` if the allocation fails.
		- `realloc(pointer, new_size)`
		  collapsed:: true
			- Resizes a previously allocated block of memory.  `pointer` is the pointer to the original block, and `new_size` is the new size (in bytes).  Returns a pointer to the resized block (which might be at a different memory location), or `NULL` if the reallocation fails.
		- `free(pointer)`
		  collapsed:: true
			- Deallocates (releases) a previously allocated block of memory.  It's *crucial* to free memory when you're finished with it to prevent memory leaks.
	- **Key Points:**
	  collapsed:: true
		- Always check the return value of `malloc`, `calloc`, and `realloc` to make sure the allocation was successful.
		- Always `free` the memory you allocate dynamically when you're finished with it.  Failing to do so will result in memory leaks.
		- Be careful with pointer arithmetic.  Make sure you're not accessing memory outside the bounds of the allocated block.
		- `realloc` can move the allocated block to a new location in memory.  So, *always* update your pointer to the new pointer returned by `realloc`.
- **Preprocessor Directives:** Using `#define`, `#include`, and other directives.
  collapsed:: true
	- Preprocessor directives are instructions that are processed by the C preprocessor *before* the compiler compiles your code. They are typically used for tasks like including header files, defining constants, and conditional compilation.
	- Preprocessor directives always start with a `#` symbol.
	  collapsed:: true
		- **`#include`:**  Used to include the contents of another file (usually a header file) into the source code.
		  collapsed:: true
			- ```c
			  #include <stdio.h>   // Includes the standard input/output library
			  #include "my_header.h" // Includes a user-defined header file
			  ```
			- The difference between angle brackets `<>` and double quotes `""` is where the preprocessor searches for the file. Angle brackets tell it to look in the standard system directories for header files. Double quotes tell it to look in the current directory first and then in the standard directories.
		- **`#define`:** Used to define constants and macros.
		  collapsed:: true
			- `#define` creates a *textual substitution*.  Everywhere `PI` appears in your code, the preprocessor will replace it with `3.14159` *before* the compiler sees the code.  Macros are similar, but they can take arguments. The parentheses around `(x)` in the `SQUARE` macro are crucial to ensure correct evaluation of expressions.
			- ```c
			  #define PI 3.14159
			  #define SQUARE(x) ((x) * (x)) // Macro for squaring a number
			  ```
			-
		- **`#ifdef`, `#ifndef`, `#endif`, `#elif`, `#else`:** Used for conditional compilation.  These directives allow us to include or exclude blocks of code based on certain conditions.
		  collapsed:: true
			- ```c
			  #ifdef DEBUG  // If DEBUG is defined
			      printf("Debugging information\n");
			  #endif
			  
			  #ifndef PRODUCTION // If PRODUCTION is NOT defined
			      // Code to include only in development builds
			  #endif
			  
			  #if VERSION == 1
			      // Code for version 1
			  #elif VERSION == 2
			      // Code for version 2
			  #else
			      // Default code
			  #endif
			  ```
		- **`#undef`:** Used to undefine a previously defined macro.
		  collapsed:: true
			- ```c
			  #define MAX_SIZE 100
			  // ... some code ...
			  #undef MAX_SIZE // MAX_SIZE is no longer defined
			  ```
		- **`#error`:** Used to generate a compiler error message.
		  collapsed:: true
			- ```c
			  #ifndef BUFFER_SIZE
			      #error BUFFER_SIZE must be defined!
			  #endif
			  ```
		- **`#pragma`:** Compiler-specific directives that can be used to control compiler behavior.  These are often used for optimization or other compiler-specific settings.  They are not standardized, so their usage varies between compilers.
	- **Key Points:**
	  collapsed:: true
		- Preprocessor directives are processed *before* compilation.
		- `#include` is used for including header files.
		- `#define` is used for defining constants and macros.
		- Conditional compilation (`#ifdef`, etc.) allows you to control which parts of your code are compiled.
		- Be careful with macros.  The extra parentheses are important to avoid unexpected behavior due to operator precedence.