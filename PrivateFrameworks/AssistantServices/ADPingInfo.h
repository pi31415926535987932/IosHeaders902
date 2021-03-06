/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/assistantd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable;

@interface ADPingInfo : NSObject <NSCopying> {

	NSMapTable* _outstandingPings;
	int _pingCount;
	double _avgPingTime;

}

@property (nonatomic,readonly) int pingCount;                   //@synthesize pingCount=_pingCount - In the implementation block
@property (nonatomic,readonly) double avgPingTime;              //@synthesize avgPingTime=_avgPingTime - In the implementation block
-(void)markPingSentWithIndex:(int)arg1 ;
-(void)markPongReceivedWithIndex:(int)arg1 ;
-(unsigned)numberOfUnacknowledgedPings;
-(double)avgPingTime;
-(int)pingCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

