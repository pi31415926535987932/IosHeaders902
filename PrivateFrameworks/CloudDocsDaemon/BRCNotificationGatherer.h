/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BRCNotificationPipe;

@interface BRCNotificationGatherer : NSObject {

	BRCNotificationPipe* _pipe;
	/*^block*/id _gatherReply;

}
-(id)init;
-(void)invalidate;
-(void)done;
-(id)initWithNotificationPipe:(id)arg1 reply:(/*^block*/id)arg2 ;
-(char)continueGatheringWithBatchSize:(int)arg1 ;
@end

