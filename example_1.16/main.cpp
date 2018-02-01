#include <iostream>

using namespace std;

void printComparison(const string, const string);
int main()
{
    const string s1 = "COMPUTE";
    const string s2 = "COMPUTER";
    const string s3 = "COMPUTABLE";
    const string s4 = "COMPUTARE";
    printComparison(s1,s2);
    printComparison(s1,s3);
    printComparison(s1,s4);
    printComparison(s2,s2);
    printComparison(s3,s4);
    return 0;
}

void printComparison(const string s1, const string s2)
{
    if(s1<s2) cout << s1 << " < " << s2 << endl;
    else if(s1==s2) cout << s1 << " == " << s2 << endl;
    else cout << s1 << " > " << s2 << endl;
    return;
}
