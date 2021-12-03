/**
 * @file programme.cc
 * @author Alexander Gibbs
 * @date 2 Dec 2021
 * @brief Program that count lines and characters of txt file
 */
using namespace std;
#include<iostream>
#include<fstream>
#include<string>

size_t countChar(string linein);
int countLine(string linein);

/** @brief Main function loads in file and tests functions
 */
int main(int argc, char** argv)
{
    countLine("Ohio University");
    countChar("Athens");
    ifstream t(argv[1]);
    string str((istreambuf_iterator<char>(t)),
                istreambuf_iterator<char>());
    countLine(str);
    countChar(str);
}

/** @brief Counts the number of lines that a string takes up
 *  @param linein The string to be analyzed
 *  @return Number of lines in the string
 */
int countLine(string linein)
{
    int linecount = 1;
    for(size_t i=0; i<linein.size(); i++)
    {
        if(linein[i] == '\n')
        {
            linecount++;
        }
    }
    cout << linecount << " Lines" << endl;
    return linecount;
}

/** @brief Counts the number of characters in a string
 *  @param linein The string to be analyzed
 *  @return Number of characters in the string
 */
size_t countChar(string linein)
{
    size_t charcount = linein.size();
    cout << charcount << " Characters" << endl;
    return charcount;
}