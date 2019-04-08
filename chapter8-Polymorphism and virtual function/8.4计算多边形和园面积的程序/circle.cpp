class circle : public square{
    public:
        circle(double r):square(r){}
        double area() { return H * H * 3.14159; }
};