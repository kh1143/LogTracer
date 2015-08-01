/*
 * CLogTracerInfo.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Andrew Heebum Kwak
 *      Email : kh-1143@hanmail.net
 */

#pragma once

#include "LogTracerImpl.h"

namespace LogTracer
{

class CLogTracerInfo : public CLogTracer
{
public:
    CLogTracerInfo();
    virtual ~CLogTracerInfo();

public:
    static CLogTracerInfo &GetInstance()
    {
        static CLogTracerInfo self;
        return self;
    }
};

}