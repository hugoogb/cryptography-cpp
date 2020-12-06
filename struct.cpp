#include <iostream>

#include "struct.h"

using namespace std;

// Void function: initializes message struct with some predefined values
void initialize_messages(TMessage message[], int num_messages,
                         int actual_index) {
  for (int i = actual_index; i < num_messages; i++) {
    message[i].method = "-----";
    message[i].plainText = "-----";
    message[i].cipherText = "-----";
    message[i].keyNumber = 0;
    message[i].keyChar = "-----";
  }
}

// Void function: Asks for the plain text to encode
void plainText_get(TMessage message[], int actual_index) {
  cout << "Type the text to encode: ";
  getline(cin, message[actual_index].plainText);
}

// Void function: Asks for the cipher text to decode
void cipherText_get(TMessage message[], int actual_index) {
  cout << "Type the text to decode: ";
  getline(cin, message[actual_index].cipherText);
}

// Void function: Asks for the numeric key
void numberKey_get(TMessage message[], int actual_index) {
  cout << "Type the number key: ";
  cin >> message[actual_index].keyNumber;
}

// Void function: Asks for the alfabetic key
void charKey_get(TMessage message[], int actual_index) {
  cout << "Type the alfabetic key: ";
  getline(cin, message[actual_index].keyChar);
}
