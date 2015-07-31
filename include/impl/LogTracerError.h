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
private:


public:
    CLogTracerError();
    virtual ~CLogTracerError();

public:
    static CLogTracerError &GetInstance()
    {
        static CLogTracerError self;
        return self;
    }

    virtual void operator()(std::string s);
    virtual CLogTracerError& operator<<(std::string s);
};

}
