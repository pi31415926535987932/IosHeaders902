/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBNewWidgetsButton, SBNotificationVibrantButton, SBNotificationSeparatorView, SBAttributionWrapperViewController;

@interface SBTodayTableFooterView : UIView {

	SBNewWidgetsButton* _newWidgetsButton;
	SBNotificationVibrantButton* _button;
	SBNotificationSeparatorView* _separatorView;
	SBAttributionWrapperViewController* _attributionViewController;
	int _layoutMode;

}

@property (assign,nonatomic) int layoutMode;                                                              //@synthesize layoutMode=_layoutMode - In the implementation block
@property (nonatomic,retain) SBAttributionWrapperViewController * attributionViewController;              //@synthesize attributionViewController=_attributionViewController - In the implementation block
-(void)setLayoutMode:(int)arg1 ;
-(void)_updateForContentCategorySizeDidChange;
-(void)setAttributionViewController:(SBAttributionWrapperViewController *)arg1 ;
-(void)_availableWidgetsUpdated:(id)arg1 ;
-(void)_updateForLockStateDidChange:(id)arg1 ;
-(char)_isDevicePasscodeLocked;
-(float)_buttonBottomPadding;
-(void)_updateAttributionFrame;
-(float)_attributionOriginY;
-(SBAttributionWrapperViewController *)attributionViewController;
-(int)layoutMode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setVisibleWidgetsIDs:(id)arg1 ;
@end

