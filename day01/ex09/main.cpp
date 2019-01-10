//
// Created by Dmitry ZABROTSKY on 2019-01-10.
//

#include "Logger.hpp"

int main()
{
	Logger logger;
	logger.log("console", "some awesome and helpfull log!");
	logger.setFilename("Logfile");
	logger.log("file", "some awesome and helpfull log!");
	logger.log("file", "some awesome and helpfull BLOG!");
}