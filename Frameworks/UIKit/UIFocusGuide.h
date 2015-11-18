/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILayoutGuide.h>
#import <UIKit/_UIFocusRegion.h>

@class UIView, NSString;

@interface UIFocusGuide : UILayoutGuide <_UIFocusRegion> {

	char _didSetPreferredFocusedView;
	char _enabled;
	char _automaticallyDisableWhenIntersectingFocus;
	char _automaticallyPreferOwningView;
	UIView* _preferredFocusedView;

}

@property (assign,getter=isEnabled,nonatomic) char enabled;                                                                                                                                       //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) UIView * preferredFocusedView;                                                                                                                                //@synthesize preferredFocusedView=_preferredFocusedView - In the implementation block
@property (assign,setter=_setAutomaticallyDisableWhenIntersectingFocus:,getter=_automaticallyDisableWhenIntersectingFocus,nonatomic) char automaticallyDisableWhenIntersectingFocus;              //@synthesize automaticallyDisableWhenIntersectingFocus=_automaticallyDisableWhenIntersectingFocus - In the implementation block
@property (assign,setter=_setAutomaticallyPreferOwningView:,getter=_automaticallyPreferOwningView,nonatomic) char automaticallyPreferOwningView;                                                  //@synthesize automaticallyPreferOwningView=_automaticallyPreferOwningView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(CGRect)_focusRegionFrame;
-(char)isEnabled;
-(UIView *)preferredFocusedView;
-(char)_isTransparentFocusRegion;
-(char)_focusRegionIsEligibleForFocus;
-(char)_focusRegionCanBecomeFocused;
-(id)_focusRegionItem;
-(id)_childFocusRegions;
-(id)_focusRegionView;
-(id)_focusRegionGuides;
-(id)_focusDebugOverlayParentView;
-(void)setPreferredFocusedView:(UIView *)arg1 ;
-(void)_didUpdateFocusToPreferredFocusedView;
-(char)_automaticallyDisableWhenIntersectingFocus;
-(char)_automaticallyPreferOwningView;
-(void)_setAutomaticallyDisableWhenIntersectingFocus:(char)arg1 ;
-(void)_setAutomaticallyPreferOwningView:(char)arg1 ;
@end

