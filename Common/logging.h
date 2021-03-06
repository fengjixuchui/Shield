//
//  file: logging.h
//  project: BlockBlock (shared)
//  description: logging functions (header)
//
//  created by Patrick Wardle
//  copyright (c) 2017 Objective-See. All rights reserved.
//

#ifndef Logging_h
#define Logging_h

#import <syslog.h>

@import Cocoa;
@import Foundation;

//log a msg to syslog
// also disk, if error
void logMsg(int level, NSString* msg);

//prep/open log file
BOOL initLogging(NSString* logPath);

//get path to log file
NSString* logFilePath(int user);

//de-init logging
void deinitLogging(void);

//log to file
void log2File(NSString* msg);

void setLoggingUser(int i);

#endif
