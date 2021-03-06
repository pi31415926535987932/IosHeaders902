/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface UIAlertControllerStackManager : NSObject {

	NSMutableArray* _alertControllerStack;
	NSMutableArray* _hiddenAlertControllers;

}
+(id)sharedStackManager;
-(id)init;
-(void)_showHiddenStackedAlertControllers;
-(void)_hideStackedAlertControllers;
-(void)_alertControllerWillAppear:(id)arg1 ;
-(void)_alertControllerDidAppear:(id)arg1 ;
-(void)_alertControllerWillDisappear:(id)arg1 ;
-(void)_alertControllerDidDisappear:(id)arg1 ;
-(char)_alertControllerShouldBeTrackedInStack:(id)arg1 ;
-(void)_willShowAlertController:(id)arg1 ;
-(void)_addAlertControllerToStack:(id)arg1 ;
-(void)_willHideAlertController:(id)arg1 ;
-(void)_removeAlertControllerFromStack:(id)arg1 ;
-(void)_didHideAlertController:(id)arg1 ;
-(void)_displayedAlertControllersChanged;
-(id)_topAlertControllerInStack;
-(int)_alertControllerStackCount;
@end

