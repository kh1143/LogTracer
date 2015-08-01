/*
 * CLogTracerTrace.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Andrew Heebum Kwak
 *      Email : kh-1143@hanmail.net
 */

#pragma once

#include "LogTracerImpl.h"

namespace LogTracer
{

class CLogTracerTrace : public CLogTracer
{
public:
    CLogTracerTrace();
    virtual ~CLogTracerTrace();

public:
    static CLogTracerTrace &GetInstance()
    {
        static CLogTracerTrace self;
        return self;
    }

};

}