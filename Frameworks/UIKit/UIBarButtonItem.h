/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIBarItem.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UIBarButtonItemViewOwner;
@class NSString, NSSet, UIImage, UIView, NSDictionary, UINavigationItem, UIBarButtonItemGroup, UILayoutGuide, UIToolbarButton, UIColor;

@interface UIBarButtonItem : UIBarItem <NSCoding> {

	NSString* _title;
	NSSet* _possibleTitles;
	SEL _action;
	id _target;
	UIImage* _image;
	UIImage* _landscapeImagePhone;
	UIEdgeInsets _imageInsets;
	UIEdgeInsets _landscapeImagePhoneInsets;
	float _width;
	UIView* _view;
	int _tag;
	id _appearanceStorage;
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned isMinibarView : 1;
		unsigned disableAutosizing : 1;
		unsigned selected : 1;
		unsigned imageHasEffects : 1;
	}  _barButtonItemFlags;
	char _flexible;
	char __showsBackButtonIndicator;
	char __hidden;
	char __viewWantsLetterpressImage;
	char __needsViewUpdateForLetterpressImage;
	char _groupRepresentative;
	float _toolbarCharge;
	float _minimumWidth;
	float _maximumWidth;
	NSSet* _possibleSystemItems;
	NSDictionary* _stylesForSizingTitles;
	UIBarButtonItem* __itemVariation;
	UINavigationItem* __owningNavigationItem;
	UIBarButtonItemGroup* __owningButtonGroup;
	id<_UIBarButtonItemViewOwner> __viewOwner;
	/*^block*/id __autoValidationHandler;
	UILayoutGuide* __popoverLayoutGuide;
	UIBarButtonItemGroup* _buttonGroup;

}

