#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX = 62;

// Returns a string of random alphabets of
// length n.
string printRandomString(int n)
{
    char alpha[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z','A','B',
                          'C','D','E','F','G','H','I','J',
                          'K','L','M','N','O','P','Q','R',
                          'S','T','U','V','W','X','Y','Z',
                          '1','2','3','4','5','6','7','8','9','0' };

    string res = "";
    for (int i = 0; i < n; i++)
        res = res + alpha[rand() % MAX];

    return res;
}

// Driver code
int main()
{
   srand(time(NULL));
   int n = 6;
   string v="",str="";
   v=printRandomString(n);
   cout << v;
   cout << "\nEnter the CAPTCHA :: ";
   cin >> str;
   if(str==v){
       cout<< "\nCAPTCHA Matched!!";
   }
   else{
       cout<< "\nCAPTCHA Failed!!";
   }
   return 0;
} 
