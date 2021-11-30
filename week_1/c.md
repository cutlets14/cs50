# Slides - https://docs.google.com/presentation/d/1_BSY-aHIw8Xa__FL0HyAFoevLW7GHcTnx8j52dn0LsI/edit#slide=id.g27bf6b75c93f59_634

# Guiding Lights for writing code
1. Correctness - Does your code do what it's supposed to correctly?
2. Design - Qualitative measure to assess how well-written the code is, e.g., DRY and efficient.
3. Style - Aesthetics of the code; analogous to using proper punctuation and capitalizing of text to improve readibility.

# CS50 IDE
- ide.cs50.io

# Execute code using CLI
- What is between my source code and my machine code? The compiler!
- Use "make hello" to compile hello.c

# Function and Arguments
- Argument - an input that is used by a function to perform something

# Side Effects
- Often something visual that happens on the screen. E.g., the Scratch sprite moving or displaying a message

# Return values, variables
- Something a function passes back after executing the code within. Often, what is returned is stored in a variable.
- C is a lot more pedantic than Scratch so you have to assign things yourself.

# Header files
- Give access to more functions than one might automatically get when using standard C.

# Help
- Use "help50" to debug issues and translate arcane/cryptic computer messages to being more user-friendly; usage: "help50 make hello"
- Use "style50" to get feedback on style-based items; usage: "style50 hello.c"
- Use "check50" to check correctness of code against some automated tests written for a given problem set. Command always supplied for each problem set/lab.

# Helpful CLI commands/directories
- cp
- mkdir
- mv
- . - current directory
- .. - parent directory

# Common data types - only use a specific finite number of bits
- bool
- char - quote them using single quotes
- double
- float
- int - 32-bit only
- long
- string

# Useful functions in cs50.h
- get_char, get_int, get_float etc.

# printf - data codes to tell C to be precise about printing things
- %c - print single character
- %f - print floating point number
- %i - print integer
- %s - print string
- %li - print long integer

# Cast numbers
- Syntax: int x; (float) x -> casts an integer to a floating point number

# Syntactic sugar
- counter = counter + 1; counter += 1; counter++