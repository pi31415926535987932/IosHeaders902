/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBDateTimeOverrideObserver.h>

@class _UILegibilitySettings, NSString;

@interface SBLockScreenDateViewController : UIViewController <SBDateTimeOverrideObserver> {

	NSNumber* _timerToken;
	char _disablesUpdates;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,getter=isDateHidden,nonatomic) char dateHidden; 
@property (assign,nonatomic) char disablesUpdates;                                    //@synthesize disablesUpdates=_disablesUpdates - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(id)dateViewIfExists;
-(void)_updateFormat;
-(void)_backlightChanged;
-(void)setDisablesUpdates:(char)arg1 ;
-(char)disablesUpdates;
-(void)_addObservers;
-(void)dealloc;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_updateView;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(char)isDateHidden;
-(void)setDateHidden:(char)arg1 ;
-(void)setContentAlpha:(float)arg1 withDateVisible:(char)arg2 ;
-(void)setCustomSubtitleText:(id)arg1 withColor:(id)arg2 ;
-(id)dateView;
-(void)_stopUpdateTimer;
-(void)_startUpdateTimer;
@end

