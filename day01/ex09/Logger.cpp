//
// Created by Dmitry ZABROTSKY on 2019-01-10.
//

#include "Logger.hpp"

void Logger::logToConsole(std::string const &msg) {
	std::cout << msg << std::endl;
}

void Logger::logToFile(std::string const &msg) {
	std::ofstream file (filename, std::ofstream::app);

	if (!file.is_open())
	{
		std::cout << "Can`t open " << filename << std::endl;
		return ;
	}
	else
	{
		file << msg;
		file.close();
	}
}

std::string Logger::makeLogEntry(std::string const &msg) {
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [19];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	strftime (buffer, 19, "[%Y%m%d_%H%M%S] ", timeinfo);
	return buffer + msg + "\n";
}

void Logger::setFilename(std::string name) {
	filename = name;
	std::cout << "File with log will be named: " << filename << std::endl;
}

void Logger::log(std::string const &dest, std::string const &message) {
	std::string arr[] = {"console", "file"};
	void (Logger::* ptr[])(std::string const &msg) = {&Logger::logToConsole, &Logger::logToFile};

	for (int i = 0; i < 2; i++)
	{
		if (!dest.compare(arr[i]))
			(this->*(ptr[i]))(makeLogEntry(message));
	}
}
