/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <useractivityd/useractivityd-Structs.h>
#import <useractivityd/UACornerActionItemConnectorProtocol.h>

@class UACornerActionManager, NSURL, NSDate, NSString;

@interface UADebugLoggingConnector : NSObject <UACornerActionItemConnectorProtocol> {

	_sFILE* _file;
	NSURL* loggingFileURL;
	char paused;
	NSDate* lastLogEntryTime;
	UACornerActionManager* _cornerActionManager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) UACornerActionManager * cornerActionManager;              //@synthesize cornerActionManager=_cornerActionManager - In the implementation block
-(id)initWithManager:(id)arg1 path:(id)arg2 ;
-(void)logTimeDelta;
-(char)acceptsItem:(id)arg1 ;
-(void)itemChanged:(id)arg1 ;
-(UACornerActionManager *)cornerActionManager;
-(void)pauseLogging;
-(void)resumeLogging;
-(void)terminate;
-(void)dealloc;
-(void)flush;
-(void)suspend;
-(void)removeItem:(id)arg1 ;
-(id)items;
-(void)resume;
-(void)addItem:(id)arg1 ;
-(void)logString:(id)arg1 ;
-(void)setLogFilePath:(id)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(id)statusString;
-(void)updateItem:(id)arg1 ;
@end

