
#include<iostream>
#include<string>
#include<stack>

using namespace std;
int main(){
   string s = "Transpro API";
   stack<string> a;

   string str = "";

   for (int i = 0 ; i<= s.length();i++)
   {

       if(s[i] == ' ' || s[i] == '\0')
       {
           a.push(str);
           str="";
       }

       else
       {
           str += s[i];
       }
   }

   while (!a.empty())
   {

       cout<<a.top();
       cout<<" ";
       a.pop();
   }


    return 0;
}
