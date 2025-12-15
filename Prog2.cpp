#include <iostream>

using namespace std;

class Car
{
    private:
        string model;
        int year;
        int speed;

    public:
        Car(string model, int year, int speed) : model(model), year(year), speed(speed) {}
    
        void setModel(string model)
        {
            this->model = model;
        }

        void setYear(int year)
        {
            this->year = year;
        }

        void setSpeed(int speed)
        {
            this->speed = speed;
        }
        string getModel() const
        {
            return model;
        }

        int getYear() const
        {
            return year;
        }

        int getSpeed() const
        {
            return speed;
        }
};

int main()
{
    Car myCar("Model-21", 2001, 250);

    cout << "Car Model: " << myCar.getModel() << endl;
    cout << "Car Year: " << myCar.getYear() << endl;
    cout << "Car Speed: " << myCar.getSpeed() << " kmh" << endl;

    return 0;
}
