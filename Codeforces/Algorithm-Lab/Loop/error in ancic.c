#define pI 3.14159
main()
{
    int PI,R,C;
    float perimeter;
    float area;
    C=PI;
    R=5;
    perimeter = 2*C*R;
    area =C*R*R;
    printf(" %.2f\n%.3f",area,perimeter);
}
