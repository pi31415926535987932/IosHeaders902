/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/SKUIViewElementOfferButton.h>

@protocol SKUIItemOfferButtonDelegate;
@class UIColor, UIView, SKUIFocusedTouchGestureRecognizer, UIImage, NSMutableAttributedString, UIImageView, SKUICircleProgressIndicator, UILabel, SKUIItemOfferButtonState, NSString;

@interface SKUIItemOfferButton : UIControl <SKUIViewElementOfferButton> {

	UIColor* _backgroundColor;
	UIView* _borderView;
	SKUIFocusedTouchGestureRecognizer* _cancelGestureRecognizer;
	UIImage* _cloudImage;
	UIColor* _cloudTintColor;
	UIColor* _confirmationColor;
	NSMutableAttributedString* _confirmationTitleAttributedString;
	int _confirmationTitleStyle;
	CGSize _confirmationTitleFitSize;
	id<SKUIItemOfferButtonDelegate> _delegate;
	int _fillStyle;
	UIImage* _image;
	UIImageView* _imageView;
	float _progress;
	SKUICircleProgressIndicator* _progressIndicator;
	char _showsConfirmationState;
	NSMutableAttributedString* _titleAttributedString;
	CGSize _titleFitSize;
	UILabel* _titleLabel;
	int _titleStyle;
	char _universal;
	char _usesDrawRectPath;
	SKUIItemOfferButtonState* _state;
	UIImageView* _universalImageView;

}

@property (assign,nonatomic,__weak) id<SKUIItemOfferButtonDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * confirmationTitle; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int fillStyle;                                                         //@synthesize fillStyle=_fillStyle - In the implementation block
@property (assign,nonatomic) float progress;                                                        //@synthesize progress=_progress - In the implementation block
@property (getter=isShowingConfirmation,nonatomic,readonly) char showingConfirmation; 
@property (assign,nonatomic) char showsConfirmationState;                                           //@synthesize showsConfirmationState=_showsConfirmationState - In the implementation block
@property (assign,nonatomic) int progressType; 
@property (assign,nonatomic) int confirmationTitleStyle;                                            //@synthesize confirmationTitleStyle=_confirmationTitleStyle - In the implementation block
@property (assign,nonatomic) int titleStyle;                                                        //@synthesize titleStyle=_titleStyle - In the implementation block
@property (assign,getter=isUniversal,nonatomic) char universal;                                     //@synthesize universal=_universal - In the implementation block
@property (nonatomic,copy) UIColor * cloudTintColor;                                                //@synthesize cloudTintColor=_cloudTintColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SKUIItemOfferButtonDelegate> itemOfferDelegate; 
+(id)_basicAnimationWithKeyPath:(id)arg1 ;
+(id)_defaultTitleAttributes;
+(id)itemOfferButtonWithAppearance:(id)arg1 ;
+(id)cloudTintColorForBackgroundColor:(id)arg1 ;
+(id)localizedTitleForItemState:(id)arg1 clientContext:(id)arg2 ;
+(id)cloudImageWithTintColor:(id)arg1 arrowTintColor:(id)arg2 ;
+(char)_sizeMattersForTitleStyle:(int)arg1 ;
+(CGSize)_titleSizeThatFitsForSize:(CGSize)arg1 titleStyle:(int)arg2 mutableAttributedString:(id)arg3 ;
+(id)_cachedImageForAttributedTitle:(id)arg1 titleStyle:(int)arg2 size:(CGSize)arg3 fillStyle:(int)arg4 universal:(char)arg5 tintColor:(id)arg6 ;
+(id)_universalPlusImageWithTintColor:(id)arg1 ;
+(id)_imageForAttributedTitle:(id)arg1 titleStyle:(int)arg2 size:(CGSize)arg3 fillStyle:(int)arg4 universal:(char)arg5 tintColor:(id)arg6 ;
+(id)_imageForProgressType:(int)arg1 ;
+(UIEdgeInsets)_imageInsetsForProgressType:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SKUIItemOfferButtonDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SKUIItemOfferButtonDelegate>)delegate;
-(NSString *)title;
-(void)setEnabled:(char)arg1 ;
-(UIImage *)image;
-(void)tintColorDidChange;
-(void)_removeAllAnimations:(char)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setProgress:(float)arg1 animated:(char)arg2 ;
-(float)progress;
-(void)setProgressType:(int)arg1 ;
-(void)setItemOfferDelegate:(id<SKUIItemOfferButtonDelegate>)arg1 ;
-(void)setShowingConfirmation:(char)arg1 animated:(char)arg2 ;
-(void)_removeCancelGestureRecognizer;
-(char)setValuesUsingItemOffer:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(char)arg4 ;
-(char)setValuesUsingBuyButtonDescriptor:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(char)arg4 ;
-(void)setColoringWithAppearance:(id)arg1 ;
-(void)removeButtonStateAnimations;
-(CGSize)layoutSizeThatFits:(CGSize)arg1 ;
-(char)isShowingConfirmation;
-(void)setUniversal:(char)arg1 ;
-(id<SKUIItemOfferButtonDelegate>)itemOfferDelegate;
-(void)setCloudTintColor:(UIColor *)arg1 ;
-(void)_sendWillAnimate;
-(void)_sendDidAnimate;
-(void)showCloudImage;
-(int)progressType;
-(int)confirmationTitleStyle;
-(void)setConfirmationTitleStyle:(int)arg1 ;
-(int)titleStyle;
-(void)setTitleStyle:(int)arg1 ;
-(float)_horizontalInsetForTitleStyle:(int)arg1 ;
-(void)_reloadForCurrentState:(char)arg1 ;
-(NSString *)confirmationTitle;
-(void)_updateForChangedConfirmationTitleProperty;
-(void)setProgressType:(int)arg1 animated:(char)arg2 ;
-(id)_buttonPropertiesForState:(id)arg1 ;
-(void)_transitionFromProgress:(id)arg1 toProgress:(id)arg2 withDuration:(float)arg3 completion:(/*^block*/id)arg4 ;
-(void)_transitionFromTitleOrImage:(id)arg1 toProgress:(id)arg2 withDuration:(float)arg3 completion:(/*^block*/id)arg4 ;
-(void)_transitionFromProgress:(id)arg1 toTitleOrImage:(id)arg2 withDuration:(float)arg3 completion:(/*^block*/id)arg4 ;
-(void)_transitionFromTitle:(id)arg1 toTitle:(id)arg2 withDuration:(float)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateForChangedTitleProperty;
-(void)setFillStyle:(int)arg1 ;
-(void)setShowsConfirmationState:(char)arg1 ;
-(void)setConfirmationTitle:(NSString *)arg1 ;
-(char)setTitle:(id)arg1 confirmationTitle:(id)arg2 itemState:(id)arg3 clientContext:(id)arg4 animated:(char)arg5 ;
-(void)_transitionFromImage:(id)arg1 toImage:(id)arg2 withDuration:(float)arg3 completion:(/*^block*/id)arg4 ;
-(char)_touchInBounds:(id)arg1 ;
-(char)showsConfirmationState;
-(void)_adjustViewOrderingForProperties:(id)arg1 ;
-(void)_insertUniversalView;
-(void)_insertBorderView;
-(void)_insertProgressIndicator;
-(void)_insertImageView;
-(void)_insertLabel;
-(void)_cancelGestureAction:(id)arg1 ;
-(void)_insertCancelGestureRecognizer;
-(UIColor *)cloudTintColor;
-(int)fillStyle;
-(char)isUniversal;
@end

