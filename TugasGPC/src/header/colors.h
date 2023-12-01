class colors
{
public:
    double* customColor(double red, double green, double blue)
    {
        double color[3];
        color[0] = red;
        color[1] = green;
        color[2] = blue;

        return color;
    }
    double* red() 
    {
        static double color[3];
        color[0] = 1;
        color[1] = 0;
        color[2] = 0;

        return color;
    }
private:

};
