#include <iostream>
using namespace std;

string ReadText() {
  string Text;
  cout << "Enter Text: ";
  getline(cin, Text);

  return Text;
}

void EncryptText(string Text, short EncryptKey) {
  string word = "";
  for (int i = 0; i < Text.length(); i++) {
    word += Text[i] + EncryptKey;
  }
  cout << word;
}

void DecryptText(string Text, short EncryptKey) {
  string word = "";
  for (int i = 0; i < Text.length(); i++) {
    word += Text[i] + 2 - EncryptKey;
  }
  cout << word;
}

int main() {
  string Text = ReadText();
  short EncryptKey = 2;

  cout << "Text Before Encrypt: " << Text << endl;

  cout << "Text After Encrypt: ";
  EncryptText(Text, EncryptKey);
  cout << endl;

  cout << "Text After Decrypt: ";
  DecryptText(Text, EncryptKey);

  return 0;
  }