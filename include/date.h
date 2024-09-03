#ifndef DATE_H
#define DATE_H


struct Date
{
    int day;
    int month;
    int year;

    /**
     * @brief Constructor for the Date class.
     *
     * Initializes a Date object with the provided day, month, and year.
     * Expects valid date format
     *
     * @param _day The day of the month (1-31).
     * @param _month The month of the year (1-12).
     * @param _year The year.
     *
     * @return No return value.
     */
    Date(int day, int month, int year);


    /**
     * @brief Overloads the assignment operator for the Date class.
     *
     * This operator copies the values of the day, month, and year from the 'other' Date object to the current Date object.
     *
     * @param other The Date object from which to copy the values.
     * @return A reference to the current Date object after the assignment.
     */
    Date & operator = (const Date & other);
};


#endif // FILE_READER_H