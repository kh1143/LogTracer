/*
 * LogTracer.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Andrew Heebum Kwak
 *      Email : kh-1143@hanmail.net
 */

#include "impl/LogTracerAssert.h"

namespace LogTracer
{

CLogTracerAssert::CLogTracerAssert()
{
    // TODO Auto-generated constructor stub

}

CLogTracerAssert::~CLogTracerAssert()
{
    // TODO Auto-generated destructor stub
}

void CLogTracerAssert::operator()(const char *format, ...)
{

}

CLogTracer& CLogTracerAssert::operator<<(bool s)
{
	return *this;
}
CLogTracer& CLogTracerAssert::operator<<(char s)
{
	return *this;
}
CLogTracer& CLogTracerAssert::operator<<(signed short s)
{
	return *this;
}
CLogTracer& CLogTracerAssert::operator<<(unsigned short s)
{
	return *this;
}
CLogTracer& CLogTracerAssert::operator<<(signed int s)
{
	return *this;
}
CLogTracer& CLogTracerAssert::operator<<(unsigned int s)
{
	return *this;
}
CLogTracer& CLogTracerAssert::operator<<(signed long long s)
{
	return *this;
}
CLogTracer& CLogTracerAssert::operator<<(unsigned long long s)
{
	return *this;
}
CLogTracer& CLogTracerAssert::operator<<(float s)
{
	return *this;
}
CLogTracer& CLogTracerAssert::operator<<(double s)
{
	return *this;
}
CLogTracer& CLogTracerAssert::operator<<(const char *s)
{
	return *this;
}
CLogTracer& CLogTracerAssert::operator<<(std::string& s)
{
    printf( "stream: %s\n", s.c_str() );

    return *this;
}

}
