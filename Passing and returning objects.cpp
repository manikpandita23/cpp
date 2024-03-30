#include <iostream>
using namespace std;

class Example 
{
public:
    int a;
    void add(Example E) 
    {
        a = a + E.a;
    }
};

int main() 
{
    Example E1, E2;
    E1.a = 250;
    E2.a = 300;

    cout << "Initial Values" << endl;
    cout << "E1.a: " << E1.a << " E2.a: " << E2.a << endl;

    E2.add(E1);

    cout << "New Values" << endl;
    cout << "E1.a: " << E1.a << " E2.a: " << E2.a << endl;

    return 0;
}
