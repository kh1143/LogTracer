/*
 * LogTracer.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Andrew Heebum Kwak
 *      Email : kh-1143@hanmail.net
 */

#pragma once

#include "LogTracerImpl.h"

class CLogTracerInfo : public LogTracer::CLogTracer
{
public:
    CLogTracerInfo();
    virtual ~CLogTracerInfo();
};
