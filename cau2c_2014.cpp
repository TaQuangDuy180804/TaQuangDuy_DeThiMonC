void tesstFace(IFace*fc){
    IFace**a=new Iface*[3];
    a[0]=fc;
    a[1]=fc->clone();
    a[2]=fc->clone();
    for(int i==,i<3;i++){
        a[oi]->show();
        deletea[i];
    }
}
cout<<"The same 3 lines?"<<endl;
delete[]a:}

class EyedFace:public Face{
    private:
    nt eyes;
    static int count;
    public:
    //khoi tao ham mac dinh
    EyedFace():Face(){
        eyes=0;
        count++;
    }
    EyedFace(string sh, int e):Face(sh), eyes(e){
        cuount++;
    }
    //ham huy
    ~EyedFace(){
        count--;
    }
    IFace*clone(){
        cout<<"Shape:"<<getShape()<<",Eyes:"<<eyes<<endl;
    }
    static int getcount(){
        return count;
    }
};


Hàm main():
int manin(){
    EyedFace fc1("RECtangle",2);
    testFace(&fc1);
    cout<<"Total EyedFace objects:"<<EyedFace::getcount()<<endl;
    return 0;
}