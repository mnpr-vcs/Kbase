- Bash (Bourne Again SHell) is a command-line interpreter
- Basics cmds
  collapsed:: true
	- `pwd` (print working directory): Shows you the current folder you're in.
		- Type `pwd` and press Enter. You'll see the path to your current directory.
	- `ls` (list): Lists the files and folders in the current directory.
		- Type `ls` and press Enter. You'll see the contents.
		- `ls -l` shows more detail, and `ls -a` shows hidden files.
	- `cd` (change directory): Moves you to a different folder.
		- `cd Documents` (moves to the "Documents" folder).
		- `cd ..` (moves one level up).
		- `cd ~` (moves to your home directory).
	- `mkdir` (make directory): Creates a new folder.
		- `mkdir my_new_folder` creates a folder named "my_new_folder".
	- `touch` (create file): Creates an empty file.
		- `touch my_file.txt` creates an empty file named "my_file.txt".
	- `rm` (remove): Deletes files and folders.
		- `rm my_file.txt` (deletes the file).
		- `rm -r my_folder` (deletes the folder and its contents. Be careful with this!).
	- `echo` (print): Displays text on the screen.
		- `echo "Hello, Bash!"` prints "Hello, Bash!".
	- `cat` (concatenate): Displays the contents of a file.
		- `cat my_file.txt` (displays the contents of "my_file.txt").
	- `man` (manual): Displays the manual page for a command.
		- `man ls` (displays the manual for the `ls` command). Press `q` to exit.
- Variables
  collapsed:: true
	- `variable_name=value`
	- ```bash
	  my_variable="Hello"
	  echo $my_variable
	  ```
	- `$` is used to access the value of a variable
- Control Flow | Loops
  collapsed:: true
	- If
	  collapsed:: true
		- ```bash
		  #!/bin/bash
		  num=10
		  if [ $num -gt 5 ]; then
		      echo "Number is greater than 5"
		  fi
		  ```
		- `-gt` (greater than), `-lt` (less than), `-eq` (equal to), `-ne` (not equal to).
		- `[ ... ]` is used for conditional expressions.
		- `then` and `fi` mark the beginning and end of the `if` block respectively.
	- For
	  collapsed:: true
		- ```bash
		  #!/bin/bash
		  for i in 1 2 3 4 5; do
		      echo "Number: $i"
		  done
		  ```
	- While
	  collapsed:: true
		- ```bash
		  #!/bin/bash
		  count=1
		  while [ $count -le 5 ]; do
		      echo "Count: $count"
		      count=$((count + 1))
		  done
		  ```
		- `do` and `done` mark the beginning and end of the loop.
		- `$((...))` is used for arithmetic operations.
- Functions
  collapsed:: true
	- allows to group a set of commands into a reusable block of code.
	- ```bash
	  function function_name() {
	      # Commands here
	  }
	  #or
	  function_name () {
	      #commands here
	  }	
	  ```
	- ```bash
	  #!/bin/bash
	  function greet() {
	      echo "Hello, $1!"
	  }
	  greet "Alice"
	  greet "Bob"
	  ```
- Arrays
  collapsed:: true
	- allows to store multiple values in a single variable.
	- ```bash
	  my_arr = ("apple", "banana", "cherry")
	  ```
	- **Accessing elements:**
	  collapsed:: true
		- `${my_array[0]}` (accesses the first element)
		- `${my_array[@]}` (accesses all elements)
		- ```bash
		  #!/bin/bash
		  fruits=("apple" "banana" "cherry")
		  for fruit in "${fruits[@]}"; do
		      echo "Fruit: $fruit"
		  done
		  ```
- I/O/ Redirection
  collapsed:: true
	- allows to control where the input and output of a command go.
	- **Operators:**
	  collapsed:: true
		- `>` (redirect output to a file, overwriting existing content)
		- `>>` (append output to a file)
		- `<` (redirect input from a file)
		- `2>` (redirect standard error)
	- ```bash
	  ls -l > file_list.txt #saves the output of ls -l to file_list.txt
	  cat < input.txt #takes the input of cat from input.txt
	  ```
- Regular Expressions
  collapsed:: true
	- are powerful patterns for matching text.
	- `grep` is a command-line tool that uses regular expressions to search for text.
	- ```bash
	  grep "pattern" filename #search for "pattern" in filename
	  grep -r "pattern" directory #recursive search.
	  ```
- `sed` and `awk`
  collapsed:: true
	- These are very powerful text processing utilities.
		- `sed` is a stream editor that can be used to perform text transformations.
		- `awk` is a powerful pattern-scanning and text-processing language.
	- They are very useful for parsing and manipulating text data.
