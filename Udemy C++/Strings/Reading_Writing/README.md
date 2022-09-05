# String
It is a collection of characters or letterss. Largest size of string-> 2000 characters.

In c++, there are two ways to store a string, 
    1. Using Char Array
    2. Using String Class

### 1) Declaring and Initialising using Method 1

`>>char x = 'A';`
    * Using single quote takes 1 byte memory
    * Can only store a single character/letter
    * Even if you write it the following way: 
        `char x = "Hello";`
        `cout<<x;`
        `>> H`
        the output will just be *H*, because char can store just 1 byte.

To store a string, you use array of characters.
`>>char x[10] = "Hello";`
    * Use double quotes for storing string. using single quotes with char array
    will throw built-in error. When you use double quote, it is a string. Single
    quotes take 1 byte, thus used only for characters.
    * After the last character 'o', it will reserve one more byte to stor null character-> `\0`
    or string terminator. It tells where the string ends.

You can also declare and initialise a string in the following way:-
`char s[] = "Hello";`

Or, it can also be declared and initialised as an array of charaters:-
`char s[] = {'H', 'E', 'L', 'L', 'O', '\0'};`
    * Need to add *null character* at the end so that it becomes string

You can also declare and initialise using pointer:-
`char *s = "Hello";`
The string literal("") will create an array and s will be pointing to the string

Enough space should be provided to store `"\0"` as well.