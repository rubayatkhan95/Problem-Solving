
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main() {
    int h,m,s;
    char c[2];
    scanf("%d:%d:%d%s",&h,&m,&s,c);
    if(!strcmp(c,"PM") && h != 12)h+=12;
    if(!strcmp(c,"AM") && h == 12)h = 0;
    printf("%02d:%02d:%02d\n",h,m,s);
    return 0;
}


/*
#include<iostream>
#include <string.h>
#include <stdio.h>

using namespace std;


int main () {

    string a = "12:00:10AM";
    //cin>>a;
    string b =  "AM";
    string s1 = "Geeks";
    string r = a.substr(8,9 );
    if(r == "AM")
    {
        cout<<"Morning"<<endl;
    }
    else
    {
     cout<<"Evening"<<endl;
    }


   return 0;
}

*/
