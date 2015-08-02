/*
 * LogTracer.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Andrew Heebum Kwak
 *      Email : kh-1143@hanmail.net
 */

#include "impl/LogTracerTrace.h"

namespace LogTracer
{

CLogTracerTrace::CLogTracerTrace()
{
    // TODO Auto-generated constructor stub

}

CLogTracerTrace::~CLogTracerTrace()
{
    // TODO Auto-generated destructor stub
}

void CLogTracerTrace::operator()(const char *format, ...)
{

}

CLogTracer& CLogTracerTrace::operator<<(bool s)
{
	return *this;
}
CLogTracer& CLogTracerTrace::operator<<(char s)
{
	return *this;
}
CLogTracer& CLogTracerTrace::operator<<(signed short s)
{
	return *this;
}
CLogTracer& CLogTracerTrace::operator<<(unsigned short s)
{
	return *this;
}
CLogTracer& CLogTracerTrace::operator<<(signed int s)
{
	return *this;
}
CLogTracer& CLogTracerTrace::operator<<(unsigned int s)
{
	return *this;
}
CLogTracer& CLogTracerTrace::operator<<(signed long long s)
{
	return *this;
}
CLogTracer& CLogTracerTrace::operator<<(unsigned long long s)
{
	return *this;
}
CLogTracer& CLogTracerTrace::operator<<(float s)
{
	return *this;
}
CLogTracer& CLogTracerTrace::operator<<(double s)
{
	return *this;
}
CLogTracer& CLogTracerTrace::operator<<(const char *s)
{
	return *this;
}
CLogTracer& CLogTracerTrace::operator<<(std::string& s)
{
    printf( "stream: %s\n", s.c_str() );

    return *this;
}

}
