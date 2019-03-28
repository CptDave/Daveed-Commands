//Download Speed
//Take download speed, and size of file you want to download, output time it will take

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const string WELCOME = string("Enter download speed in ");
const string DOWNLOAD = string("Enter download file size in ");
const string MB = string("mb/s");
const string KB = string("kb/s");
const string GB = string("gb/s");
const float num = 1024;

int main()
{
    float speed, fsize;
    float dltokb, speedtokb;
    float secondsToDL;
    string data, ddata;

    //Get download speed
    cout << "1. Kilobytes" << endl << "2. Megabytes" << endl << "3. Gigabytes" << endl;
    cout << "Choose speed size: ";
    cin >> speed;
    switch ((int) speed)
    {
        case 1:
            data = KB;
            break;
        case 2:
            data = MB;
            break;
        case 3:
            data = GB;
            break;
        default:
            break;
    }
    cout << WELCOME << data << ": ";
    cin >> speed;
    cout << "You entered: " << speed << data << endl << endl;

    //get file size
    cout << "1. Kilobytes" << endl << "2. Megabytes" << endl << "3. Gigabytes" << endl;
    cout << "Choose download size: ";
    cin >> fsize;
    switch ((int) fsize)
    {
        case 1:
            ddata = KB;
            break;
        case 2:
            ddata = MB;
            break;
        case 3:
            ddata = GB;
            break;
        default:
            break;
    }
    cout << DOWNLOAD << ddata << ": ";
    cin >> fsize;
    cout << "You entered " << fsize << ddata << endl;

    //Convert
    if (data == GB)
    {
        speed = speed * num * num;
    }
    if (data == MB)
    {
        speed *= num;
    }

    if (ddata == GB)
    {
        fsize = fsize * num * num;
    }
    if (ddata == MB)
    {
        fsize *= num;
    }

    //Display
    secondsToDL = fsize / speed;
    cout << "It will take " << fixed << setprecision(1) << secondsToDL << setprecision(1) << " seconds to download " << fsize << "kb/s at " << speed << "kb/s" << endl;
}