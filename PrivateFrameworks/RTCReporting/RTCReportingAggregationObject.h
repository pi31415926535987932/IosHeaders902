/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ClientSessionReplyInterface.h>

@interface RTCReportingAggregationObject : NSObject <ClientSessionReplyInterface> {

	/*^block*/id _aggregationBlock;

}
-(void)dealloc;
-(void)sendMessageToClient:(id)arg1 timestamp:(double)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 ;
-(id)initWithAggregationBlock:(/*^block*/id)arg1 ;
@end

