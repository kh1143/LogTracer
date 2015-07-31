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

void CLogTracerError::operator()(std::string s)
{
    printf( "func: %s\n", s.c_str() );
}

CLogTracerError& CLogTracerError::operator<<(std::string s)
{
    printf( "stream: %s\n", s.c_str() );

    return *this;
}


}
