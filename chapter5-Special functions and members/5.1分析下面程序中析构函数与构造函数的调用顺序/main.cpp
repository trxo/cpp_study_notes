#include <iostream>

using namespace std;

class object{
    private:
        int val;
    public:
        object():val(0)
        {
            cout << "Default constructor for object" << endl;
        };
        object(int i):val(i)
        {
            cout << "Constructor for object" << endl;
        };
        ~object()
        {
            cout << "Destructor for object" << endl;
        };
};
class container{
    private:
        object one;
        object two;
        int data;
    public:
        container():data(0)
        {
            cout << "Default constructor for container" << endl;
        };
        container(int i,int j, int k);
        ~container(){
            cout << "Destructor for container" << data << endl;
        };
};

container::container(int i, int j, int k)
{
    data = k;
    cout << "Container for container" << endl;
};
int main()
{
    container obj,anObj(5,6,10);
}

// print
// Default constructor for object
// Default constructor for object
// Default constructor for container
// Default constructor for object
// Default constructor for object
// Container for container
// Destructor for container10
// Destructor for object
// Destructor for object
// Destructor for container0
// Destructor for object
// Destructor for object
