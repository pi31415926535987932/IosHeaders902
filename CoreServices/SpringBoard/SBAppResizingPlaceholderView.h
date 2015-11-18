/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBSceneViewAppIconView, SBAppResizingBlurContainerView, UIView;

@interface SBAppResizingPlaceholderView : UIView {

	char _creatingBlur;
	SBSceneViewAppIconView* _appIconView;
	SBAppResizingBlurContainerView* _blurContainerView;
	UIView* _blurredAppSnapshotView;

}

@property (nonatomic,retain) SBSceneViewAppIconView * appIconView;                            //@synthesize appIconView=_appIconView - In the implementation block
@property (nonatomic,retain) SBAppResizingBlurContainerView * blurContainerView;              //@synthesize blurContainerView=_blurContainerView - In the implementation block
@property (nonatomic,retain) UIView * blurredAppSnapshotView;                                 //@synthesize blurredAppSnapshotView=_blurredAppSnapshotView - In the implementation block
@property (assign,getter=isCreatingBlur,nonatomic) char creatingBlur;                         //@synthesize creatingBlur=_creatingBlur - In the implementation block
-(id)initWithAppView:(id)arg1 ;
-(UIView *)blurredAppSnapshotView;
-(char)isCreatingBlur;
-(void)setCreatingBlur:(char)arg1 ;
-(SBAppResizingBlurContainerView *)blurContainerView;
-(void)setBlurredAppSnapshotView:(UIView *)arg1 ;
-(SBSceneViewAppIconView *)appIconView;
-(void)setBlurContainerView:(SBAppResizingBlurContainerView *)arg1 ;
-(void)generateBlurredAppSnapshotWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAppIconView:(SBSceneViewAppIconView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

