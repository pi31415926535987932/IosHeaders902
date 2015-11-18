/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:55 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSNotificationQueue : NSObject {

	id _notificationCenter;
	id _asapQueue;
	id _asapObs;
	id _idleQueue;
	id _idleObs;

}
+(id)defaultQueue;
-(id)initWithNotificationCenter:(id)arg1 ;
-(void)_flushNotificationQueue;
-(void)enqueueNotification:(id)arg1 postingStyle:(unsigned)arg2 ;
-(void)dequeueNotificationsMatching:(id)arg1 coalesceMask:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
-(void)enqueueNotification:(id)arg1 postingStyle:(unsigned)arg2 coalesceMask:(unsigned)arg3 forModes:(id)arg4 ;
@end

