#include <iostream>
using namespace std;

class AbstraksiKlas
{
private:
    string x, y;

public:
    // menthod untuk mengisi nilai
    // private number
    void setXY(string a, string b)
    {
        x = a;
        y = b;
    }
};