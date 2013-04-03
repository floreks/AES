#ifndef CIPHER_H
#define CIPHER_H

#include <vector>
#include <string>

typedef unsigned char BYTE;
typedef unsigned short int WORD;

#define KEY128 10

using std::vector;
using std::string;

class Cipher
{
private:
    static BYTE sBox[256];
    static BYTE isBox[256];
    static BYTE rcon[10];
    static vector<BYTE>key;
    static vector< vector<BYTE> > keys;

    static void subBytes(string &data, bool operation);
    static void shiftRows(string &data, bool operation);
    static void padBytes(string &data);
    static void mixColumns(string &data, bool operation);
    static void generateFirstRow(int roundNr, BYTE tab[]);
    static void addRoundKey(int roundNr, string &data);
    static void keySchedule();
    static void rotWord(BYTE tab[4]);
    static BYTE GMul(BYTE a, BYTE b);
public:
    Cipher() = delete;
    static void encrypt(string &data);
    static void decrypt(string &data);
};

#endif // CIPHER_H
