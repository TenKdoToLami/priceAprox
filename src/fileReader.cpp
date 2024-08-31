#include "fileReader.h"

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
