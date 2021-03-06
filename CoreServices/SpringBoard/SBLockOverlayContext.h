/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBLockOverlayViewController;

@interface SBLockOverlayContext : NSObject {

	SBLockOverlayViewController* _viewController;
	unsigned _priority;
	/*^block*/id _activationBlock;
	/*^block*/id _deactivationBlock;

}

@property (nonatomic,retain,readonly) SBLockOverlayViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) unsigned priority;                                                //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) id activationBlock;                                                   //@synthesize activationBlock=_activationBlock - In the implementation block
@property (nonatomic,copy) id deactivationBlock;                                                 //@synthesize deactivationBlock=_deactivationBlock - In the implementation block
-(id)initWithOverlayViewController:(id)arg1 priority:(unsigned)arg2 ;
-(void)setActivationBlock:(id)arg1 ;
-(void)setDeactivationBlock:(id)arg1 ;
-(id)activationBlock;
-(id)deactivationBlock;
-(void)dealloc;
-(unsigned)priority;
-(SBLockOverlayViewController *)viewController;
@end

