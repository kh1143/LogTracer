/*
 * LogTracer.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Andrew Heebum Kwak
 *      Email : kh-1143@hanmail.net
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>

#include "impl/LogTracerError.h"

namespace LogTracer
{

CLogTracerError::CLogTracerError()
{
    // TODO Auto-generated constructor stub
}

CLogTracerError::~CLogTracerError()
{
    // TODO Auto-generated destructor stub
}

void CLogTracerError::operator()(const char *format, ...)
{

}

CLogTracer& CLogTracerError::operator<<(bool s)
{
	return *this;
}
CLogTracer& CLogTracerError::operator<<(char s)
{
	return *this;
}
CLogTracer& CLogTracerError::operator<<(signed short s)
{
	return *this;
}
CLogTracer& CLogTracerError::operator<<(unsigned short s)
{
	return *this;
}
CLogTracer& CLogTracerError::operator<<(signed int s)
{
	return *this;
}
CLogTracer& CLogTracerError::operator<<(unsigned int s)
{
	return *this;
}
CLogTracer& CLogTracerError::operator<<(signed long long s)
{
	return *this;
}
CLogTracer& CLogTracerError::operator<<(unsigned long long s)
{
	return *this;
}
CLogTracer& CLogTracerError::operator<<(float s)
{
	return *this;
}
CLogTracer& CLogTracerError::operator<<(double s)
{
	return *this;
}
CLogTracer& CLogTracerError::operator<<(const char *s)
{
	return *this;
}
CLogTracer& CLogTracerError::operator<<(std::string& s)
{
    printf( "stream: %s\n", s.c_str() );

    return *this;
}

}
