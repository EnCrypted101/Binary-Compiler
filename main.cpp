#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
  cout << "Input: ";
  string input;
  getline(cin, input);
  string output;
  for (int i = 0; i < input.length(); i += 9) {
    bitset<8> bits(input.substr(i, 8));
    unsigned char c = bits.to_ulong();
    output += c;
  }
  cout << "Output: " << output << endl;
  return 0;
}
