class triangle : public square{
    protected:
        double W;
    public:
        triangle(double h,double w):square(h){ W = w; }
        double area(){ return H * W * 0.5; }
};
