#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

/*function... might want it in some class?*/
// int getdir (string dir, vector<string> &files)
// {
//     DIR *dp;
//     struct dirent *dirp;
//     if((dp = opendir(dir.c_str())) == NULL) {
//         cout << "Error(" << errno << ") opening " << dir << endl;
//         return errno;
//     }

//     while ((dirp = readdir(dp)) != NULL) {
//         files.push_back(string(dirp->d_name));
//     }
//     closedir(dp);
//     return 0;
// }

// int main()
// {

//     string dir = string(".");
//     vector<string> files = vector<string>();

//     getdir(dir,files);

//     for (unsigned int i = 0;i < files.size();i++) {
//         cout << files[i] << endl;
//     }
//     return 0;
// }
int getdir(string dir, vector<string> &files)
{
    DIR *directory;
    struct dirent *ddirectory;
    if ((directory = opendir(dir.c_str())) == NULL)
    {
        cout << "Error" << endl;
        return errno;
    }

    while ((ddirectory = readdir(directory)) != NULL)
    {
        files.push_back(ddirectory->d_name);
    }
    closedir(directory);
    return 0;
}


int main()
{
    string dir = ".";
    vector<string> files;

    getdir(dir, files);

    for (int i = 0; i < files.size(); i++)
    {
        cout << files[i] << endl;
    }
    return 0;
}








