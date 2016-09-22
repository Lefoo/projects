#include <ctype.h>
#include <iostream>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "Too few arguments" << "\n";
    }
    else if (argc == 3)
    {
        int from = atoi(argv[1]);
        int to = atoi(argv[2]);
        int sum;
        sum = 0;
        for (int i = from; i <= to; i++)
        {
            sum = sum + i;
        }
        std::cout << "Sum from " << from << " to " << to << " is " << sum << "\n";
        return sum;
    }
    else if (argc > 2)
    {
        std::cout << "Too many arguments" << "\n";
    }
    return 0;
}
