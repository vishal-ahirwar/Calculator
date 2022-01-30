// copyright(c)2021 vishal ahirwar.
#include <iostream>
#include <cstring>
double Do(const double &f1, const double &f2, char &c);
int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        std::cout << R"**(
            Usage :
                ./cal num1 + num2
            type help for more info.
            copyright(c)2022 vishal ahirwar.)**"
                  << "\n";
        return -1;
    };
    std::cerr << "Your Expresion : ";
    for (short int i{1}; i < argc; ++i)
    {
        std::cerr << " " << argv[i];
    };
    double f_num{atof(argv[1])}, s_num{atof(argv[3])};
    const char *op{argv[2]};
    char c{};

    if ((std::strlen(op) == 1) && (op[0] == '+' || op[0] == '-' || op[0] == '/' || op[0] == '*' || op[0] == 'x'))
    {
        c = op[0];
    }
    else
    {
        std::cout << R"**(\nInvalid Expresion action must be +,-,/,*\n)**";
        return -1;
    };
    std::cerr << " :=> " << Do(f_num, s_num, c);
    std::cerr << "\n";

    return 0;
};
double Do(const double &f1, const double &f2, char &c)
{
    switch (c)
    {
    case '+':
        return f1 + f2;
    case '-':
        return f1 - f2;
    case '/':
        return f1 / f2;
    case '*' || 'x':
        return f1 * f2;
    case '%':
        return int(f1) % int(f2);
    default:
        return 0.0;
    };
};
