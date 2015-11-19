/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreRCInterfaceListenerDelegate;
@class NSMutableArray, NSArray;

@interface CoreRCInterfaceListener : NSObject {

	NSMutableArray* _interfaces;
	id<CoreRCInterfaceListenerDelegate> _delegate;

}

@property (assign,nonatomic) id<CoreRCInterfaceListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * interfaces;                                    //@synthesize interfaces=_interfaces - In the implementation block
-(void)setDelegate:(id<CoreRCInterfaceListenerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CoreRCInterfaceListenerDelegate>)delegate;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleFromDispatchQueue:(id)arg1 ;
-(void)addInterface:(id)arg1 ;
-(id)initWithInterfaceController:(id)arg1 ;
-(void)removeInterface:(id)arg1 ;
-(id)firstInterface;
-(NSArray *)interfaces;
@end

