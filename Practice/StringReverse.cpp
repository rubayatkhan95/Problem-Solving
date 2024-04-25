#include<iostream>
#include<string>
using namespace std;

int main(){

string a = "Hello";

for(int i = a.length()-1 ; i>=0; i--)
{
    cout<<a[i];
}

return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "geeksforgeeks";

    reverse(str.begin(), str.end());

    cout << str;
    return 0;
}

*/
