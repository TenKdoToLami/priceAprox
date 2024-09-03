/**
 * @file lineFormat.h
 * @brief This file contains the declaration of the lineFormat struct.
 *
 * The lineFormat struct is used to represent a single line of financial data from a CSV file.
 * It contains member variables for date, open, high, low, close, adjusted close, and volume.
 * The struct also includes a constructor to parse a CSV line and extract the data,
 * and a print function to display the data members.
 */


#ifndef LINE_FORMAT_H
#define LINE_FORMAT_H


#include <iostream>
#include <sstream>


/**
 * @brief The lineFormat struct represents a single line of financial data from a CSV file.
 */
struct lineFormat
{
    struct Date
    {
        int day;
        int month;
        int year;
    };

    Date date;
    long double open;
    long double high;
    long double low;
    long double close;
    long double adjClose;
    long long int volume;


    /**
     * @brief Constructor for lineFormat class. Parses a CSV line and extracts the data.
     *
     * This constructor takes a string representing a line from a CSV file and extracts the
     * date, open, high, low, close, adjusted close, and volume data. The data is stored in
     * the corresponding member variables.
     *
     * @param line A string representing a line from a CSV file. The line should be formatted
     * as follows: "date,open,high,low,close,adjClose,volume".
     *
     * @return Nothing. The constructor populates the member variables with the extracted data.
     */
    lineFormat(const std::string & line);


    /**
     * @brief Prints the data members of the lineFormat object to the standard output.
     *
     * This function prints the date, open, high, low, close, adjusted close, and volume
     * of a financial data entry to the standard output.
     *
     * @return void
     */
    void print() const;

    
};

#endif // LINE_FORMAT_H