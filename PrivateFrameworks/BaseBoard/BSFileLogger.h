/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:06 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSLogging.h>

@protocol OS_dispatch_queue, BSFileLoggerDelegate;
@class NSObject, NSString, NSMutableArray, NSMutableSet, NSDateFormatter;

@interface BSFileLogger : NSObject <BSLogging> {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _logPath;
	NSMutableArray* _recentLogs;
	NSMutableSet* _enabledCategories;
	NSDateFormatter* _memoryLogDateFormatter;
	char _enabledByPreference;
	id<BSFileLoggerDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * name; 
@property (getter=isEnabled,nonatomic,readonly) char enabled; 
@property (nonatomic,readonly) int level; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * logPath; 
@property (nonatomic,readonly) unsigned logDestinations; 
@property (nonatomic,readonly) int maxLogCount; 
@property (nonatomic,readonly) int maxLogSize; 
@property (nonatomic,readonly) unsigned maxLogLinesInMemory; 
@property (nonatomic,readonly) NSString * logPreferenceDomain; 
@property (nonatomic,readonly) NSString * logPreferenceName; 
@property (nonatomic,readonly) char shouldEnableOnInternalBuilds; 
@property (assign,nonatomic) id<BSFileLoggerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setDelegate:(id<BSFileLoggerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<BSFileLoggerDelegate>)delegate;
-(NSString *)name;
-(char)isEnabled;
-(int)level;
-(void)_setEnabled:(char)arg1 ;
-(void)logWithFormat:(id)arg1 ;
-(void)logWithFormat:(id)arg1 arguments:(void*)arg2 ;
-(char)_queue_isEnabledForCategory:(id)arg1 ;
-(char)isEnabledForCategory:(id)arg1 ;
-(void)_reloadFromDefaultsDictionary:(id)arg1 ;
-(void)_queue_appendLogForLevel:(int)arg1 category:(id)arg2 withFormat:(id)arg3 arguments:(void*)arg4 ;
-(id)composedLogForCategory:(id)arg1 destination:(unsigned)arg2 format:(id)arg3 arguments:(void*)arg4 ;
-(unsigned)maxLogLinesInMemory;
-(void)_appendLogForLevel:(int)arg1 category:(id)arg2 withFormat:(id)arg3 arguments:(void*)arg4 ;
-(void)_setLevel:(int)arg1 fromDefaults:(char)arg2 ;
-(void)_disableLogCategory:(id)arg1 ;
-(NSString *)logPath;
-(void)_setLevel:(int)arg1 ;
-(NSString *)logPreferenceName;
-(NSString *)logPreferenceDomain;
-(id)loggerForCatagory:(id)arg1 ;
-(id)logPrefixForCategory:(id)arg1 destination:(unsigned)arg2 ;
-(void)_enableLogCategory:(id)arg1 ;
-(void)reloadFromDefaults;
-(int)maxLogCount;
-(int)maxLogSize;
-(unsigned)logDestinations;
-(void)willBeginLoggingToPath:(id)arg1 ;
-(char)shouldEnableOnInternalBuilds;
-(id)recentLogs;
-(char)saveRecentLogsToTemporaryPath:(id*)arg1 ;
@end

