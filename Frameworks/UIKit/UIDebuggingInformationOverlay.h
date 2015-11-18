/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWindow.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class UIDebuggingInformationRootTableViewController;

@interface UIDebuggingInformationOverlay : UIWindow <UISplitViewControllerDelegate> {

	UIDebuggingInformationRootTableViewController* _rootTableViewController;

}

@property (nonatomic,retain) UIDebuggingInformationRootTableViewController * rootTableViewController;              //@synthesize rootTableViewController=_rootTableViewController - In the implementation block
+(void)prepareDebuggingOverlay;
+(id)overlay;
+(void)pushDisableApplyingConfigurations;
+(void)popDisableApplyingConfigurations;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIDebuggingInformationRootTableViewController *)rootTableViewController;
-(void)toggleVisibility;
-(void)_handleActivationGesture:(id)arg1 ;
-(void)setRootTableViewController:(UIDebuggingInformationRootTableViewController *)arg1 ;
@end