@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (nonatomic,readonly) UIToolbarButton * _toolbarButton; 
@property (setter=_setMiniImage:,getter=_miniImage,nonatomic,retain) UIImage * miniImage; 
@property (assign,setter=_setMiniImageInsets:,getter=_miniImageInsets,nonatomic) UIEdgeInsets miniImageInsets; 
@property (nonatomic,readonly) char isSystemItem; 
@property (nonatomic,readonly) int systemItem; 
@property (setter=_setPossibleSystemItems:,getter=_possibleSystemItems,nonatomic,copy) NSSet * possibleSystemItems; 
@property (setter=_setPossibleItemVariations:,nonatomic,copy) NSSet * _possibleItemVariations; 
@property (setter=_setItemVariation:,nonatomic,retain) UIBarButtonItem * _itemVariation; 
@property (assign,nonatomic) char selected; 
@property (assign,setter=_setImageHasEffects:,nonatomic) char _imageHasEffects; 
@property (nonatomic,readonly) char _needsViewUpdateForLetterpressImage; 
@property (assign,nonatomic) int style; 
@property (assign,nonatomic) float width; 
@property (nonatomic,copy) NSSet * possibleTitles; 
@property (nonatomic,retain) UIView * customView; 
@property (assign,nonatomic) SEL action;                                                                                         //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id target;                                                                                   //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIColor * tintColor; 
@property (setter=_setPossibleSystemItems:,getter=_possibleSystemItems,nonatomic,copy) NSSet * possibleSystemItems;              //@synthesize possibleSystemItems=_possibleSystemItems - In the implementation block
@property (setter=_setItemVariation:,nonatomic,retain) UIBarButtonItem * _itemVariation;                                         //@synthesize _itemVariation=__itemVariation - In the implementation block
@property (setter=_setStylesForSizingTitles:,nonatomic,copy) NSDictionary * _stylesForSizingTitles;                              //@synthesize stylesForSizingTitles=_stylesForSizingTitles - In the implementation block
@property (assign,setter=_setShowsBackButtonIndicator:,nonatomic) char _showsBackButtonIndicator;                                //@synthesize _showsBackButtonIndicator=__showsBackButtonIndicator - In the implementation block
@property (assign,setter=_setHidden:,nonatomic) char _hidden;                                                                    //@synthesize _hidden=__hidden - In the implementation block
@property (assign,setter=_setOwningNavigationItem:,nonatomic,__weak) UINavigationItem * _owningNavigationItem;                   //@synthesize _owningNavigationItem=__owningNavigationItem - In the implementation block
@property (assign,setter=_setOwningButtonGroup:,nonatomic,__weak) UIBarButtonItemGroup * _owningButtonGroup;                     //@synthesize _owningButtonGroup=__owningButtonGroup - In the implementation block
@property (assign,setter=_setViewOwner:,nonatomic,__weak) id<_UIBarButtonItemViewOwner> _viewOwner;                              //@synthesize _viewOwner=__viewOwner - In the implementation block
@property (setter=_setAutoValidationHandler:,nonatomic,copy) id _autoValidationHandler;                                          //@synthesize _autoValidationHandler=__autoValidationHandler - In the implementation block
@property (setter=_setPopoverLayoutGuide:,nonatomic,retain) UILayoutGuide * _popoverLayoutGuide;                                 //@synthesize _popoverLayoutGuide=__popoverLayoutGuide - In the implementation block
@property (assign,setter=_setToolbarCharge:,nonatomic) float _toolbarCharge;                                                     //@synthesize toolbarCharge=_toolbarCharge - In the implementation block
@property (assign,setter=_setMinimumWidth:,nonatomic) float _minimumWidth;                                                       //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,setter=_setMaximumWidth:,nonatomic) float _maximumWidth;                                                       //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,setter=_setFlexible:,nonatomic) char _flexible;                                                                //@synthesize flexible=_flexible - In the implementation block
@property (nonatomic,readonly) char _viewWantsLetterpressImage;                                                                  //@synthesize _viewWantsLetterpressImage=__viewWantsLetterpressImage - In the implementation block
@property (nonatomic,readonly) char _needsViewUpdateForLetterpressImage;                                                         //@synthesize _needsViewUpdateForLetterpressImage=__needsViewUpdateForLetterpressImage - In the implementation block
@property (nonatomic,__weak,readonly) UIBarButtonItemGroup * buttonGroup;                                                        //@synthesize buttonGroup=_buttonGroup - In the implementation block
@property (nonatomic,readonly) char groupRepresentative;                                                                         //@synthesize groupRepresentative=_groupRepresentative - In the implementation block
+(void)_getSystemItemStyle:(int*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(int)arg6 landscape:(char)arg7 alwaysBordered:(char)arg8 usingSystemItem:(int)arg9 usingItemStyle:(int)arg10 ;
+(id)_appearanceBlindViewClasses;
+(Class)classForNavigationButton;
+(Class)classForToolbarButton;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)window;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)view;
-(id)nextResponder;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)title;
-(void)setView:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)image;
-(int)style;
-(id)target;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(int)tag;
-(void)setTag:(int)arg1 ;
-(char)isCustomViewItem;
-(id)_appearanceStorage;
-(char)_needsViewUpdateForLetterpressImage;
-(void)_updateView;
-(char)_hidden;
-(char)_showsBackButtonIndicator;
-(void)_setOwningNavigationItem:(id)arg1 ;
-(char)isSystemItem;
-(int)systemItem;
-(id)createViewForNavigationItem:(id)arg1 ;
-(id)landscapeImagePhone;
-(char)isMinibarView;
-(void)setIsMinibarView:(char)arg1 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)setStyle:(int)arg1 ;
-(char)_shouldBezelSystemButtonImage;
-(id)backgroundImageForState:(unsigned)arg1 style:(int)arg2 barMetrics:(int)arg3 ;
-(char)_isImageBarButtonItem;
-(float)_leftImagePaddingForEdgeMarginInNavBar;
-(float)_rightImagePaddingForEdgeMarginInNavBar;
-(id)scriptingID;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned)arg2 barMetrics:(int)arg3 ;
-(NSDictionary *)_stylesForSizingTitles;
-(void)_setStylesForSizingTitles:(id)arg1 ;
-(id)_possibleSystemItems;
-(float)_minimumWidth;
-(float)_maximumWidth;
-(void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned)arg2 barMetrics:(int)arg3 ;
-(float)width;
-(void)setAction:(SEL)arg1 ;
-(void)setSelected:(char)arg1 ;
-(id)initWithTitle:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(void)_setPossibleItemVariations:(id)arg1 ;
-(void)_setItemVariation:(id)arg1 ;
-(float)_width;
-(id)backgroundImageForState:(unsigned)arg1 barMetrics:(int)arg2 ;
-(id)titleTextAttributesForState:(unsigned)arg1 ;
-(char)_imageHasEffects;
-(id)createViewForToolbar:(id)arg1 ;
-(UIView *)customView;
-(char)_flexible;
-(void)_sendAction:(id)arg1 withEvent:(id)arg2 ;
-(void)_setHidden:(char)arg1 ;
-(char)selected;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(char)hasTitle;
-(id)resolvedTitle;
-(char)hasImage;
-(id)_imageForState:(unsigned)arg1 metrics:(int)arg2 position:(int)arg3 type:(int)arg4 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(id)initWithCustomView:(id)arg1 ;
-(void)setWidth:(float)arg1 ;
-(void)_setToolbarCharge:(float)arg1 ;
-(void)setLandscapeImagePhone:(id)arg1 ;
-(void)setCustomView:(UIView *)arg1 ;
-(id<_UIBarButtonItemViewOwner>)_viewOwner;
-(id)_itemForPresenting;
-(void)setPossibleTitles:(NSSet *)arg1 ;
-(void)_getSystemItemStyle:(int*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(int)arg6 landscape:(char)arg7 alwaysBordered:(char)arg8 ;
-(void)_getNavBarEdgeSizeAdjust:(CGSize*)arg1 imageInsets:(UIEdgeInsets*)arg2 landscape:(char)arg3 ;
-(void)_getToolbarEdgeInsets:(UIEdgeInsets*)arg1 imageInsets:(UIEdgeInsets*)arg2 glowInsets:(UIEdgeInsets*)arg3 forBarStyle:(int)arg4 landscape:(char)arg5 alwaysBordered:(char)arg6 ;
-(UINavigationItem *)_owningNavigationItem;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned)arg2 style:(int)arg3 barMetrics:(int)arg4 ;
-(void)_applyPositionAdjustmentToSegmentedControl:(id)arg1 ;
-(id)initWithImage:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(int)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(id)initWithBarButtonSystemItem:(int)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)setLandscapeImagePhoneInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)landscapeImagePhoneInsets;
-(UIBarButtonItemGroup *)_owningButtonGroup;
-(void)_setButtonGroup:(id)arg1 isRepresentative:(char)arg2 ;
-(void)_executeValidationHandler;
-(id)_viewForPresenting;
-(CGRect)_rectForPresenting;
-(NSSet *)_possibleItemVariations;
-(id)itemVariation;
-(NSSet *)possibleTitles;
-(void)_setSystemItem:(int)arg1 ;
-(void)_setPossibleSystemItems:(id)arg1 ;
-(id)backButtonBackgroundImageForState:(unsigned)arg1 barMetrics:(int)arg2 ;
-(void)setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2 ;
-(float)backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(int)arg2 ;
-(UIOffset)titlePositionAdjustmentForBarMetrics:(int)arg1 ;
-(void)setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2 ;
-(float)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1 ;
-(void)setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(int)arg2 ;
-(UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(int)arg1 ;
-(float)_toolbarCharge;
-(void)_setMinimumWidth:(float)arg1 ;
-(void)_setMaximumWidth:(float)arg1 ;
-(void)_setFlexible:(char)arg1 ;
-(UIBarButtonItem *)_itemVariation;
-(void)_setShowsBackButtonIndicator:(char)arg1 ;
-(void)_setOwningButtonGroup:(id)arg1 ;
-(void)_setViewOwner:(id)arg1 ;
-(id)_autoValidationHandler;
-(void)_setAutoValidationHandler:(/*^block*/id)arg1 ;
-(UILayoutGuide *)_popoverLayoutGuide;
-(void)_setPopoverLayoutGuide:(id)arg1 ;
-(char)_viewWantsLetterpressImage;
-(UIBarButtonItemGroup *)buttonGroup;
-(char)groupRepresentative;
-(id)_miniImage;
-(void)_setMiniImage:(id)arg1 ;
-(UIEdgeInsets)_miniImageInsets;
-(void)_setMiniImageInsets:(UIEdgeInsets)arg1 ;
-(UIToolbarButton *)_toolbarButton;
-(void)_setImageHasEffects:(char)arg1 ;
-(id)_foregroundColorForLetterpressWithView:(id)arg1 ;
-(void)_setWidth:(float)arg1 ;
-(id)_resolveSystemTitle;
-(char)_resolveSystemImage:(id*)arg1 metrics:(int)arg2 position:(int)arg3 type:(int)arg4 ;
@end

