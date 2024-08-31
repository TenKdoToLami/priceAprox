#include <iostream>

#include <fstream>
#include <filesystem>

#include <string>
#include <vector>
#define PATH_TO_INPUT_DATA "inputData"



/**
 * @brief Function to list all csv files in a specified directory.
 *
 * This function uses the C++17 filesystem library to iterate through all entries in a given directory.
 * It filters out non-regular files and returns a vector of their filenames.
 *
 * @param PATH_TO_INPUT_DATA The path to the directory to be scanned.
 *
 * @return A vector of strings, where each string is the filename of a regular file found in the specified directory.
 */
std::vector <std::string> ListAllFilesInData()
{
    std::vector <std::string> result;

    for (const auto & entry : std::filesystem::directory_iterator(PATH_TO_INPUT_DATA))
    {
        if (entry.is_regular_file() && entry.path().extension() == ".csv")
        {
            result.emplace_back( entry.path().filename() );
        }
    }

    return result;
}



int main(int argc, char const *argv[])
{

    const std::vector <std::string> files = ListAllFilesInData();





    return EXIT_SUCCESS;
}
