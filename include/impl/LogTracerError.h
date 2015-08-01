/*
 * LogTracer.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Andrew Heebum Kwak
 *      Email : kh-1143@hanmail.net
 */

#pragma once

#include "LogTracerImpl.h"

namespace LogTracer
{

class CLogTracerError : public CLogTracer
{
public:
    CLogTracerError();
    virtual ~CLogTracerError();

public:
    static CLogTracerError &GetInstance()
    {
        static CLogTracerError self;
        return self;
    }

    virtual void operator()(const char *format, ...);
    
    virtual CLogTracer& operator<<(bool s);
    virtual CLogTracer& operator<<(char s);
    virtual CLogTracer& operator<<(signed short s);
    virtual CLogTracer& operator<<(unsigned short s);
    virtual CLogTracer& operator<<(signed int s);
    virtual CLogTracer& operator<<(unsigned int s);
    virtual CLogTracer& operator<<(signed long long s);
    virtual CLogTracer& operator<<(unsigned long long s);
    virtual CLogTracer& operator<<(float s);
    virtual CLogTracer& operator<<(double s);
    virtual CLogTracer& operator<<(const char *s);
    virtual CLogTracer& operator<<(std::string& s);
};

}
