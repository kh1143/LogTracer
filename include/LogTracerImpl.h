/*
 * LogTracer.h
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


public:
    CLogTracer();
    virtual ~CLogTracer();

public:
    void Initialize();

//    virtual void operator()(std::string s);

//    template<typename T>
//    std::ostream& operator<<(T n);

//    virtual CLogTracer& operator<<(int s);
    // TODO
    // Template 특수화를 이용하여, Plugin의 타입 사용할수 있게 만들기
    // template<>
    // std::ostream& operator<<<TYPE>(TYPE t);
};


class CLogTracerError : public CLogTracer
{
private:
    const char *m_szMessage;
public:
    CLogTracerError(std::string fmt);
    virtual ~CLogTracerError();

public:
    virtual void operator()(std::string s);
};

}

