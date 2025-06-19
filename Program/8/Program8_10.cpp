#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

void openinput(ifstream&);
void openoutput(ofstream&);
double pollenUpdate(ifstream&,ofstream&);

int main()
{
    ifstream infile;
    ofstream outfile;
    double average;

    cout << endl << endl << "This program reads the old pollen count file, "
         << "creates a current pollen"
         << endl << "count file, and calculates and displays"
         << "the latest 10-week average.";
    openinput(infile);
    openoutput(outfile);
    average = pollenUpdate(infile,outfile);
    cout << endl << "The new 10-week average is: " << average << endl;
    return 0;
}

void openinput(ifstream& fname)
{
    string filename;
    cout << endl << endl << "Enter the input pollen count filename: ";
    cin >> filename;
    fname.open(filename.c_str());
    if (fname.fail())
    {
        cout << endl << "Failed to open the file named " << filename << "for input"
             << endl << "Please check that this file exists" << endl;
        exit(1);
    }
    return;
}

void openoutput(ofstream& fname)
{
    string filename;
    cout << "Enter the output pollen count filename: ";
    cin >> filename;
    fname.open(filename.c_str());
    if (fname.fail())
    {
        cout << endl << "Failed to open the file named " << filename << "for input"
             << endl << "Please check that this file exists" << endl;
        exit(1);
    }
    return;
}

double pollenUpdate(ifstream& infile, ofstream& outfile)
{
    const int POLNUMS = 10;
    int i, polreading;
    int oldreading, newcount;
    double sum = 0;
    double average;
    cout << "Enter the latest pollen count reading: ";
    cin >> newcount;
    infile >> oldreading;

    for (i = 1; i < POLNUMS ; i++)
    {
        infile >> polreading;
        sum += polreading;
        outfile << polreading << endl;
    }

    outfile << newcount << endl;
    average = (sum+newcount) / double(POLNUMS);
    infile.close();
    outfile.close();
    cout << endl << "The output file has been written." << endl;
    return average;
}