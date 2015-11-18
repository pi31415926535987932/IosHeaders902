/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:24:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class HKQueryAnchor;

@interface HKAnchoredObjectQuery : HKQuery {

	char _initialHandlerCalled;
	char _includeDeletedObjects;
	/*^block*/id _updateHandler;
	/*^block*/id _completionHandler;
	HKQueryAnchor* _anchor;
	unsigned _limit;

}

@property (nonatomic,copy) id updateHandler;                          //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,readonly) id completionHandler;                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) HKQueryAnchor * anchor;                  //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) unsigned limit;                          //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) char includeDeletedObjects;              //@synthesize includeDeletedObjects=_includeDeletedObjects - In the implementation block
+(Class)_queryServerDataObjectClass;
-(void)_queue_cleanupAfterDeactivation;
-(char)_queue_shouldStayAliveAfterInitialResults;
-(void)_queue_configureQueryServerDataObject:(id)arg1 ;
-(void)_queue_validate;
-(/*^block*/id)_queue_errorHandler;
-(void)deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 withAnchor:(id)arg3 forQuery:(id)arg4 ;
-(id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(id)arg3 limit:(unsigned)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(void)setIncludeDeletedObjects:(char)arg1 ;
-(id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned)arg3 limit:(unsigned)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(id)completionHandler;
-(HKQueryAnchor *)anchor;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
-(char)includeDeletedObjects;
-(void)setLimit:(unsigned)arg1 ;
-(unsigned)limit;
@end
