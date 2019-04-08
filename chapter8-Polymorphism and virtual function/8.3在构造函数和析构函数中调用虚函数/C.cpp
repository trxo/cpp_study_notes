class C : public B {
    public:
        C(){}
        void func(){
            cout << "class C"<<endl;
        }
        ~C()
        {
            fund();
        }
        void fund()
        {
            cout << "destruct C " << endl;
        }
};
