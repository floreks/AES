#include <QDebug>
#include "cipher.h"

int main()
{
    string data = "AES Test 12345 ASLDASOFAO....zxckm&!@^";
    Cipher::encrypt(data);
    qDebug() << "Encrypted: " << data.c_str();
    Cipher::decrypt(data);
    qDebug() << "Decrypted: " << data.c_str();
    return 0;
}
