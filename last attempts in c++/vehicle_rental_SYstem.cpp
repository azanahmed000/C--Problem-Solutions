// 2. Vehicle Rental System*  
// Create classes for vehicles (Car, Bike, Truck). Use inheritance and polymorphism to calculate rental costs depending 
// on vehicle type and duration.
#include<iostream>
#include<string>
using namespace std;
class Vehicle
{
    protected:
    string vehicleType;
    public:
    
    Vehicle(string type) : vehicleType(type) {}
    
    virtual double  rent(int duration){
        return 0;
    }
    virtual ~Vehicle() {}
};
class  car:public Vehicle
{
    public:
    car():Vehicle("Car"){}
    double rent(int duration) override{
        return duration *50;
    }
    


};
class bike :public Vehicle
{
    public:
    bike():Vehicle("Bike ") {}
    double rent(int duration) override{
        return duration *30;
    }
};
class truck:public Vehicle
{
    public:
    truck():Vehicle("Truck "){}
    double rent(int duration)override{
        return duration*80;
    }

};
int main()
{
    Vehicle *caro= new car();
    Vehicle *bikeo= new bike();
    Vehicle *trucko= new truck();
    cout<<"Enter the Duration  (in days):";
    int duration;
    cin>>duration;

    cout<<"\n\nCar rental for  "<<duration<<" Days : $ "<<caro->rent(duration)<<endl;
    cout<<"\n\nBike rental for  "<<duration<<" Days : $ "<<bikeo->rent(duration)<<endl;
    cout<<"\n\nTruck rental for  "<<duration<<" Days : $ "<<trucko->rent(duration)<<endl;
    
    delete caro;
    delete bikeo;
    delete trucko;



}
