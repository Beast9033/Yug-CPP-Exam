#include <iostream>

using namespace std;

class Device
{
    private:
        string brand;
        double powerConsumption;
    
    public:
        void setBrand(string brand)
        {
            this->brand = brand;
        }
    
        const char *getBrand() const
        {
            return brand.c_str();
        }
    
        void setPowerConsumption(double p)
        {
            powerConsumption = p;
        }
    
        double getPowerConsumption() const
        {
            return powerConsumption;
        }
    
        virtual void displayInfo() const = 0;
    };
    
    class Laptop : public Device
    {
    
    public:
        void displayInfo() const
        {
            cout << "Device Type: Laptop" << endl;
            cout << "Brand: " << getBrand() << endl;
            cout << "Power Consumption: " << getPowerConsumption() << " W" << endl;
        }
    };
    
    class Smartphone : public Device
    {
    private:
        int supports;
    
    public:
        void displayInfo() const override
        {
            cout << "Device Type: Smartphone" << endl;
            cout << "Brand: " << getBrand() << endl;
            cout << "Power Consumption: " << getPowerConsumption() << " W" << endl;
        }
};

int main()
{
    Laptop laptop;
    laptop.setBrand("apple");
    laptop.setPowerConsumption(60);

    Smartphone smartphone;
    smartphone.setBrand("samsung");
    smartphone.setPowerConsumption(20);

    Device *devices[] = {&laptop, &smartphone};

    for (int i = 0; i < 2; ++i)
    {
        devices[i]->displayInfo();
        cout << "\n-------------------\n";
    }

    return 0;
}