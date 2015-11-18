/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UILegibilityView, UIStatusBarItem, UIStatusBarLayoutManager, UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarItemView : UIView {

	float _currentOverlap;
	CGContextRef _imageContext;
	float _imageContextScale;
	_UILegibilityView* _legibilityView;
	char _visible;
	char _allowsUpdates;
	UIStatusBarItem* _item;
	UIStatusBarLayoutManager* _layoutManager;
	UIStatusBarForegroundStyleAttributes* _foregroundStyle;

}

@property (nonatomic,readonly) UIStatusBarItem * item;                                              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) UIStatusBarLayoutManager * layoutManager;                       //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,readonly) UIStatusBarForegroundStyleAttributes * foregroundStyle;              //@synthesize foregroundStyle=_foregroundStyle - In the implementation block
@property (assign,getter=isVisible,nonatomic) char visible;                                         //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) char allowsUpdates;                                                    //@synthesize allowsUpdates=_allowsUpdates - In the implementation block
+(id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4 ;
-(void)dealloc;
-(id)description;
-(char)_shouldReverseLayoutDirection;
-(void)setContentMode:(int)arg1 ;
-(UIStatusBarItem *)item;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(UIStatusBarLayoutManager *)layoutManager;
-(UIStatusBarForegroundStyleAttributes *)foregroundStyle;
-(float)extraRightPadding;
-(id)contentsImage;
-(void)setVisible:(char)arg1 ;
-(int)textAlignment;
-(id)imageWithShadowNamed:(id)arg1 ;
-(void)beginImageContextWithMinimumWidth:(float)arg1 ;
-(id)imageFromImageContextClippedToWidth:(float)arg1 ;
-(void)endImageContext;
-(char)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)setLayoutManager:(UIStatusBarLayoutManager *)arg1 ;
-(char)isVisible;
-(int)legibilityStyle;
-(void)setPersistentAnimationsEnabled:(char)arg1 ;
-(id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4 ;
-(void)setAllowsUpdates:(char)arg1 ;
-(float)updateContentsAndWidth;
-(char)allowsUpdates;
-(float)legibilityStrength;
-(float)adjustFrameToNewSize:(float)arg1 ;
-(void)setLayerContentsImage:(id)arg1 ;
-(int)textStyle;
-(float)standardPadding;
-(float)shadowPadding;
-(void)endDisablingRasterization;
-(void)setVisible:(char)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(void)setCurrentOverlap:(float)arg1 ;
-(float)currentOverlap;
-(float)currentLeftOverlap;
-(float)currentRightOverlap;
-(float)setStatusBarData:(id)arg1 actions:(int)arg2 ;
-(id)textFont;
-(float)extraLeftPadding;
-(float)resetContentOverlap;
-(float)addContentOverlap:(float)arg1 ;
-(float)maximumOverlap;
-(char)animatesDataChange;
-(void)performPendedActions;
-(id)imageWithText:(id)arg1 ;
-(void)beginDisablingRasterization;
@end

