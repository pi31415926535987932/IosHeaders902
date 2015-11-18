/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UINavigationController, UIViewController, NSArray;

@interface _UINavigationControllerPalette : UIView {

	struct {
		unsigned isAttached : 1;
		unsigned attachmentIsChanging : 1;
		unsigned restartPaletteTransitionIfNecessary : 1;
		unsigned pinned : 1;
		unsigned pinningBarShadowIsHidden : 1;
		unsigned paletteShadowIsHidden : 1;
	}  _paletteFlags;
	char __paletteOverridesPinningBar;
	char _paletteIsAboveBar;
	char _visibleWhenPinningBarIsHidden;
	char __palettePinningBarHidden;
	UIView* __backgroundView;
	UINavigationController* _navController;
	unsigned _boundaryEdge;
	UIViewController* __unpinnedController;
	id __pinningBar;
	NSArray* __constraints;
	NSArray* __backgroundConstraints;
	CGSize __size;
	UIEdgeInsets _preferredContentInsets;

}

@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView;                                                              //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (assign,setter=_setPaletteOverridesPinningBar:,nonatomic) char _paletteOverridesPinningBar;                                          //@synthesize _paletteOverridesPinningBar=__paletteOverridesPinningBar - In the implementation block
@property (nonatomic,readonly) UINavigationController * navController;                                                                         //@synthesize navController=_navController - In the implementation block
@property (nonatomic,readonly) unsigned boundaryEdge;                                                                                          //@synthesize boundaryEdge=_boundaryEdge - In the implementation block
@property (assign,getter=isPinned,nonatomic) char pinned; 
@property (assign,nonatomic) char pinningBarShadowIsHidden; 
@property (assign,nonatomic) char paletteShadowIsHidden; 
@property (assign,nonatomic) char paletteIsAboveBar;                                                                                           //@synthesize paletteIsAboveBar=_paletteIsAboveBar - In the implementation block
@property (assign,getter=isVisibleWhenPinningBarIsHidden,nonatomic) char visibleWhenPinningBarIsHidden;                                        //@synthesize visibleWhenPinningBarIsHidden=_visibleWhenPinningBarIsHidden - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredContentInsets;                                                                              //@synthesize preferredContentInsets=_preferredContentInsets - In the implementation block
@property (assign,nonatomic) UIViewController * _unpinnedController;                                                                           //@synthesize _unpinnedController=__unpinnedController - In the implementation block
@property (assign,setter=_setPinningBar:,nonatomic) id _pinningBar;                                                                            //@synthesize _pinningBar=__pinningBar - In the implementation block
@property (getter=_attachmentIsChanging,nonatomic,readonly) char _attachmentIsChanging; 
@property (assign,setter=_setRestartPaletteTransitionIfNecessary:,nonatomic) char _restartPaletteTransitionIfNecessary; 
@property (setter=_setConstraints:,nonatomic,retain) NSArray * _constraints;                                                                   //@synthesize _constraints=__constraints - In the implementation block
@property (assign,setter=_setSize:,nonatomic) CGSize _size;                                                                                    //@synthesize _size=__size - In the implementation block
@property (setter=_setBackgroundConstraints:,nonatomic,retain) NSArray * _backgroundConstraints;                                               //@synthesize _backgroundConstraints=__backgroundConstraints - In the implementation block
@property (assign,setter=_setPalettePinningBarHidden:,getter=_isPalettePinningBarHidden,nonatomic) char _palettePinningBarHidden;              //@synthesize _palettePinningBarHidden=__palettePinningBarHidden - In the implementation block
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(UIView *)_backgroundView;
-(void)_setVisualAltitude:(float)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(void)didMoveToSuperview;
-(void)_setBackgroundView:(id)arg1 ;
-(CGSize)_size;
-(char)_paletteOverridesPinningBar;
-(char)paletteShadowIsHidden;
-(void)_updateBackgroundView;
-(char)isAttached;
-(char)isVisibleWhenPinningBarIsHidden;
-(char)_isPalettePinningBarHidden;
-(unsigned)boundaryEdge;
-(char)paletteIsHidden;
-(void)_setTopConstraintConstant:(float)arg1 ;
-(void)setFrame:(CGRect)arg1 isAnimating:(char)arg2 ;
-(void)_setLeftConstraintConstant:(float)arg1 ;
-(void)_setPalettePinningBarHidden:(char)arg1 ;
-(char)isPinned;
-(void)_resetConstraintConstants:(float)arg1 ;
-(char)_restartPaletteTransitionIfNecessary;
-(NSArray *)_constraints;
-(void)_configurePaletteConstraintsForBoundary;
-(UIEdgeInsets)preferredContentInsets;
-(id)_initWithNavigationController:(id)arg1 forEdge:(unsigned)arg2 ;
-(void)_setSize:(CGSize)arg1 ;
-(void)_setPinningBar:(id)arg1 ;
-(void)_setAttached:(char)arg1 didComplete:(char)arg2 ;
-(void)setPinned:(char)arg1 ;
-(char)pinningBarShadowIsHidden;
-(id)_pinningBar;
-(void)_setRestartPaletteTransitionIfNecessary:(char)arg1 ;
-(char)_attachmentIsChanging;
-(UINavigationController *)navController;
-(void)setPinningBarShadowIsHidden:(char)arg1 ;
-(void)setVisibleWhenPinningBarIsHidden:(char)arg1 ;
-(void)_setBackgroundConstraints:(id)arg1 ;
-(void)_setConstraints:(id)arg1 ;
-(void)_disableConstraints;
-(void)_enableConstraints;
-(void)_resetHeightConstraintConstant;
-(void)_configureConstraintsForBackground:(id)arg1 ;
-(void)_setupBackgroundViewIfNecessary;
-(void)_setAttachmentIsChanging:(char)arg1 ;
-(void)setPaletteShadowIsHidden:(char)arg1 ;
-(void)_setPaletteOverridesPinningBar:(char)arg1 ;
-(char)paletteIsAboveBar;
-(void)setPaletteIsAboveBar:(char)arg1 ;
-(void)setPreferredContentInsets:(UIEdgeInsets)arg1 ;
-(UIViewController *)_unpinnedController;
-(void)set_unpinnedController:(UIViewController *)arg1 ;
-(NSArray *)_backgroundConstraints;
@end

