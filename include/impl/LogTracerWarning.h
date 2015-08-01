/*
 * CLogTracerWarning.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Andrew Heebum Kwak
 *      Email : kh-1143@hanmail.net
 */

#pragma once

#include "LogTracerImpl.h"

namespace LogTracer
{

class CLogTracerWarning : public CLogTracer
{
public:
    CLogTracerWarning();
    virtual ~CLogTracerWarning();

public:
    static CLogTracerWarning &GetInstance()
    {
        static CLogTracerWarning self;
        return self;
    }
};

}