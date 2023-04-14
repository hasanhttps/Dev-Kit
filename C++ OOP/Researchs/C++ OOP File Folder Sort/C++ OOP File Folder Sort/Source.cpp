#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
// #define int long long
using namespace std;
// Comparator function is made to sort the
// in incresing order
bool comparator(pair<string, int> file1, pair<string, int> file2) {
    return file1.first > file2.first;
}
vector<pair<string, int>> sortFiles(string path) {
    // make the vector of pair to hold the name and size of the file
    vector<pair<string, int>> file_data;
    string fname = path + "\\*.*";
    WIN32_FIND_DATA data;
    HANDLE h = FindFirstFile(LPCWSTR(fname.c_str()), &data);
    bool present = FindNextFile(h, &data); // check if the any file present in the folder or not
    // This while loop will check for all the files in the folder
    while (FindNextFile(h, &data)) {
        __int64 total_size; // store the size of the file
        string file_name = ""; // store the name of the file
        LARGE_INTEGER sz;
        // what we get here is the file size.
        // file sizes can be larger than 2 gigs therefore the size is written as two objects of DWORD type.
        // they combine to make 64 bit integer values.
        sz.LowPart = data.nFileSizeLow;
        sz.HighPart = data.nFileSizeHigh;
        total_size = sz.QuadPart;
        file_name = data.dwFileAttributes;
        file_data.push_back({ file_name, total_size });
    }
    return file_data;
}
int main()
{
    vector<pair<string, int>> files;
    string path = "C:\\Users\\Public\\Public Documents\\Hesen"; // enter the path here
    files = sortFiles(path);
    // Now sort files using comparator function
    // comparator function will sort the values according to size of the file.
    sort(files.begin(), files.end(), comparator);
    // print the files name with their sizes in ascending order.
    for (int i = 0; i < files.size(); i++) {
        cout << files[i].first << "            " << (float)files[i].second / 1024 << "KB" << endl;
    }

}