#pragma once
#include <errno.h>
#include <io.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    char* duongDan = argv[2];
    char* ngrams = argv[4];
    char* k = argv[6];
    cout << k << endl;

    intptr_t handle;
    struct _finddata_t fileinfo;

    handle = _findfirst(duongDan, &fileinfo);
    if (handle == -1) {
        cout << strerror(errno);
        exit(1);
    }

    cout << fileinfo.name << endl;

    while (_findnext(handle, &fileinfo) == 0) {
        cout << fileinfo.name << endl;
    }

    _findclose(handle);
    return 0;
}
