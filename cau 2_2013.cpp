#   include<iostream>
using nameespace std;
class Base {
    public:
    Base(){
        cout<<"Construcotor of Base"<<endl;
    }
    // Hàm hủy ảo
    virtual~Base(){
        cout<<"Destrutor of Base"<<endl;
    }
};
calss Derived: public Base{
    cout<<"Constructor of Derived"<<endl;
}
//Hàm hủy
~Derived(){
    cout<<"Destructor of Derived"<<ednl;
}
};
int main
    Base* obj= new Derived();
    delete obj;//
    return 0;

}