// string concatenation
#include <iostream>

using namespace std;

int main()
{
    const string s = "Pease-porridge ";
    string nurseryRhyme = s + "hot, " + s + "cold,\n";
    nurseryRhyme += s + "in the pot, nine days old.\n";
    cout << nurseryRhyme;
    return 0;
}
