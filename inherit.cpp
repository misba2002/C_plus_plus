#include<iostream>

using namespace std;

class A{
    public: 
    A()
    {
        cout <<" A is called\n";
    }
    ~A()
    {
        cout <<" A Desc is called\n"; 
    }
};

class B : public A{
     public: 
    B()
    {
        cout <<" B is called\n";
    }
    ~B()
    {
        cout <<" B Desc is called\n"; 
    }
};
class C : public A{
     public: 
    C()
    {
        cout <<" C is called\n";
    }
    ~C()
    {
        cout <<" C Desc is called\n"; 
    }
};
// class D : public C , public B {
//      public: 
//     D()
//     {
//         cout <<" D is called\n";
//     }
//     ~D()
//     {
//         cout <<" D Desc is called\n"; 
//     }
// };

int main()
{
    D d;
}
