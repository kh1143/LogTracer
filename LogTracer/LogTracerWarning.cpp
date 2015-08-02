/*
 * LogTracer.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Andrew Heebum Kwak
 *      Email : kh-1143@hanmail.net
 */

#include "impl/LogTracerWarning.h"

namespace LogTracer
{

CLogTracerWarning::CLogTracerWarning()
{
    // TODO Auto-generated constructor stub

}

CLogTracerWarning::~CLogTracerWarning()
{
    // TODO Auto-generated destructor stub
}

void CLogTracerWarning::operator()(const char *format, ...)
{

}

CLogTracer& CLogTracerWarning::operator<<(bool s)
{
	return *this;
}
CLogTracer& CLogTracerWarning::operator<<(char s)
{
	return *this;
}
CLogTracer& CLogTracerWarning::operator<<(signed short s)
{
	return *this;
}
CLogTracer& CLogTracerWarning::operator<<(unsigned short s)
{
	return *this;
}
CLogTracer& CLogTracerWarning::operator<<(signed int s)
{
	return *this;
}
CLogTracer& CLogTracerWarning::operator<<(unsigned int s)
{
	return *this;
}
CLogTracer& CLogTracerWarning::operator<<(signed long long s)
{
	return *this;
}
CLogTracer& CLogTracerWarning::operator<<(unsigned long long s)
{
	return *this;
}
CLogTracer& CLogTracerWarning::operator<<(float s)
{
	return *this;
}
CLogTracer& CLogTracerWarning::operator<<(double s)
{
	return *this;
}
CLogTracer& CLogTracerWarning::operator<<(const char *s)
{
	return *this;
}
CLogTracer& CLogTracerWarning::operator<<(std::string& s)
{
    printf( "stream: %s\n", s.c_str() );

    return *this;
}

}
