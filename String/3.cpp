#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1),getline(cin,s2);
    printf("%d",s1.find(s2));
    return 0;
}
