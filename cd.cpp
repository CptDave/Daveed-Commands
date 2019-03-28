#include <unistd.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char dir[50] = {'.', '.'};
    chdir(dir);
    cout << "hi" << endl;

    return 0;
}