/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpotlightUI/SPUISearchResultsModalViewControllerAction.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class NSString;

@interface SPUISearchResultsiTunesAction : SPUISearchResultsModalViewControllerAction <SKStoreProductViewControllerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)requiresNavigationController;
-(void)loadModalViewControllerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)productViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
@end

