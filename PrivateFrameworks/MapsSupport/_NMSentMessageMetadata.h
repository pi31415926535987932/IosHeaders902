/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/nanomapscd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface _NMSentMessageMetadata : NSObject {

	int _type;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	unsigned _payloadSize;
	double _timestamp;

}

@property (assign,nonatomic) int type;                                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign,nonatomic) unsigned payloadSize;                                    //@synthesize payloadSize=_payloadSize - In the implementation block
-(void)dealloc;
-(id)init;
-(double)timestamp;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(int)type;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(void)setPayloadSize:(unsigned)arg1 ;
-(unsigned)payloadSize;
@end

