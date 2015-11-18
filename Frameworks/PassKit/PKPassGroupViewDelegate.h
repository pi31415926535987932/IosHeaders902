/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:08 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPassGroupViewDelegate <NSObject>
@optional
-(void)groupViewTapped:(id)arg1;
-(void)groupView:(id)arg1 didBeginShowingFontmostPassView:(id)arg2;
-(void)groupView:(id)arg1 didEndShowingFontmostPassView:(id)arg2;
-(char)groupViewShouldAllowPanning:(id)arg1;
-(void)groupViewPanDidBegin:(id)arg1;
-(void)groupViewPanDidEnd:(id)arg1;
-(void)groupView:(id)arg1 panned:(CGPoint)arg2 withVelocity:(CGPoint)arg3;
-(void)groupViewDidUpdatePageControlVisibility:(id)arg1;
-(char)groupViewShouldAllowPassFlip:(id)arg1;
-(void)groupViewFrontPassDidFlip:(id)arg1 animated:(char)arg2;
-(char)groupViewShouldAllowPassResize:(id)arg1;
-(void)groupViewFrontPassDidResize:(id)arg1 animated:(char)arg2;
-(void)groupView:(id)arg1 didUpdatePassView:(id)arg2;
-(void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
-(char)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
-(void)groupView:(id)arg1 flipButtonPressedForPass:(id)arg2;
-(void)groupView:(id)arg1 resizeButtonPressedForPass:(id)arg2;
-(void)groupView:(id)arg1 didScrollToPassView:(id)arg2;
-(char)groupViewPassesGrowWhenFlipped:(id)arg1;
-(char)groupViewPassesGrowCenteredWhenFlipped:(id)arg1;
-(unsigned)groupViewPassesSuppressedContent:(id)arg1;
-(id)groupViewReusablePassViewQueue:(id)arg1;
-(int)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;
-(CGRect*)groupView:(id)arg1 targetPageControlFrameForProposedFrame:(CGRect)arg2;

@end

