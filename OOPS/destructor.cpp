#include<iostream>
#include<string>
using namespace std;

class cars
{
    private:
        string company_name;
        string model_name;
        string fuel_type;
        float price;
        int mileage;
    public:
        cars( )
        {
            cout<<"default constructor is called"<<endl;
        }

        cars (string cname,string mname,string fname,float pr,int mi)
        {
            cout<<"parameterized constructor is called"<<endl;
            company_name=cname;
            model_name=mname;
            fuel_type=fname;
            price=pr;
            mileage=mi;
        }

        cars (cars  &obj)
        {
            cout<<"copy constructor is called"<<endl;
            company_name=obj.company_name;
            model_name=obj.model_name;
            fuel_type=obj.fuel_type;
            price=obj.price;
            mileage=obj.mileage;
        }
        void setdata(string cname,string mname,string fname,float pr,int mi)
        {
            company_name=cname;
            model_name=mname;
            fuel_type=fname;
            price=pr;
            mileage=mi;
        }
        void displaydata( )
        {
            cout<<"*******Car properties******"<<endl<<endl;
            cout<<" Car name:"<<company_name<<endl;
            cout<<" model:"<<model_name<<endl;
            cout<<" fuel type:"<<fuel_type<<endl;
            cout<<" price:"<<price<<endl;
            cout<<" mileage:"<<mileage<<endl<<endl;
        }

        ~cars( )
        {
                    cout<<"destructor is called"<<endl;
        }
};
int main()
{
    cars object1;
   //object1.setdata("Toyota","zanthin","Diesel",250000,50);
    object1.displaydata( );
    cars object2("Maruthi","nano","Petrol",100000,45);
    object2.displaydata( );
    cars object3 =object1;
    object3.displaydata( );
}
