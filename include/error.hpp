#ifndef _ERROR_HPP_
#define _ERROR_HPP_

#include <iostream>

#include <string>

namespace tzar
{
    /*!
     * Log an error onto std::cerr.
     * @param Value Error value to be logged.
     */
    template <typename T>
    void log_error (const T& Value);

    /*!
     * Log an error onto std::cerr.
     * @param Message Error message describing error value.
     * @param Value Error value to be logged.
     */
    template <typename T>
    void log_error (const std::string& Message, const T& Value);

    /*!
     * Log a message onto std::cerr.
     * @param Value Value to be logged.
     */
    template <typename T>
    void log_message (const T& Value);    

    /*!
     * Log a message onto std::cerr.
     * @param Message Message describing value.
     * @param Value Message to be logged.
     */
    template <typename T>
    void log_message (const std::string& Message, const T& Value);
}

#include "error.tpp"

#endif /* _ERROR_HPP_ */
