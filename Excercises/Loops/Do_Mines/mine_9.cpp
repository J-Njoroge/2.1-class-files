#include<iostream>
using namespace std;
int main ()
{
   int character;

   cout<<"Characters from A to Z in uppercase:"<<endl;

   character = 65;// ASCII value of A=65 and Z=90
   do
   {
      character++;
      cout<<(char)character<<" ";

   }while(character <=90);

   cout<<"\n\n";

   cout<<"Characters from a to z in lowercase:"<<endl;
   character = 96;
   do
   {
       character++;
       cout<<(char)character<<" ";

   }while(character <= 122);
   cout<<endl;


    return 0;
}
