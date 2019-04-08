
class B : public A
{
public:
    B(){
        func();
    }
    void fun()
    {
        cout << "Come Here and go...";
        func();
    }
    ~B(){
        fund();
    }
};