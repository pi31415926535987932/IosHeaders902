/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBUIBannerView.h>
#import <SpringBoard/SBVibrantBannerView.h>

@protocol SBUIBannerView;
@class _UIBackdropView, UIImageView, UIView, SBNotificationSeparatorView, SBUIBannerContext, SBBannerViewCallbackManager, UIImage, NSString;

@interface SBBannerContextView : UIView <SBUIBannerView, SBVibrantBannerView> {

	_UIBackdropView* _backdropView;
	UIImageView* _backgroundImageView;
	UIView* _contentContainerView;
	UIView*<SBUIBannerView> _contentView;
	UIView* _accessoryView;
	UIView* _pullDownView;
	UIView* _pullDownContainerView;
	UIView* _secondaryContentView;
	SBNotificationSeparatorView* _separatorView;
	UIView* _highlightView;
	SBUIBannerContext* _context;
	SBBannerViewCallbackManager* _callbacks;
	SBBannerViewCallbackManager* _wrapperCallbacks;
	char _isDismissing;
	CGSize _grabberSize;
	UIView* _grabberView;
	char _hidesGrabberOnPullDown;
	float _minimumHeight;
	struct {
		unsigned providesDefaultElementColors : 1;
		unsigned supportsElementColors : 1;
	}  _contentViewFlags;
	char _grabberVisible;
	char _separatorVisible;
	char _highlighted;
	float _maximumHeight;
	float _pullDownViewHeight;
	float _pullDownBottomOverhangHeight;

}

@property (nonatomic,retain,readonly) _UIBackdropView * backdrop; 
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (getter=isDismissing,nonatomic,readonly) char dismissing;              //@synthesize isDismissing=_isDismissing - In the implementation block
@property (assign,nonatomic) float maximumHeight;                                //@synthesize maximumHeight=_maximumHeight - In the implementation block
@property (assign,nonatomic) char grabberVisible;                                //@synthesize grabberVisible=_grabberVisible - In the implementation block
@property (assign,nonatomic) char separatorVisible;                              //@synthesize separatorVisible=_separatorVisible - In the implementation block
@property (assign,nonatomic) char highlighted;                                   //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIView * pullDownView;                              //@synthesize pullDownView=_pullDownView - In the implementation block
@property (assign,nonatomic) float pullDownViewHeight;                           //@synthesize pullDownViewHeight=_pullDownViewHeight - In the implementation block
@property (assign,nonatomic) float pullDownBottomOverhangHeight;                 //@synthesize pullDownBottomOverhangHeight=_pullDownBottomOverhangHeight - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                             //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) UIView * secondaryContentView;                      //@synthesize secondaryContentView=_secondaryContentView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultColorForElement:(int)arg1 ;
+(id)_defaultGrabberColor;
+(id)_defaultButtonColor;
+(id)_defaultButtonTextColor;
-(id)bannerContext;
-(id)colorForElement:(int)arg1 ;
-(id)defaultColorForElement:(int)arg1 ;
-(void)setColor:(id)arg1 forElement:(int)arg2 ;
-(char)_canPullDown;
-(void)noteDidDismissWithReason:(int)arg1 ;
-(void)noteWillAppear;
-(void)noteDidAppear;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(char)isPulledDown;
-(char)isDismissing;
-(void)setBannerContext:(id)arg1 withReplaceReason:(int)arg2 ;
-(void)setSeparatorVisible:(char)arg1 ;
-(float)percentPulledDown;
-(void)setPullDownViewHeight:(float)arg1 ;
-(void)setPullDownView:(UIView *)arg1 ;
-(void)setPullDownBottomOverhangHeight:(float)arg1 ;
-(void)setSecondaryContentView:(UIView *)arg1 ;
-(void)replacePullDownViewWithView:(id)arg1 animated:(char)arg2 ;
-(id)_lazyHighlightView;
-(id)_grabberColor;
-(void)_layoutBackgroundView;
-(char)shouldBorrowScreen;
-(id)initWithFrame:(CGRect)arg1 backdropStyle:(int)arg2 ;
-(void)setGrabberVisible:(char)arg1 ;
-(id)_newGrabberView:(char)arg1 ;
-(void)_layoutContentContainerView;
-(UIView *)secondaryContentView;
-(CGRect)_centeredBoundsForRect:(CGRect)arg1 ;
-(CGSize)_contentSizeThatFits:(CGSize)arg1 ;
-(id)_vibrantContentView;
-(void)_setGrabberColor:(id)arg1 ;
-(void)_layoutPullDownContainerView;
-(void)_layoutBackdropView;
-(void)_layoutGrabber;
-(void)_layoutSeparatorView;
-(void)_updateContentAlpha;
-(CGRect)_centeredBounds;
-(void)_layoutAccessoryView;
-(void)_layoutContentView;
-(float)_pullDownContentAlpha;
-(float)_grabberAlpha;
-(char)grabberVisible;
-(char)separatorVisible;
-(UIView *)pullDownView;
-(float)pullDownViewHeight;
-(float)pullDownBottomOverhangHeight;
-(void)setMaximumHeight:(float)arg1 ;
-(float)maximumHeight;
-(void)_updateHighlightView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)backgroundImage;
-(void)setHighlighted:(char)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(char)highlighted;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(_UIBackdropView *)backdrop;
-(float)minimumHeight;
@end

