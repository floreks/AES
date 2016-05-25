#include <iostream>
#include "cipher.h"

using namespace std;

int main()
{
    string data = "AES Test 12345 ASLDASOFAO....zxckm&!@^";
    Cipher::encrypt(data);
    cout << "Encrypted: " << data << endl;
    Cipher::decrypt(data);
    cout << "Decrypted: " << data;
    return 0;
}
