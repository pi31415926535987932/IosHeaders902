/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:28:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBProcessWatchdogProviding.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSString;

@interface FBApplicationProcessWatchdogPolicy : NSObject <FBProcessWatchdogProviding> {

	double _deviceLaunchScale;
	double _deviceResumeScale;
	double _additionalFirstPartyScale;
	char _enableThirdPartyPre9;
	int _daNotificationToken;
	NSDictionary* _watchdogPolicyExceptions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultPolicy;
+(double)_scaleForGestaltKey:(CFStringRef)arg1 ;
+(double)_defaultLaunchScale;
+(double)_defaultResumeScale;
+(double)_defaultFirstPartyAdditionalScale;
-(void)dealloc;
-(id)init;
-(void)_queue_reloadDefaultSettings;
-(double)_queue_watchdogScalingFactorForAppInfo:(id)arg1 isResume:(char)arg2 ;
-(double)watchdogIntervalForProcess:(id)arg1 eventContext:(SCD_Struct_FB8)arg2 ;
@end

