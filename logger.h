#pragma once
#include<iostream>
#include <mutex>
using namespace std;


class Logger
{
private:
	static Logger* loggerInstance;
	Logger();
	Logger(const Logger&);
	Logger operator=(const Logger&)=delete;
	static std::mutex mtx;

public:
	static Logger* getLogger();
	void log(string str);
};

