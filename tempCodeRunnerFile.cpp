//Max occuring string

#include<iostream>
using namespace std;

char getMaxOccChar(string s)
{
int arr[26] = {0};
for(int i=0; i<s.length(); i++)
{   char ch = s[i];
    int number = 0;
    if(ch>='a' && ch<='z')
    {
        number = ch-'a';
    }
    else
    {
        number = ch-'A';
    }
    arr[number]++;
}

int maxi=-1, ans = 0;
for(int i=0; i<26; i++)
{
    if(arr[i]>maxi)
    {
        maxi = arr[i];
        ans = i;
    }
}
char finAns = 'a'+ans;
return finAns;
}

int main()
{   string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<getMaxOccChar(s);
}