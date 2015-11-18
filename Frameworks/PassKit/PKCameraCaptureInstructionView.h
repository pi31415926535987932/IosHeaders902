/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class PKTableHeaderView, UIButton;

@interface PKCameraCaptureInstructionView : UIView {

	PKTableHeaderView* _headerView;
	int _context;
	UIButton* _manualEntryButton;
	UIButton* _setupLaterButton;

}

@property (nonatomic,retain) UIButton * manualEntryButton;              //@synthesize manualEntryButton=_manualEntryButton - In the implementation block
@property (nonatomic,retain) UIButton * setupLaterButton;               //@synthesize setupLaterButton=_setupLaterButton - In the implementation block
-(char)isBuddyiPad;
-(void)setManualEntryButton:(UIButton *)arg1 ;
-(void)setSetupLaterButton:(UIButton *)arg1 ;
-(UIButton *)manualEntryButton;
-(UIButton *)setupLaterButton;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(int)arg2 ;
@end

