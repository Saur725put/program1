#include <iostream>
#include <string>
using namespace std;
class Rectangle {
    private:
        int length, breadth;
    public:
        
        Rectangle() {
            length = 0;
            breadth = 0;
        }
        
        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }
        
        Rectangle(int l) {
            length = l;
            breadth = l;
        }
        int area() {
            return length * breadth;
        }
};

int main() {
   
    Rectangle r1;
    Rectangle r2(4);
    Rectangle r3(4, 5);

    
    cout << "Area of rectangle with no parameter : " << r1.area() << endl;
    cout << "Area of rectangle with one parameter : " << r2.area() << endl;
    cout << "Area of rectangle with two parameters : " << r3.area() << endl;
    return 0;
}
