# Wordcounter

The second project on my journey of learning the basics of C.
Just a simple console based wordcounter.

### How to use

Upon execution the program will ask you for a text input.
After you have provided your string it will:
  -read it back to you
  -tell you the number of characters in the string
  -tell you the number of words in the string

### How does it work?

The user is asked for an input stored in a char-array using "fgets".
Then a simple print command reads your input back to you.
After that the string length is being checked using "strlen" - and printed of course.
And lastly we have a while-loop going through the array, counting all spaces +1 and therefore finding out the wordcount.
