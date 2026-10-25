#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

class Mystring
{
    public:
    int len;
    char *data;

    public:
    Mystring(const char *ptr=" ")
    {
        len = strlen(ptr);
        data = new char[len+1];
        strcpy(data, ptr);

    }
    int operator ==(Mystring &s)
    {
           if( len==s.len  &&   strcmp(data,s.data)==0)
           {
            return 1;
           } 
           else 
           return 0;
    }

    int length()
    {
        return len;
    }

    void print()
    {
        cout << data << endl;
    }

    int operator !=(Mystring &s)//s3!=s2
    {
        if(*this == s)
        {
            return 0;

        }
        else
        {
            return 1;
        }
    }

     Mystring(Mystring &s)
    {
        s.len=len;
    
        data = new char[len+1];

        strcpy(data,s.data);
    }



    ~Mystring()
    {
        delete[] data;
    }

};
int main()
{
    Mystring s1("hello");
    Mystring s2=s1;
     if((s2!=s1)==1)
     {
        cout<<"STRING s2 is not equal to s1"<<endl; 
     }
     else cout<<"STRING s2 is  equal to s1"<<endl;

  Mystring s3("WORLD!");
     if(s3==s2)
     {
        cout<<"STRING s3 is  equal to s1"<<endl;
     }
     else  cout<<"STRING s3 is not equal to s1"<<endl; 

    s1.print();
    // s2.print();
   
    
}