# Encryption code
This C++ code takes a user input word or phrase, converts it into a new string by applying a simple encryption algorithm, and then outputs the encrypted string.

The program prompts the user to enter a word, and reads the input string character by character using cin.get() until the Enter key is pressed. It stores the input string in a character array called user_input.

After reading the input, the program initializes an integer variable n to 0 and a character array called user_output. It then loops through each character in the user_input array and applies the encryption algorithm to each character.

If the character is an uppercase letter (ASCII code between 65 and 90), it subtracts 65 from the ASCII code of the letter to get a number between 0 and 25, and then subtracts this number from 90 to get the encrypted character.

If the character is a lowercase letter (ASCII code between 97 and 122), it performs a similar calculation by subtracting 97 from the ASCII code of the letter to get a number between 0 and 25, and then subtracts this number from 122 to get the encrypted character.

If the character is a digit (ASCII code between 48 and 57), it adds 140 to the ASCII code of the digit to get the encrypted character.

If the character is not an uppercase letter, lowercase letter, or digit, it copies the character unchanged to the encrypted string.

Finally, the program outputs the encrypted string using cout.
