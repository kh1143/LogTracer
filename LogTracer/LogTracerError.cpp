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

#include "LogTracerError.h"

namespace LogTracer
{

CLogTracerError::CLogTracerError(std::string fmt)
{
    // TODO Auto-generated constructor stub
    m_szMessage = fmt.c_str();
}

CLogTracerError::~CLogTracerError()
{
    // TODO Auto-generated destructor stub
}

void CLogTracerError::operator()(std::string s)
{
    char * szTemp;
    snprintf( szTemp, 64, m_szMessage, s.c_str() );
    printf( "%s\n", s.c_str() );
}

}
