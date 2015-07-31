/*
 * LogTracer.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Andrew Heebum Kwak
 *      Email : kh-1143@hanmail.net
 */

#pragma once


#include "LogTracerImpl.h"

// LogTracer Main API
#define LOG_TRACE       CLogTracerTrace
#define LOG_INFO        CLogTracerInfo
#define LOG_WARNING     CLogTracerWarning
#define LOG_ERROR       LogTracer::CLogTracerError::GetInstance()
#define LOG_ASSERT      CLogTracerAssert


#ifdef _DEBUG
#define DLOG_TRACE      LOG_TRACE
#define DLOG_INFO       LOG_INFO
#define DLOG_WARNING    LOG_WARNING
#define DLOG_ERROR      LOG_ERROR
#define DLOG_ASSERT     LOG_ASSERT
#else
#define DLOG_TRACE      ( (void)0 )
#define DLOG_INFO       ( (void)0 )
#define DLOG_WARNING    ( (void)0 )
#define DLOG_ERROR      ( (void)0 )
#define DLOG_ASSERT     ( (void)0 )
#endif

