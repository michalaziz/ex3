#include "Unit.h"
#include "iostream"
#include "string"

namespace ariel
{

class PhysicalNumber
{
  private:
    double num;
    int u;

  public:
    PhysicalNumber();//deafult ctor                                  
    PhysicalNumber(double, int);//ctor                      
    ~PhysicalNumber();//dtor                                 
    PhysicalNumber operator+(const PhysicalNumber &);  //physicalNumber+physicalNumber
    PhysicalNumber operator+=(const PhysicalNumber &); //physicalNumber=physicalNumber+physicalNumber
    PhysicalNumber operator-(const PhysicalNumber &);  //physicalNumber-physicalNumber
    PhysicalNumber operator-=(const PhysicalNumber &); //physicalNumber=physicalNumber-physicalNumber
    PhysicalNumber operator+();//+(physicalNumber)
    PhysicalNumber operator-();//-(physicalNumber) 

    const bool operator<(const PhysicalNumber &);//PhysicalNumber<PhysicalNumber
    const bool operator>(const PhysicalNumber &);//PhysicalNumber>PhysicalNumber
    const bool operator<=(const PhysicalNumber &);//PhysicalNumber<=PhysicalNumber
    const bool operator>=(const PhysicalNumber &);//PhysicalNumber>=PhysicalNumber

    const bool operator==(const PhysicalNumber &);//PhysicalNumber==PhysicalNumber
    const bool operator!=(const PhysicalNumber &);//PhysicalNumber!=PhysicalNumber

    PhysicalNumber operator++(int);//PhysicalNumber++
    PhysicalNumber operator--(int);//PhysicalNumber--
    friend ostream& operator<<(ostream &out, const PhysicalNumber& x);//cout
    friend istream& operator>>(istream &in,  PhysicalNumber &x);//cin
};

} // namespace ariel