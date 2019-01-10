//
// Created by Dmitry ZABROTSKY on 2019-01-10.
//

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <ctime>
#include <fstream>

class Logger {

private:
	std::string filename;

	void logToConsole(std::string const &msg);
	void logToFile(std::string const &msg);
	std::string makeLogEntry(std::string const &msg);

public:
	void setFilename(std::string name);
	void log(std::string const & dest, std::string const & message);

};


#endif
