#include "lineFormat.h"

lineFormat::lineFormat(const std::string & line)
{
    std::istringstream ss(line);

    ss >> date.year;    // Read the next number (open year)
    ss.ignore();   // Ignore the dash

    ss >> date.month;    // Read the next number (open month)
    ss.ignore();   // Ignore the dash
    
    ss >> date.day;    // Read the next number (open day)
    ss.ignore();   // Ignore the comma

    ss >> open;    // Read the next number (open price)
    ss.ignore();   // Ignore the comma

    ss >> high;    // Read the next number (high price)
    ss.ignore();   // Ignore the comma
    
    ss >> low;     // Read the next number (low price)
    ss.ignore();   // Ignore the comma
    
    ss >> close;   // Read the next number (close price)
    ss.ignore();   // Ignore the comma

    ss >> adjClose;// Read the next number (adjusted close price)
    ss.ignore();   // Ignore the comma

    ss >> volume;  // Read the volume (integer part)

    return;
}


void lineFormat::print() const
{
    std::cout << "Date: " << date.day << "." << date.month << "." << date.year << std::endl;
    std::cout << "Open: " << open << std::endl;
    std::cout << "High: " << high << std::endl;
    std::cout << "Low: " << low << std::endl;
    std::cout << "Close: " << close << std::endl;
    std::cout << "AdjClose: " << adjClose << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    return;
}