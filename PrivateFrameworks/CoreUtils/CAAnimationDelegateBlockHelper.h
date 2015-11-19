/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CAAnimationDelegateBlockHelper : NSObject {

	/*^block*/id _animationDidStartBlock;
	/*^block*/id _animationDidStopBlock;

}

@property (nonatomic,copy) id animationDidStartBlock;              //@synthesize animationDidStartBlock=_animationDidStartBlock - In the implementation block
@property (nonatomic,copy) id animationDidStopBlock;               //@synthesize animationDidStopBlock=_animationDidStopBlock - In the implementation block
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(id)animationDidStopBlock;
-(void)setAnimationDidStopBlock:(id)arg1 ;
-(id)animationDidStartBlock;
-(void)setAnimationDidStartBlock:(id)arg1 ;
@end

