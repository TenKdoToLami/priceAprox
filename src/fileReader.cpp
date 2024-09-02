#include "fileReader.h"


void fileReader::Control()
{
    GetAllFilesInData();

    for (const std::string & fileName : inputFiles)
    {

        std::ifstream CSVFile(std::string(PATH_TO_INPUT_DATA) + "/" + fileName);
        
        if (!CSVFile.is_open())
        {
            std::cerr << "ERROR: Could not open" << fileName << std::endl;
            continue;
        }
        
        std::cerr << fileName << " opened" << std::endl;

        ReadDataFromFile(CSVFile);


    }

    return;
}


void fileReader::GetAllFilesInData()
{

    for (const auto & entry : std::filesystem::directory_iterator(PATH_TO_INPUT_DATA))
    {
        if (entry.is_regular_file() && entry.path().extension() == ".csv")
        {
            inputFiles.emplace_back( entry.path().filename() );
        }
    }


    return;
}

void fileReader::ReadDataFromFile(std::ifstream &CSVFile)
{
    std::string line;

    // Discards first line with column descriptions
    if (CSVFile.is_open())
        getline(CSVFile,line);

    while (CSVFile.is_open() && getline(CSVFile,line))
    {
        getline(CSVFile,line);
        lineFormat format(line);
        //  Debugging purposes only
        //  format.print();
    }

    return;
}
