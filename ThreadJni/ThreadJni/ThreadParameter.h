#ifndef _THREADPARAMETER_H_
#define _THREADPARAMETER_H_

#include <iostream>
class ThreadParameter
{
private:
	const char* applicationName ;
	const char* cmdLine;
public:
	ThreadParameter(const char* appName=NULL,const char*cmdLine=NULL) ;
	const char* GetApplicationName() const;
	const char* GetCmdLine() const ;
};
#endif