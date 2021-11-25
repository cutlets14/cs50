# Slides - https://docs.google.com/presentation/d/11nbVogBHrI5XWZ5yqg6Lhn7WxvRPTntUDGDzLbPbzC4/edit#slide=id.g409d1a31b6_0_465

# Binary Number System
- Binary number
    - A number expressed in the base-2 numeral system which uses only two symbols: 0 and 1
    - Each digit is referred to as a bit (binary digit)
- Why do computers think in binary?
    - The physical input to computers is electricity so when we want to store electricity, we call it 1 and when we want to "let go" of electricity, we can call it 0.
- How do we count greater than 1?
    - We use more bits!
    - E.g., 110010 = 50 i.e., (1)(2^5) + (1)(2^4) + (0)(2^3) + (0)(2^2) + (1)(2^1) + (0)(2^0)
- Bytes
    - A pattern of eight 0s and 1s - this means one can represent 256 symbols with 8 bits
    - Only 256 symbols isn't good enough to even marginally capture all the other characters we encounter every day let alone characters from other languages

# How does a computer represent letters in the alphabet?
- We use numbers represented in binary to represent letters in the alphabet. Humans took this foundation and made some changes.
- E.g., A in decimal is 65 and 01000001
- Such a mapping is captured in American Standard Code for Information Interchange (ASCII). ASCII codes represent text in computers, telecommunications equipment, and other devices.

# Unicode
- A newer representation system which can represent emojis, accented characters, and generally speaking, characters from many different languages

# RGB
- Assigning numbers to different colors is a great start when it comes to representing colors
- The representative system is R G B and each color can take on a value between 0 and 255 (i.e. represented by a byte = 8 bits)
- Using only bits at their disposal, computers use RGB by rapidly changing colors of those pixels to give the illusion of motion on the screen

# Algorithms
- Step-by-step instructions to solve problems
- Efficiency vs. correctness
- Size of the problem vs. time to solve - slide 107

## Pseudocode
- An algorithm implemented in English - must be correct and precise
- Functions and conditions in the code

# Starting with Scratch!