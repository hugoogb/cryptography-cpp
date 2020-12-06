#include "menu.h"

// Show methods menu: pick the general method to use
void menu_methods() {
  cout << "\t------------------";
  cout << "\t| MENU - Methods |";
  cout << "\t------------------";
  cout << "1. Transform" << endl;
  cout << "2. Alphabets" << endl;
  cout << "3. Ciphers" << endl;
  cout << "4. Encoding" << endl;
  cout << "5. Messages history" << endl;
  cout << "6. Exit" << endl;
  cout << "\nPick an option: ";
}

// Show transform methods menu: pick transform methods
void menu_transform() {
  cout << "\t-----------------------" << endl;
  cout << "\t| Methods - Transform |" << endl;
  cout << "\t-----------------------" << endl;
  cout << "1. Reverse transform" << endl;
  cout << "2. Lower case transform" << endl;
  cout << "3. Upper case transform" << endl;
  cout << "4. Capitalize transform" << endl;
  cout << "5. Inverse case transform" << endl;
  cout << "6. Exit" << endl;
  cout << "\nPick an option: ";
}

// Show alphabets methods menu: pick alphabets methods
void menu_alphabets() {
  cout << "\t-----------------------" << endl;
  cout << "\t| Methods - Alphabets |" << endl;
  cout << "\t-----------------------" << endl;
  cout << "1. Mourse code alphabet" << endl;
  cout << "2. Exit" << endl;
  cout << "\nPick an option: ";
}

// Show cipher methods menu: pick cipher method
void menu_cipher() {
  cout << "\t--------------------" << endl;
  cout << "\t| Methods - Cipher |" << endl;
  cout << "\t--------------------" << endl;
  cout << "1. Caesar cipher" << endl;
  cout << "2. ROT13 cipher" << endl;
  cout << "3. ROT_X cipher" << endl;
  cout << "4. Vigenere cipher" << endl;
  cout << "5. Exit" << endl;
  cout << "\nPick an option: ";
}

// Show encoding methods menu: pick encoding method
void menu_encoding() {
  cout << "\t----------------------" << endl;
  cout << "\t| Methods - Encoding |" << endl;
  cout << "\t----------------------" << endl;
  cout << "1. Base32 encoding" << endl;
  cout << "2. Base64 encoding" << endl;
  cout << "3. Ascii85 encoding" << endl;
  cout << "4. Decimal encoding" << endl;
  cout << "5. Hexadecimal encoding" << endl;
  cout << "6. Binary encoding" << endl;
  cout << "7. Octal encoding" << endl;
  cout << "8. URL encoding" << endl;
  cout << "9. Exit" << endl;
  cout << "\nPick an option: ";
}

// Show inside menu: pick encode or decode
void menu_encode_decode() {
  cout << "1. Encode" << endl;
  cout << "2. Decode" << endl;
  cout << "3. Exit" << endl;
  cout << "\nPick an option: ";
}