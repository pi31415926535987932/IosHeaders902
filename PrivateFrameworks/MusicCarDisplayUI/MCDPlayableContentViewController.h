/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class MCDPCModel, MCDPCContainer, NSArray, NSString;

@interface MCDPlayableContentViewController : UINavigationController <UINavigationControllerDelegate> {

	MCDPCModel* _model;
	MCDPCContainer* _rootContainer;
	NSArray* _stackToRebuild;
	char _hasBrowsableContent;
	char _hasLoaded;
	NSString* _bundleID;

}

@property (nonatomic,copy,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bundleID;
-(void)_setupView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(char)arg2 ;
-(id)initWithBundleID:(id)arg1 ;
-(void)_modelWillInvalidate:(id)arg1 ;
-(void)_modelDidInvalidate:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 stack:(id)arg2 ;
-(id)_createRootViewController;
-(void)_populateStack;
-(void)_evaluateViewControllers;
-(void)refreshNavigationStackForLaunch:(char)arg1 ;
-(id)currentStack;
@end

