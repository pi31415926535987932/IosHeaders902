/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIScreen;

@interface SBUIPluginActivationContext : NSObject {

	UIScreen* _screen;
	int _activationEvent;

}

@property (nonatomic,retain) UIScreen * screen;                //@synthesize screen=_screen - In the implementation block
@property (assign,nonatomic) int activationEvent;              //@synthesize activationEvent=_activationEvent - In the implementation block
-(void)dealloc;
-(UIScreen *)screen;
-(void)setScreen:(UIScreen *)arg1 ;
-(int)activationEvent;
-(void)setActivationEvent:(int)arg1 ;
@end

