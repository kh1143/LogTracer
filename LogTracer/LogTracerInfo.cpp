/*
 * LogTracer.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Andrew Heebum Kwak
 *      Email : kh-1143@hanmail.net
 */

#include "impl/LogTracerInfo.h"

namespace LogTracer
{

CLogTracerInfo::CLogTracerInfo()
{
    // TODO Auto-generated constructor stub

}

CLogTracerInfo::~CLogTracerInfo()
{
    // TODO Auto-generated destructor stub
}

void CLogTracerInfo::operator()(const char *format, ...)
{

}

CLogTracer& CLogTracerInfo::operator<<(bool s)
{
	return *this;
}
CLogTracer& CLogTracerInfo::operator<<(char s)
{
	return *this;
}
CLogTracer& CLogTracerInfo::operator<<(signed short s)
{
	return *this;
}
CLogTracer& CLogTracerInfo::operator<<(unsigned short s)
{
	return *this;
}
CLogTracer& CLogTracerInfo::operator<<(signed int s)
{
	return *this;
}
CLogTracer& CLogTracerInfo::operator<<(unsigned int s)
{
	return *this;
}
CLogTracer& CLogTracerInfo::operator<<(signed long long s)
{
	return *this;
}
CLogTracer& CLogTracerInfo::operator<<(unsigned long long s)
{
	return *this;
}
CLogTracer& CLogTracerInfo::operator<<(float s)
{
	return *this;
}
CLogTracer& CLogTracerInfo::operator<<(double s)
{
	return *this;
}
CLogTracer& CLogTracerInfo::operator<<(const char *s)
{
	return *this;
}
CLogTracer& CLogTracerInfo::operator<<(std::string& s)
{
    printf( "stream: %s\n", s.c_str() );

    return *this;
}

}
