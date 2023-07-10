 #include<iostream>
using namespace std;

class Complex{
int a,b;
    public:
        void setnumber(int n1, int n2)
        {
            a = n1;
            b = n2;
        }

        void printnumber()
        {
            cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
        }
        friend Complex sumComplex(Complex o1,Complex o2);
        
};  
    Complex sumComplex(Complex o1,Complex o2)
        {
            Complex o3;
            o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
            return o3;
        }
int main(){
    Complex c1,c2,sum;
    c1.setnumber(2,5);
    c2.setnumber(4,8);
    c1.printnumber();
    c2.printnumber();

    sum = sumComplex(c1,c2);
    sum.printnumber();

    return 0;
}