#include<iostream>
using namespace std;
class ComplexNumber{
    private:
    int a, b
    public:
    ComplexNumber();
    ComplexNumber(int X, int y);
    void nhap();
    void xuat();
    ComplexNumber operator + (const ComplexNumber& other);
    ComplexNumber operator - ( const ComplexNumber& other);
    ComplexNumber operator - ();
};
ComplexNumber::ComplexNumber(){
    a = 0;
    b = 0;
}
ComplexNumber::ComplexNumber(int X, int y){
    a = X;
    b = y;
}
void ComplexNumber::nhap(){
    cout<<"Nhap phan thuc =";
    cin>>a;
    cout<<"Nhap phan ao = ";
    cin>>b;
}
void ComplexNumber::xuat(){
    if(a!=0 && b!=0){
        cout<<a<<"+"<<b<<"√7";
    }
    else if(a!=0 && b==0){
        cout<<a<<""<<b<<"√7";
    } else if (a!=0 && b==0){
        cout<<a;  
    }else if(a==0 && b!=0){
        cout<<b<<"√7"
    }else {
        cout<<"0"
    }
    cout<< endl;
    }
    ComplexNumber ComplexNumber::operator + (const ComplexNumber& other){
        CompPlexNumber tomg;
        tong.a=a + other.a;
        tong.b=b + other.b;
        return tong;
    }        
    ComplexNumber ComplexNumber::operator-(const ComplexNumber& other){
        ComplexNumber hieu;
        hieu.a=a- other.a;
        hieu.b=b -other.b;
        return hieu;
    }
    ComplexNumber ComplexNumber::operator -(){
        ComplexNumber negation;
        negation.a= -a;
        negation.b= -b;
        return negation;
    }
    ComplexNumber ComplexNumber::operator*(const ComplexNumber& other){
        CompNumber nhan;
        nhan.a= (a*other.a)+(7*b*other.b);
        nhan.b= (b*other.b)+(b*other.a);
        return nhan;
    }
    }
}
int main(){
    ComplexNumber num1, num2, res;
    cout<<"Nhap so thu nhat: "<<endl;
    num1.nhap();
    cout<<"Nhap so thu hai "<<endl;
    num2.nhap();
    //tinh tong
    res= num1 + num2;
    cout<<"tong: ";
    res.xuat();
    // tinh hieu
    res= num1 - num2;
    cout<<"hieu: ";
    res.xuat();
    //phep doi dau
    res= -num1;
    cout<<"Doi dau: ";
    res.xuat();
    //phep nhan
    res= num1*num2;
    cout<<"Nhan: ";
    res.xuat();
}