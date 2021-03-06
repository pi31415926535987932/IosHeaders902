/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNotificationCenter, NSMutableDictionary;

@interface CAMPriorityNotificationCenter : NSObject {

	NSNotificationCenter* __notificationCenter;
	NSMutableDictionary* __observersByNameHighPriority;
	NSMutableDictionary* __observersByNameNormalPriority;

}

@property (nonatomic,retain,readonly) NSNotificationCenter * _notificationCenter;                        //@synthesize _notificationCenter=__notificationCenter - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * _observersByNameHighPriority;                //@synthesize _observersByNameHighPriority=__observersByNameHighPriority - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * _observersByNameNormalPriority;              //@synthesize _observersByNameNormalPriority=__observersByNameNormalPriority - In the implementation block
+(id)defaultCenter;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(id)_entriesByName:(id)arg1 forPriority:(unsigned)arg2 creatingEmptyIfNeeded:(char)arg3 ;
-(void)_postNotification:(id)arg1 forEntries:(id)arg2 ;
-(NSMutableDictionary *)_observersByNameHighPriority;
-(NSMutableDictionary *)_observersByNameNormalPriority;
-(id)_observersForPriority:(unsigned)arg1 ;
-(NSNotificationCenter *)_notificationCenter;
-(void)_notificationReceiver:(id)arg1 ;
-(void)addObserver:(id)arg1 priority:(unsigned)arg2 selector:(SEL)arg3 name:(id)arg4 object:(id)arg5 ;
-(id)_allSubscriptions;
-(void)_removeObserver:(id)arg1 fromObserversByName:(id)arg2 ;
@end

