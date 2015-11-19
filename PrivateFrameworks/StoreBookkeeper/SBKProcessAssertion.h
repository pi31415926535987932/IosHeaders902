/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BKSProcessAssertion;

@interface SBKProcessAssertion : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _expirationBlock;
	unsigned _identifier;
	BKSProcessAssertion* _bkProcessAssertion;
	id _expirationObserver;

}

@property (readonly) unsigned identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (retain) BKSProcessAssertion * bkProcessAssertion;              //@synthesize bkProcessAssertion=_bkProcessAssertion - In the implementation block
@property (retain) id expirationObserver;                                 //@synthesize expirationObserver=_expirationObserver - In the implementation block
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(unsigned)identifier;
-(void)setBkProcessAssertion:(BKSProcessAssertion *)arg1 ;
-(void)setExpirationObserver:(id)arg1 ;
-(void)_onQueueSetBkProcessAssertion:(id)arg1 ;
-(id)initWithExpirationBlock:(/*^block*/id)arg1 debugDescription:(id)arg2 ;
-(BKSProcessAssertion *)bkProcessAssertion;
-(id)expirationObserver;
-(void)_expireBackgroundTask;
@end

