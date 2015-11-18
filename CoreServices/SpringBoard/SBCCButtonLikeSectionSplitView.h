/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBControlCenterSectionView.h>

@class SBCCButtonLikeSectionView;

@interface SBCCButtonLikeSectionSplitView : SBControlCenterSectionView {

	float _separatorWidth;
	char _leftHidden;
	char _rightHidden;
	SBCCButtonLikeSectionView* _leftSection;
	SBCCButtonLikeSectionView* _rightSection;

}

@property (nonatomic,retain) SBCCButtonLikeSectionView * leftSection;               //@synthesize leftSection=_leftSection - In the implementation block
@property (nonatomic,retain) SBCCButtonLikeSectionView * rightSection;              //@synthesize rightSection=_rightSection - In the implementation block
-(void)setLeftSection:(SBCCButtonLikeSectionView *)arg1 ;
-(void)setRightSection:(SBCCButtonLikeSectionView *)arg1 ;
-(SBCCButtonLikeSectionView *)leftSection;
-(SBCCButtonLikeSectionView *)rightSection;
-(void)setLeftSectionHidden:(char)arg1 animated:(char)arg2 ;
-(void)setRightSectionHidden:(char)arg1 animated:(char)arg2 ;
-(void)_updateLabelParameters;
-(char)_useLandscapeBehavior;
-(void)_updateButtonsCorners;
-(void)_relayoutAnimated:(char)arg1 ;
-(UIEdgeInsets)_landscapeInsetsForSection;
-(CGRect)_frameForSectionSlot:(int)arg1 ;
-(id)_viewForSectionSlot:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

