/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSCopying;
@class NSObject, NSMutableArray, NSMutableDictionary, NSArray;

@interface CAMBuffer : NSObject {

	char _bufferQueueEnabled;
	NSObject*<OS_dispatch_queue> __bufferQueue;
	id<NSCopying> _bufferQueueCurrentValue;
	NSMutableArray* __bufferQueueBufferedValues;
	NSMutableDictionary* __bufferQueueObservers;
	NSMutableArray* __bufferQueueObservances;

}

@property (getter=isEnabled,nonatomic,readonly) char enabled; 
@property (nonatomic,readonly) id currentValue; 
@property (nonatomic,readonly) char isBufferEmpty; 
@property (nonatomic,readonly) id firstBufferedValue; 
@property (nonatomic,readonly) id lastBufferedValue; 
@property (nonatomic,readonly) NSArray * bufferedValues; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _bufferQueue;                      //@synthesize _bufferQueue=__bufferQueue - In the implementation block
@property (assign,getter=isBufferQueueEnabled,nonatomic) char bufferQueueEnabled;              //@synthesize bufferQueueEnabled=_bufferQueueEnabled - In the implementation block
@property (nonatomic,retain) id<NSCopying> bufferQueueCurrentValue;                            //@synthesize bufferQueueCurrentValue=_bufferQueueCurrentValue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _bufferQueueBufferedValues;                    //@synthesize _bufferQueueBufferedValues=__bufferQueueBufferedValues - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _bufferQueueObservers;                    //@synthesize _bufferQueueObservers=__bufferQueueObservers - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _bufferQueueObservances;                       //@synthesize _bufferQueueObservances=__bufferQueueObservances - In the implementation block
+(id)keyPathsForValuesAffectingEnabled;
+(id)keyPathsForValuesAffectingCurrentValue;
-(id)currentValue;
-(void)dealloc;
-(id)init;
-(id)addObserver:(/*^block*/id)arg1 ;
-(char)isEnabled;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)handleObservedNotification:(id)arg1 ;
-(NSMutableArray *)_bufferQueueObservances;
-(void)_bufferQueueTeardownObservances:(id)arg1 ;
-(char)_isBufferQueue;
-(char)isBufferQueueEnabled;
-(NSObject*<OS_dispatch_queue>)_bufferQueue;
-(void)setBufferQueueEnabled:(char)arg1 ;
-(void)_emitBufferedValues;
-(void)_bufferQueueFulfillObservancesWithChange:(id)arg1 ;
-(void)_bufferQueueEvaluateObservances;
-(void)_bufferQueueFulfillAndEvaluateWithChange:(id)arg1 ;
-(void)_bufferQueueSetupObservance:(id)arg1 ;
-(NSMutableArray *)_bufferQueueBufferedValues;
-(NSMutableDictionary *)_bufferQueueObservers;
-(void)setBufferQueueCurrentValue:(id<NSCopying>)arg1 ;
-(id<NSCopying>)bufferQueueCurrentValue;
-(id)_addObserver:(/*^block*/id)arg1 onMainQueue:(char)arg2 ;
-(void)reevaluate;
-(void)_bufferQueueTeardownObservance:(id)arg1 ;
-(void)disableWhile:(/*^block*/id)arg1 ;
-(void)disableWhileKeyPath:(id)arg1 ofObject:(id)arg2 evaluates:(/*^block*/id)arg3 ;
-(void)disableWhileNotification:(id)arg1 fromObject:(id)arg2 usingNotificationCenter:(id)arg3 ;
-(void)disableUntil:(/*^block*/id)arg1 ;
-(void)disableUntilKeyPath:(id)arg1 ofObject:(id)arg2 evaluates:(/*^block*/id)arg3 ;
-(void)disableUntilNotification:(id)arg1 fromObject:(id)arg2 usingNotificationCenter:(id)arg3 ;
-(void)replaceWith:(id)arg1 ;
-(char)isBufferEmpty;
-(id)firstBufferedValue;
-(id)lastBufferedValue;
-(NSArray *)bufferedValues;
-(id)addMainQueueObserver:(/*^block*/id)arg1 ;
-(void)removeObserverForKey:(id)arg1 ;
-(void)push:(id)arg1 ;
@end

