//c++ code for caesar cipher 
#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int i,j,k,shift;
    string code , decoded="",encoded="";
    cout<<"ENTER THE TEXT(CODE) :"<<endl;
    getline(cin,code);
    cout<<"ENTER THE SHIFT VALUE :"<<endl;
    cin>>shift;
    for(i=0;i<code.length();i++)
    {
        char ch=code[i];
        if(islower(ch))
        {
            k=int(ch)+shift;
            if(k<=122&&k>=97)
               encoded+=char(k);
            else if(k<97)
                encoded+=char(k+26) ;
            else
                encoded+=char(k-26);
        }
        
        else if(isupper(ch))
        {
            k=int(ch)+shift;
            if(k<=90&&k>=65)
               encoded+=char(k);
            else if(k<65)
                encoded+=char(k+26) ;
            else
                encoded+=char(k-26);
        }
        else encoded+=ch;
    }
        
   for(j=0;j<code.length();j++)
    {
        char ch=encoded[j];
        if(islower(ch))
        {
            k=int(ch)-shift;
            if(k<=122&&k>=97)
               decoded+=char(k);
            else if(k<97)
                decoded+=char(k+26) ;
            else
                decoded+=char(k-26);
        }
        
        else if(isupper(ch))
        {
            k=int(ch)-shift;
            if(k<=90&&k>=65)
               decoded+=char(k);
            else if(k<65)
                decoded+=char(k+26) ;
            else
                decoded+=char(k-26);
        }
        else decoded+=ch;
       
    }
    cout<<"THE ACTUAL TEXT:::"<<endl<<code<<endl;
    cout<<"THE ENCODED TEXT:::"<<endl<<encoded<<endl;
    cout<<"THE DECODED TEXT:::"<<endl<<decoded<<endl;
        return 0;
}
