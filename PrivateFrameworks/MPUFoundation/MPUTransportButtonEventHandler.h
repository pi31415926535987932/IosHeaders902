/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, UIControl;

@interface MPUTransportButtonEventHandler : NSObject {

	NSObject*<OS_dispatch_source> _longPressTimer;
	char _longPress;
	char _shouldFakeEnabled;
	char _supportsTapWhenDisabled;
	UIControl* _button;
	double _minimumLongPressDuration;

}

@property (assign,nonatomic,__weak) UIControl * button;                    //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) double minimumLongPressDuration;              //@synthesize minimumLongPressDuration=_minimumLongPressDuration - In the implementation block
@property (assign,nonatomic) char supportsTapWhenDisabled;                 //@synthesize supportsTapWhenDisabled=_supportsTapWhenDisabled - In the implementation block
-(UIControl *)button;
-(void)dealloc;
-(id)init;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setButton:(UIControl *)arg1 ;
-(void)_clearLongPressTimer;
-(void)_longPressTimerAction;
-(double)minimumLongPressDuration;
-(void)setMinimumLongPressDuration:(double)arg1 ;
-(char)supportsTapWhenDisabled;
-(void)setSupportsTapWhenDisabled:(char)arg1 ;
-(id)performHitTestingBlock:(/*^block*/id)arg1 ;
-(char)shouldFakeEnabled;
-(char)shouldForceTrackingEnabled;
@end

