/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBFPasscodeLockAssertionTracker;

@interface SBFPasscodeLockAssertionManager : NSObject {

	SBFPasscodeLockAssertionTracker* _preventLockTracker;
	SBFPasscodeLockAssertionTracker* _transientTracker;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(void)addAssertion:(id)arg1 ;
-(void)removeAssertion:(id)arg1 ;
-(char)isAssertionValid:(id)arg1 ;
-(char)hasActiveAssertions;
@end

