/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WatchKit/WatchKit-Structs.h>
@class NSArray, NSString;

@interface WKInterfaceController : NSObject {

	NSArray* _topLevelObjects;
	NSArray* _properties;
	NSString* _viewControllerID;
	CGRect _contentFrame;

}

@property (assign,nonatomic) CGRect contentFrame;                      //@synthesize contentFrame=_contentFrame - In the implementation block
@property (nonatomic,retain) NSArray * topLevelObjects;                //@synthesize topLevelObjects=_topLevelObjects - In the implementation block
@property (nonatomic,copy) NSArray * properties;                       //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSString * viewControllerID;              //@synthesize viewControllerID=_viewControllerID - In the implementation block
+(CGRect)screenBounds;
+(float)screenScale;
+(char)openParentApplication:(id)arg1 reply:(/*^block*/id)arg2 ;
+(void)reloadRootControllersWithNames:(id)arg1 contexts:(id)arg2 ;
+(void)_insertPageControllersAtIndexes:(id)arg1 withNames:(id)arg2 contexts:(id)arg3 ;
+(void)_movePageControllerAtIndex:(int)arg1 toIndex:(int)arg2 ;
+(void)_removePageControllersAtIndexes:(id)arg1 ;
-(void)didAppear;
-(void)setContentFrame:(CGRect)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)animateWithDuration:(double)arg1 animations:(/*^block*/id)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(NSArray *)properties;
-(void)setProperties:(NSArray *)arg1 ;
-(void)setViewControllerID:(NSString *)arg1 ;
-(NSString *)viewControllerID;
-(void)didDeactivate;
-(void)handleUserActivity:(id)arg1 ;
-(void)table:(id)arg1 didSelectRowAtIndex:(int)arg2 ;
-(id)contextsForSegueWithIdentifier:(id)arg1 inTable:(id)arg2 rowIndex:(int)arg3 ;
-(id)contextForSegueWithIdentifier:(id)arg1 inTable:(id)arg2 rowIndex:(int)arg3 ;
-(id)contextsForSegueWithIdentifier:(id)arg1 ;
-(id)contextForSegueWithIdentifier:(id)arg1 ;
-(void)handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 ;
-(void)handleActionWithIdentifier:(id)arg1 forLocalNotification:(id)arg2 ;
-(void)setTopLevelObjects:(NSArray *)arg1 ;
-(void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3 ;
-(void)awakeWithContext:(id)arg1 ;
-(void)pickerDidSettle:(id)arg1 ;
-(void)pickerDidFocus:(id)arg1 ;
-(void)pickerDidResignFocus:(id)arg1 ;
-(void)pushControllerWithName:(id)arg1 context:(id)arg2 ;
-(void)popController;
-(void)popToRootController;
-(void)becomeCurrentPage;
-(void)presentControllerWithName:(id)arg1 context:(id)arg2 ;
-(void)presentControllerWithNames:(id)arg1 contexts:(id)arg2 ;
-(void)dismissController;
-(void)presentTextInputControllerWithSuggestions:(id)arg1 allowedInputMode:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentTextInputControllerWithSuggestionsForLanguage:(/*^block*/id)arg1 allowedInputMode:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissTextInputController;
-(void)presentMediaPlayerControllerWithURL:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissMediaPlayerController;
-(void)presentAudioRecordingControllerWithOutputURL:(id)arg1 preset:(int)arg2 maximumDuration:(double)arg3 actionTitle:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)dismissAudioRecordingController;
-(void)presentAddPassesControllerWithPasses:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAddPassesController;
-(void)addMenuItemWithImage:(id)arg1 title:(id)arg2 action:(SEL)arg3 ;
-(void)addMenuItemWithImageNamed:(id)arg1 title:(id)arg2 action:(SEL)arg3 ;
-(void)addMenuItemWithItemIcon:(int)arg1 title:(id)arg2 action:(SEL)arg3 ;
-(void)clearAllMenuItems;
-(void)updateUserActivity:(id)arg1 userInfo:(id)arg2 ;
-(void)invalidateUserActivity;
-(void)beginGlanceUpdates;
-(void)endGlanceUpdates;
-(NSArray *)topLevelObjects;
-(void)_setContentFrame:(CGRect)arg1 ;
-(void)willActivate;
-(void)willDisappear;
-(CGRect)contentFrame;
@end

