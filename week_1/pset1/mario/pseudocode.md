1. Get user input for how tall the pyramid should be. Ensure the input is a positive integer and that it is >1.
    - Re-prompt the user for valid input so use do-while blocks.
2. Store user input as variable and cast as integer to be safe before usage.
3. Two for loops: one for rows and one for columns.
    - Start with printing out a left-aligned pyramid
        - Outer loop is the row and inner loop is the column
4. Add another loop before the columnar loop to add dots (at first) and then spaces to right-align the pyramid
    - Figure out the number of dots to add based on height of pyramid, row number, and whether or not you're using zero-indexing for the loop
    - E.g., if the pyramid height is 3, row number is 0, and using zero-index, then number of dots = 3 - 0 - 1 i.e. 2 dots and 1 hash on the first row
5. This makes the pyramid right-aligned after replacing the dots with spaces