/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:55 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSNotificationCenter.h>

@interface NSDistributedNotificationCenter : NSNotificationCenter

@property (assign) char suspended; 
+(id)notificationCenterForType:(id)arg1 ;
+(id)defaultCenter;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 suspensionBehavior:(unsigned)arg5 ;
-(id)addObserverForName:(id)arg1 object:(id)arg2 suspensionBehavior:(unsigned)arg3 queue:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 options:(unsigned)arg4 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 deliverImmediately:(char)arg4 ;
-(char)suspended;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(id)init;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)postNotification:(id)arg1 ;
-(void)setSuspended:(char)arg1 ;
@end

