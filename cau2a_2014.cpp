class IFace {
    public:
    virtual void show()=0;
    virtual Iface* clone()=0;
    virtual~IFace(){
    }
};
class Face : public IFace {
    private:
    string shape;
    protected:
    string getShape(){
        return shape;
    }
    public:
    Face(string sh): shape(sh){
        cout<<"Shape:"<<shape<<endl;
    }
};
class EyedFace : Public Face{
    privare:
    int eyes;
    public:
    EyedFace(string sh, int e):Face(sh), eyes(e){
    }IFace*clone(override){
        returnnew EyedFace(*this);
    }
    void show(){
        cout<<"Shape:"<<getShape()<<"'Eyes:"<<eyes<<endl;
    }
};
