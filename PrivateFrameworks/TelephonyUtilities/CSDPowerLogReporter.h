/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <callservicesd/CSDReporter.h>

@class NSDictionary, NSString;

@interface CSDPowerLogReporter : NSObject <CSDReporter> {

	/*^block*/id _eventBlock;
	NSDictionary* _callStateContext;
	NSDictionary* _visibilityContext;

}

@property (nonatomic,copy) id eventBlock;                                   //@synthesize eventBlock=_eventBlock - In the implementation block
@property (nonatomic,retain) NSDictionary * callStateContext;               //@synthesize callStateContext=_callStateContext - In the implementation block
@property (nonatomic,retain) NSDictionary * visibilityContext;              //@synthesize visibilityContext=_visibilityContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reportingController:(id)arg1 statusChangedForCall:(id)arg2 totalCallCount:(unsigned)arg3 ;
-(void)reportingController:(id)arg1 callEnteredForeground:(id)arg2 ;
-(void)allCallsBackgroundedForReportingController:(id)arg1 ;
-(NSDictionary *)callStateContext;
-(void)_registerCallStopEvent;
-(void)_registerCallStartEventForCall:(id)arg1 ;
-(NSDictionary *)visibilityContext;
-(void)_registerCallBackgroundedEvent;
-(void)_registerCallForegroundedEventForCall:(id)arg1 ;
-(id)_contextDictionaryWithCall:(id)arg1 ;
-(void)setCallStateContext:(NSDictionary *)arg1 ;
-(void)_registerEventWithContext:(id)arg1 status:(id)arg2 ;
-(void)setVisibilityContext:(NSDictionary *)arg1 ;
-(id)_bundleIdentifierForCall:(id)arg1 ;
-(id)_callTypeForCall:(id)arg1 ;
-(id)_telephonySubtypeForCall:(id)arg1 ;
-(void)setEventBlock:(id)arg1 ;
-(id)eventBlock;
-(id)init;
@end

