#include<iostream>
#include<string>
using namespace std;

class cars{
  private:
  string name;
  string modelname;
  string fuel;
  double price;

public:
  void setdata(string company_name,string mname,string fueltype,double cost){
    name=company_name;
    modelname=mname;
    fuel=fueltype;
    price=cost;
  }
  void display()
  {
    cout<<"Company Name:  "<<name<<endl;
    cout<<"Model Name:  "<<modelname<<endl;
    cout<<"Fuel type:  "<<fuel<<endl;
    cout<<"Car Price:  "<<price<<endl;
  }
};
int main()
{
  cars car1;//object is a kind of variable which stores type class i.e it has both setdata and display
  car1.setdata("Toyoto","Vista","Petrol",1500000);
  car1.display();

  return 0;
}
