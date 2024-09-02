/**
 * @file fileReader.h
 * @brief This file contains the declaration of the fileReader class.
 *
 * The fileReader class is responsible for reading input files and processing their data.
 * It uses the C++17 filesystem library to list all CSV files in a specified directory and reads data from each file.
 */

#ifndef FILE_READER_H
#define FILE_READER_H


#define PATH_TO_INPUT_DATA "inputData"


#include <filesystem>
#include <fstream>
#include <string>
#include <vector>
#include <iostream>


#include "lineFormat.h"


class fileReader
{
private:

public:
    std::vector < std::string > inputFiles;


    fileReader() = default;


    ~fileReader() = default;


    /**
     * @brief The main control function of the fileReader class.//+
     *
     * This function orchestrates the reading of input files and performs necessary operations.
     * It calls the GetAllFilesInData function to retrieve a list of input files, and then processes each file as required.
     *
     * @return void This function does not return any value.//+
     */
    void Control();


    /**
     * @brief Function to list all csv files in a specified directory.
     *
     * This function uses the C++17 filesystem library to iterate through all entries in a given directory.
     * It filters out non-regular files and returns a vector of their filenames.
     *
     * @param PATH_TO_INPUT_DATA The path to the directory to be scanned.
     *
     * @return inputFiles A vector of strings, where each string is the filename of a regular file found in the specified directory.
     */
    void GetAllFilesInData();


    void ReadDataFromFile(std::ifstream &CSVFile);


};


#endif // FILE_READER_H