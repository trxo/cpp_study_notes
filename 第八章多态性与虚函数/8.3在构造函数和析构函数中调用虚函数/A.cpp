class A
{
public:
    A(){}
    virtual void func()
    {
        cout << "constructing A" << endl;
    }
    ~A(){}
    virtual void fund()
    {
        cout << "Destructor A" << endl;
    }
};