#include<iostream>
#include<string>
using namespace std;
int find(string s1,string s2);
int main()
{
    string s1,s2;
    getline(cin,s1),getline(cin,s2);
    cout<<find(s1,s2);
    return 0;
}
int find(string s1,string s2)
{
   for(int i=0;s1[i]!='\0';i++)
        for(int j=0;s2[j]!='\0'&&s1[i+j]==s2[j];j++)
            if(s2[j+1]=='\0')   return i;
    return -1;
}
