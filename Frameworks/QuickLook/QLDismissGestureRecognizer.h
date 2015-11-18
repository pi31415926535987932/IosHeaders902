/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:45:50 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, QLDismissTrackingInformation;

@interface QLDismissGestureRecognizer : NSObject {

	NSMutableArray* _actions;
	int _state;
	QLDismissTrackingInformation* _trackingInformation;

}

@property (assign,nonatomic) int state;                                             //@synthesize state=_state - In the implementation block
@property (retain) QLDismissTrackingInformation * trackingInformation;              //@synthesize trackingInformation=_trackingInformation - In the implementation block
-(void)setTrackingInformation:(QLDismissTrackingInformation *)arg1 ;
-(QLDismissTrackingInformation *)trackingInformation;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
@end
