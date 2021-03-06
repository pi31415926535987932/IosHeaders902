/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DuetPLLConfigLogger/DuetPLLConfigLogger-Structs.h>
@class NSObject, NSFileManager, NSString, NSMutableArray;

@interface DuetLogger : NSObject {

	asl_object_sRef log_client;
	asl_object_sRef log_msg;
	BOOL canWriteToFile;
	BOOL firstTime;
	NSObject*<OS_dispatch_queue> logQueue;
	int fd;
	NSFileManager* fileMgr;
	NSString* binaryName;
	NSString* filePath;
	NSString* fileName;
	NSString* homeDir;
	NSString* logState;
	NSMutableArray* duetLoggerSource;

}

@property (nonatomic,readonly) BOOL canWriteToFile; 
+(id)instance:(int)arg1 ;
+(id)instance;
-(void)dealloc;
-(void)setLoggingMode:(BOOL)arg1 ;
-(void)dumpAllLogs;
-(id)init:(id)arg1 withState:(id)arg2 ;
-(id)getUniqueFileName;
-(id)getHumanReadableTimeStamp;
-(void)createFile;
-(id)getTimeStamp;
-(void)logToFile:(id)arg1 ;
-(void)logToFileCString:(char*)arg1 ;
-(void)logToFileCStringSimpleDebug:(char*)arg1 ;
-(BOOL)canWriteToFile;
-(void)addDataSource:(id)arg1 ;
@end

