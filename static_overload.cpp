#include<iostream>
using namespace std;

class example
{
    int n1, n2;

    public:
    example(int n1, int n2)
    {
       this->n1=n1;
       this->n2=n2;   
    }

    public:
   void display()
    {
        cout << "n1 is " << n1 << "n2 is  " << n2 <<endl;
    }

    int operator >(example &E)
    {
        int E1_sum = n1 +n2;
        int E2_sum = E.n1 + E.n2;
       if(E1_sum > E2_sum)
       {
        return 1;
       }
       else return 0;
    }

};

int main()
{
    example E1(2,3);
    example E2(3,4);

    if(E1 > E2)
    {
        cout <<"E1 is bigger than E2"<<endl;
    }
    else  cout <<"E2 is bigger than E1"<<endl;
}
