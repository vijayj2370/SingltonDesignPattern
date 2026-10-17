#include "logger.h"

Logger  *Logger::loggerInstance = nullptr;

mutex Logger::mtx;

Logger::Logger() {
	cout << "New instance created" << endl;
}


void Logger::log(string msg) {
	cout << msg << endl;
}


Logger *Logger::getLogger() {
	if (loggerInstance == nullptr) {
		mtx.lock();
	
	if (loggerInstance == nullptr) {
		loggerInstance = new Logger();
	}
	mtx.unlock();
	}
	return loggerInstance;
}



