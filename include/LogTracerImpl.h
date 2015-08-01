/*
 * LogTracerImpl.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Andrew Heebum Kwak
 *      Email : kh-1143@hanmail.net
 */

#pragma once

#include <iostream>

namespace LogTracer
{

enum LOG_LEVEL
{
    LV_TRACE = 0,
    LV_INFO,
    LV_WARNING,
    LV_ERROR,
    LV_ASSERT,

    // Always placed on last
    LV_TOTAL
};

class CLogTracer
{
private:
    static bool m_bInit;

    //TODO 나중에 더욱 효율을 높이기 위해, std::string 대신 const char* 등을 이용한다.
    static std::string m_strName;
    static std::string m_strPath;
    static std::string m_strStream;

public:
    CLogTracer();
    virtual ~CLogTracer();

public:
    static void Initialize();

    virtual void operator()(const char *format, ...) = 0;
    
    virtual CLogTracer& operator<<(bool s) = 0;
    virtual CLogTracer& operator<<(char s) = 0;
    virtual CLogTracer& operator<<(signed short s) = 0;
    virtual CLogTracer& operator<<(unsigned short s) = 0;
    virtual CLogTracer& operator<<(signed int s) = 0;
    virtual CLogTracer& operator<<(unsigned int s) = 0;
    virtual CLogTracer& operator<<(signed long long s) = 0;
    virtual CLogTracer& operator<<(unsigned long long s) = 0;
    virtual CLogTracer& operator<<(float s) = 0;
    virtual CLogTracer& operator<<(double s) = 0;
    virtual CLogTracer& operator<<(const char *s) = 0;
    virtual CLogTracer& operator<<(std::string& s) = 0;

    //TODO Type을 Plugin화 해서 붙일 수 있다.
    //virtual CLogTracer& operator<<(CPluginType& s) = 0;

protected:
    int PrintToFile(std::string message);
    int PrintToConsloe(std::string message);

};

}

#include "impl/LogTracerTrace.h"
#include "impl/LogTracerInfo.h"
#include "impl/LogTracerWarning.h"
#include "impl/LogTracerError.h"
#include "impl/LogTracerAssert.h"
