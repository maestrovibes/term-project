#include <iostream>
#include <fstream> // To use ifstream
#include <sstream>
#include <string>
using namespace std;

int main()
{
    ifstream infile;
int array[1000];
int i=0;
char cNum[20] ;
                infile.open ("1000Random.txt", ifstream::in);
                if (infile.is_open())
                {
                        while (infile.good())
                        {
                                infile.getline(cNum, 256, ',');
                                array[i]= atoi(cNum) ;
                                i++ ;
                        }


                        infile.close();
                }
                else
                {
                        cout << "Error opening file";
                }

                for(int i=0;i<1000;i++)
                {
                    cout<<array[i]<<",";
                }

    return 0;
}
