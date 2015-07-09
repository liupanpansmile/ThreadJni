#include "ThreadParameter.h"

ThreadParameter::ThreadParameter(const char* appName,const char*cmdLine)
{
	if(appName == NULL)
	{
		this->applicationName = "c://program files//internet explorer//iexplore.exe" ;
	}
	if(cmdLine == NULL)
	{
		this->cmdLine = "http://www.baidu.com" ;
	}
	this->applicationName = appName;
	this->cmdLine = cmdLine ;
}

const char* ThreadParameter::GetApplicationName() const
{
	return applicationName ;
}
const char* ThreadParameter::GetCmdLine() const
{
	return cmdLine ;
}