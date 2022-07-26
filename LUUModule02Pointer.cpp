#include <iostream>
using namespace std;

int main()
{
    
    int a, b;
    std::cout << "Please enter two integers " << endl;
    cin >> a;
    cin >> b;

    auto* ptrA{ &a };
    auto* ptrB{ &b };

    cout << *ptrA << ", " << *ptrB << endl;
}
