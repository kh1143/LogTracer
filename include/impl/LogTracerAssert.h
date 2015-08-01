<<<<<<< HEAD
/*	
=======
/*
>>>>>>> 4d63b97199f5312cab83191a6f933366431853b7
 * CLogTracerAssert.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Andrew Heebum Kwak
 *      Email : kh-1143@hanmail.net
 */

#pragma once

#include "LogTracerImpl.h"

namespace LogTracer
{

class CLogTracerAssert : public CLogTracer
{
public:
    CLogTracerAssert();
    virtual ~CLogTracerAssert();

public:
    static CLogTracerAssert &GetInstance()
    {
        static CLogTracerAssert self;
        return self;
    }

    virtual void operator()(const char *format, ...);
    
    virtual CLogTracerAssert& operator<<(bool s);
    virtual CLogTracerAssert& operator<<(char s);
    virtual CLogTracerAssert& operator<<(signed short s);
    virtual CLogTracerAssert& operator<<(unsigned short s);
    virtual CLogTracerAssert& operator<<(signed int s);
    virtual CLogTracerAssert& operator<<(unsigned int s);
    virtual CLogTracerAssert& operator<<(signed long long s);
    virtual CLogTracerAssert& operator<<(unsigned long long s);
    virtual CLogTracerAssert& operator<<(float s);
    virtual CLogTracerAssert& operator<<(double s);
    virtual CLogTracerAssert& operator<<(const char *s);
    virtual CLogTracerAssert& operator<<(std::string& s);
};

}