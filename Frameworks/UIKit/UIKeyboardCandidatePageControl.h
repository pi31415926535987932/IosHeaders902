/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKeyboardCandidateBarSegmentControl;

@interface UIKeyboardCandidatePageControl : UIView {

	UIKeyboardCandidateBarSegmentControl* _pageControl;
	char _usingVerticalArrows;

}
+(id)imageWithColor:(id)arg1 size:(CGSize)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setUseVerticalArrows:(char)arg1 ;
-(void)_changePage:(id)arg1 ;
-(void)updatePageControlWithStatus:(char)arg1 rightControlButtonEnabled:(char)arg2 ;
@end

