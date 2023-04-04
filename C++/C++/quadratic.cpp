#include <iostream>
#include <cmath>
using namespace std;

class quadratic{
    private:
    float a,b,c;

    public:
    quadratic(float x ,float y,float z){
        a=x;
        b=y;
        c=z;

    }

    void calculation( ){

        float discriminant , realPart ,imaginaryPart , x1 ,x2;
         
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }



    }

};

int main() {
    quadratic  obj(1,2,1);
    obj.calculation();

    
    return 0;
}