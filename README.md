# Caesar Cipher 🛡️

This is a simple C program that encrypts user input using the classic **Caesar cipher** algorithm. The key is passed via the command-line, and the user is prompted to enter a plain text message. The program then outputs the encrypted (ciphered) text.

---

## 📌 How It Works

- The Caesar cipher is a substitution cipher that shifts each letter in the alphabet by a fixed number of positions (the key).
- For example, with key = 3:  
  `A → D`, `B → E`, `C → F`, ... `Z → C`

---

## 🚀 Usage

1. **Compile the program** (requires the CS50 library):

   ```bash
   make cesar

2. Run the program with a numeric key:

./cesar 2

3. Enter the message when prompted:

Simple text: Ernicio!

4. Result:

Cipher text: Gtpkekq!

