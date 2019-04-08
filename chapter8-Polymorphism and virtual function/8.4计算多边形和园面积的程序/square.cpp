class square : public shape{
    protected:
        double H;
    public:
        square(double i){ H = i; }
        double area() { return H * H; }
};