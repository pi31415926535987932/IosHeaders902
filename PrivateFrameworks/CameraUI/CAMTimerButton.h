/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CAMExpandableMenuButton.h>

@protocol CAMTimerButtonDelegate;
@class UIImageView;

@interface CAMTimerButton : CAMExpandableMenuButton {

	char _hideOffWhenCollapsed;
	id<CAMTimerButtonDelegate> _delegate;
	UIImageView* __glyphView;

}

@property (assign,nonatomic,__weak) id<CAMTimerButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int duration; 
@property (assign,nonatomic) char hideOffWhenCollapsed;                               //@synthesize hideOffWhenCollapsed=_hideOffWhenCollapsed - In the implementation block
@property (nonatomic,readonly) UIImageView * _glyphView;                              //@synthesize _glyphView=__glyphView - In the implementation block
-(void)setDelegate:(id<CAMTimerButtonDelegate>)arg1 ;
-(id<CAMTimerButtonDelegate>)delegate;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(id)headerView;
-(id)initWithExpansionOrientation:(int)arg1 ;
-(void)setHideOffWhenCollapsed:(char)arg1 ;
-(void)_commonCAMTimerButtonInitialization;
-(void)setDuration:(int)arg1 animated:(char)arg2 ;
-(UIImageView *)_glyphView;
-(char)hideOffWhenCollapsed;
-(id)hiddenIndexesWhileCollapsed;
-(int)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(int)arg1 ;
@end

