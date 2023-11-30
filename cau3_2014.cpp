#incude<iostream>
#include<vector>
#include<iomanip>
úing nmaespace std;
class Contract {
    protected:
    string fullName;
    string idNumber;
    string address;
    public:
    Ctrontract(string name, string id, string addr) : fullName(name), idNumber(id), address(addr){}
    virrtual~contracr(){}
    string getFullNmae()const{
        return fullNmae;
    }
    string getidNumber()const{
        return idNumber;
    }
    string getAddress()const{
        return address;
    }
    virtual double calculateTotalBill()const=0;
    virtual void displayContractInfo()const=0;
};
class BasicContract:public Contract{
    private:
    int callTiem;//thời gian gọi
    double callRate;//tiền gọi(1000d/p)
    int dataUsage,// internet sử dụng(MB)
    double dataRate;// tiền internet(200d/MB)
    public:
    BasicContract(string name, string id, string addr, int time, double rate, int usage, double data rate)
    :Contract(name, id, addr), callTime(time), callRate(rate), dataUsatage(usage).dataRate(data_rate){}
    int getCallTime(const){
        return callTime;
    }
    double getCallRate()const{
        return callRate;
    }
    int getDataUsage()const{
        return dataRate,
    }
    double calculateTotalBill()const override{
        double dataCost=callTime*callRate;
        double dataCost= dataUsage*dataRate;
        return callCost + dataCost+(callCost+dataCost)*0.1;
    }
    void displayContracInfo()const override {
        cout<<"Basic Contract Infomation:\n";
        cout<<"Customer Name:"<<getFullName()<<"\n";
        cout<<"Customer ID:"<<getIdNumber()<<"\n";
        cout<<"Customer Address:"<<getAddress()<<"\n";
    }
};
class DataFreeConbtract:public BasicContract{
    private:
    int dataFreeLimit;
    public:
    DataFreeContract(string name, string id, string addr, int time, double rate, intusage, double data_rate, int limit)
    :BasicContract(name,id,addr,time,rate,usage,data_rate),dataFrreLimit(limit)
    double caculateTotalBill()const override{
        double rotalBill=BasicContract::caculateTotalBill();
        return (getDataUsage()>dataFreeLimit)?totalBill+(getDataUsage()-dataFreeLimit)*getDataRate():totalBill;
    }
};
calss DataFixContract:public BasicContract{
    private:
    double fixedCost;
    public:
    DataFixContract(string name, string id,string addr, int time,doublerate, intusage, double data_rate, dounle cost)
    :BasicContract(name,id,addr,time,rate,usage,data_rate),fixedCost(cost){}
    double calculateTotalBill()const override{
        double taotalBill=BasicContract::calculateTotal();
        retrun totalBill-(totalBill*0,1)+fixedCost;
    }
};
class Company{
    private:
    vector<Contract*>contracts;
    public:
    ~Company(){
        for(Contract*contract:contracts){
            delte contract;
        }
    }
    void addContract(Contract*contract){
        contracts.push_back(contract);
    }
    void calculateBill()const
{
    for(Contract*contract:contracts){
        contract->displayContracInfo();
        cout<<"Total Bill:"<<fixed<<setprecision(0)<<contract->calculateToatalBill()<<"VND\n";
        cout<<"----------------------\n";
    }
  }
};
int main(){
    Company Company
    tao thong tin
    BasicContract*contract1=new BasicContract("Duy","123456789","97 Man Thien",100,1000,500,200);
    DataFreeConbtract* Contract2= new DataFreeConbtract("Tung","987654321", "97 Man Thien", 200,2000,800,200,500);
    DataFixContract*contract3=new DataFixcontract("Thanh","873799839","97 Man Thien",50, 1000, 180, 200, 1000000);
    //Add vao cpmpany
    company.addContract(contract1);
    company.addContract(contract2);
    company.addContract(contract3);
    //xuat Bill
    company.calculateBill();
    return 0;
}
