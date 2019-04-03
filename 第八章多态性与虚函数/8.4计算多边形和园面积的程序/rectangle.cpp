class rectangle : public triangle
{
public:
    rectangle(double h,double w):triangle(h ,w){}
    double area() { return H * W; }
};
