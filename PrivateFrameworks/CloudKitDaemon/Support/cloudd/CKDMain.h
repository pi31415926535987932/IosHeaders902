/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Support/cloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDSystemAvailabilityWatcher.h>

@class NSString;

@interface CKDMain : NSObject <CKDSystemAvailabilityWatcher> {

	char _upAndRunning;

}

@property (assign,nonatomic) char upAndRunning;                     //@synthesize upAndRunning=_upAndRunning - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)upAndRunning;
-(void)setUpAndRunning:(char)arg1 ;
-(void)_setupNotifydEventHandler;
-(void)_registerTokenRefreshActivity;
-(id)init;
-(char)canRunGivenAvailabilityState:(unsigned)arg1 ;
-(void)systemAvailabilityChanged:(unsigned)arg1 ;
@end

