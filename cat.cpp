/*
Recreate the cat command in linux systems
cat outputs the contents of a file to the command line
3/24/2019
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream infile;
    char text;
    //argv[0] = name of program(./cat)
    //Check to see if we have a file to output
    if (argc <= 1)
    {
        cout << "Error: No argument file to output" << endl;
        return 1;
    }

    infile.open(argv[1]);

    //Check to see if the file is open correctly
    //and that we havent reached end of file
    if (infile.is_open())
    {
        while (infile.get(text) && !infile.eof())
        {
            cout << text;
        }
    }
    else
    {
        cout << "File doesnt exist: " << argv[1] << endl;
        return 1;
    }


    infile.close();

    return 0;
}

