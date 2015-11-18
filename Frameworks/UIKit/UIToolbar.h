/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIShadowedView.h>
#import <UIKit/_UIBackdropViewGraphicsQualityChangeDelegate.h>
#import <UIKit/_UIBarPositioningInternal.h>
#import <UIKit/UIBarPositioning.h>

@protocol UIToolbarDelegate;
@class NSArray, UIColor, _UIBackdropView, UIImageView, UIView, NSString;

@interface UIToolbar : UIView <_UIShadowedView, _UIBackdropViewGraphicsQualityChangeDelegate, _UIBarPositioningInternal, UIBarPositioning> {

	id<UIToolbarDelegate> _delegate;
	NSArray* _items;
	UIColor* _barTintColor;
	struct {
		unsigned barStyle : 3;
		unsigned barTranslucence : 3;
		unsigned isLocked : 1;
		unsigned hasCustomBackgroundView : 1;
	}  _toolbarFlags;
	float _extraEdgeInsets;
	id _appearanceStorage;
	_UIBackdropView* _adaptiveBackdrop;
	UIImageView* _backgroundView;
	UIView* _shadowView;
	char _centerTextButtons;
	char __wantsLetterpressContent;
	int _barPosition;
	NSString* _backdropViewLayerGroupName;

}

@property (assign,nonatomic) int barStyle; 
@property (nonatomic,copy) NSArray * items; 
@property (assign,getter=isTranslucent,nonatomic) char translucent; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * barTintColor;                                                                                                       //@synthesize barTintColor=_barTintColor - In the implementation block
@property (assign,nonatomic) id<UIToolbarDelegate> delegate; 
@property (assign,nonatomic) char centerTextButtons;                                                                                                       //@synthesize centerTextButtons=_centerTextButtons - In the implementation block
@property (getter=isMinibar,nonatomic,readonly) char minibar; 
@property (setter=_setBackgroundView:,nonatomic,retain) UIImageView * _backgroundView; 
@property (assign,setter=_setHidesShadow:,nonatomic) char _hidesShadow; 
@property (assign,setter=_setWantsLetterpressContent:,nonatomic) char _wantsLetterpressContent;                                                            //@synthesize _wantsLetterpressContent=__wantsLetterpressContent - In the implementation block
@property (assign,setter=_setLocked:,getter=_isLocked,nonatomic) char _locked; 
@property (setter=_setShadowView:,nonatomic,retain) UIView * _shadowView;                                                                                  //@synthesize shadowView=_shadowView - In the implementation block
@property (setter=_setBackdropViewLayerGroupName:,getter=_backdropViewLayerGroupName,nonatomic,retain) NSString * backdropViewLayerGroupName;              //@synthesize backdropViewLayerGroupName=_backdropViewLayerGroupName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int barPosition;                                                                                                            //@synthesize barPosition=_barPosition - In the implementation block
+(float)defaultHeight;
+(id)defaultButtonFont;
+(Class)defaultButtonClass;
+(Class)defaultTextButtonClass;
+(float)defaultSelectionModeHeight;
+(float)defaultHeightForBarSize:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAutoresizingMask:(unsigned)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIToolbarDelegate>)arg1 ;
-(void)dealloc;
-(void)invalidateIntrinsicContentSize;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<UIToolbarDelegate>)delegate;
-(UIImageView *)_backgroundView;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(char)arg1 ;
-(void)_setVisualAltitude:(float)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(char)isTranslucent;
-(id)scriptingInfoWithChildren;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(char)_subclassImplementsDrawRect;
-(char)isMinibar;
-(UIView *)_shadowView;
-(void)_updateBackgroundColor;
-(id)_effectiveBarTintColor;
-(void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1 ;
-(void)_updateBackgroundImage;
-(char)_wantsLetterpressContent;
-(CGSize)defaultSizeForOrientation:(int)arg1 ;
-(void)_updateOpacity;
-(void)setItems:(id)arg1 animated:(char)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)_setBarPosition:(int)arg1 ;
-(void)addConstraint:(id)arg1 ;
-(void)removeConstraint:(id)arg1 ;
-(void)setBarStyle:(int)arg1 ;
-(void)_customViewChangedForButtonItem:(id)arg1 ;
-(int)barStyle;
-(void)setTranslucent:(char)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(id)_currentCustomBackground;
-(id)_currentCustomBackgroundRespectOversize_legacy:(char*)arg1 ;
-(void)_setBackgroundView:(id)arg1 ;
-(int)_barPosition;
-(int)barPosition;
-(void)_setBackgroundImage:(id)arg1 mini:(id)arg2 ;
-(void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned)arg3 ;
-(void)_setBackdropViewLayerGroupName:(id)arg1 ;
-(void)_setWantsLetterpressContent:(char)arg1 ;
-(char)_hidesShadow;
-(void)_setHidesShadow:(char)arg1 ;
-(UIColor *)barTintColor;
-(id)_backdropViewLayerGroupName;
-(void)_setShadowView:(id)arg1 ;
-(id)backdropView:(id)arg1 willChangeToGraphicsQuality:(int)arg2 ;
-(void)backdropView:(id)arg1 didChangeToGraphicsQuality:(int)arg2 ;
-(id)_adaptiveBackdrop;
-(void)_setLocked:(char)arg1 ;
-(id)backgroundImageForToolbarPosition:(int)arg1 barMetrics:(int)arg2 ;
-(char)_isInNavigationBar;
-(void)_updateBarForStyle;
-(void)_updateItemsForNewFrame:(id)arg1 ;
-(id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(char)arg3 actuallyRepositionButtons:(char)arg4 ;
-(void)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(char)arg3 ;
-(char)_isTopBar_legacy;
-(char)_supportsAdaptiveBackground;
-(void)_frameOrBoundsChangedWithVisibleSizeChange:(char)arg1 wasMinibar:(char)arg2 ;
-(void)_frameOrCenterChanged;
-(void)_layoutBackgroundViewConsideringStatusBar;
-(void)_cleanupAdaptiveBackdrop;
-(float)_edgeMarginForBorderedItem:(char)arg1 isText:(char)arg2 ;
-(id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id*)arg2 withHitRects:(id*)arg3 buttonIndexes:(id*)arg4 textButtonIndexes:(id*)arg5 ;
-(void)_updateScriptingInfo:(id)arg1 view:(id)arg2 ;
-(id)initInView:(id)arg1 withFrame:(CGRect)arg2 withItemList:(id)arg3 ;
-(void)setBackgroundImage:(id)arg1 forToolbarPosition:(int)arg2 barMetrics:(int)arg3 ;
-(void)_sendAction:(id)arg1 withEvent:(id)arg2 ;
-(void)setShadowImage:(id)arg1 forToolbarPosition:(int)arg2 ;
-(id)shadowImageForToolbarPosition:(int)arg1 ;
-(CGRect)_frameOfBarButtonItem:(id)arg1 ;
-(char)_isLocked;
-(id)_buttonName:(id)arg1 withType:(int)arg2 ;
-(char)_isAdaptiveToolbarDisabled;
-(void)_setAdaptiveToolbarDisabled:(char)arg1 ;
-(void)setExtraEdgeInsets:(float)arg1 ;
-(float)extraEdgeInsets;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)initInView:(id)arg1 withItemList:(id)arg2 ;
-(void)animateToolbarItemIndex:(unsigned)arg1 duration:(double)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4 ;
-(id)createButtonWithDescription:(id)arg1 ;
-(void)positionButtons:(id)arg1 tags:(int*)arg2 count:(int)arg3 group:(int)arg4 ;
-(void)_buttonBarFinishedAnimating;
-(void)showButtons:(int*)arg1 withCount:(int)arg2 withDuration:(double)arg3 ;
-(void)registerButtonGroup:(int)arg1 withButtons:(int*)arg2 withCount:(int)arg3 ;
-(void)showButtonGroup:(int)arg1 withDuration:(double)arg2 ;
-(int)currentButtonGroup;
-(void)getVisibleButtonTags:(int*)arg1 count:(unsigned*)arg2 maxItems:(unsigned)arg3 ;
-(void)setButtonBarTrackingMode:(int)arg1 ;
-(void)setBadgeValue:(id)arg1 forButton:(int)arg2 ;
-(void)setBadgeGlyph:(id)arg1 forButton:(int)arg2 ;
-(void)setBadgeAnimated:(char)arg1 forButton:(int)arg2 ;
-(char)onStateForButton:(int)arg1 ;
-(void)setOnStateForButton:(char)arg1 forButton:(int)arg2 ;
-(void)animateWithDuration:(float)arg1 forButton:(int)arg2 ;
-(id)buttonItems;
-(void)setButtonItems:(id)arg1 ;
-(void)_setForceTopBarAppearance:(char)arg1 ;
-(char)centerTextButtons;
-(void)setCenterTextButtons:(char)arg1 ;
-(char)isElementAccessibilityExposedToInterfaceBuilder;
-(float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2 ;
-(float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2 ;
-(char)_hasCustomAutolayoutNeighborSpacing;
@end

