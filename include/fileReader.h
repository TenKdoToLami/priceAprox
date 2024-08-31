#ifndef FILE_READER_H
#define FILE_READER_H


#define PATH_TO_INPUT_DATA "inputData"


#include <filesystem>
#include <string>
#include <vector>


class fileReader
{
private:

public:
    std::vector < std::string > inputFiles;

    fileReader() = default;

    ~fileReader() = default;


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
    void GetAllFilesInData();



};


#endif // FILE_READER_H