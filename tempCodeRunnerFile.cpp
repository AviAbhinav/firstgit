#include<iostream>
using namespace std;

class A{
    public:
        int a;
        A(int x){
            a=x;
        }
};
class B:virtual public A{
    public:
        int b;
        B(int y){
            b=y;
        }
};
class C:virtual public A{
    public:
        int c;
        C(int z){
            c=z;
        }
};
class D:public B,public C{
    public:
        int z;
        D(){
            z=a+b+c;
            cout<<z;
        }
};
int main(){
    D a(5),b(10),c(15),d();
}