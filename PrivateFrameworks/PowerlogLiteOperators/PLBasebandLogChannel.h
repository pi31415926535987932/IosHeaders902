/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLBasebandLogChannelDelegate;
#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
@interface PLBasebandLogChannel : NSObject {

	CFMessagePortRef remotePort;
	CFMessagePortRef localPort;
	char cachingEnabled;
	id<PLBasebandLogChannelDelegate> delegate;

}

@property (assign,nonatomic) id<PLBasebandLogChannelDelegate> delegate; 
@property (nonatomic,readonly) char isValid; 
@property (assign,nonatomic) char cachingEnabled; 
-(void)setDelegate:(id<PLBasebandLogChannelDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PLBasebandLogChannelDelegate>)delegate;
-(void)invalidate;
-(void)flush;
-(char)isValid;
-(void)close;
-(void)setCachingEnabled:(char)arg1 ;
-(void)sendObjectOverRemotePort:(id)arg1 ;
-(char)cachingEnabled;
-(char)openWithConnection:(id)arg1 ;
-(void)commitHardwareLogs;
-(void)enableLogCodes:(id)arg1 andEvents:(id)arg2 andExtraCode:(id)arg3 ;
-(void)setHardwareLoggingLevel:(unsigned)arg1 withWindowSize:(unsigned)arg2 ;
-(void)setChannelTimeout:(double)arg1 ;
-(void)connectionInvalidated:(id)arg1 ;
@end

