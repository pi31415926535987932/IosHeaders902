/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:46:39 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFBrowserContentViewController.h>
#import <libobjc.A.dylib/SFServiceViewControllerProtocol.h>

@class NSString;

@interface SFBrowserServiceViewController : _SFBrowserContentViewController <SFServiceViewControllerProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)loadURL:(id)arg1 ;
-(void)setEntersReaderIfAvailable:(char)arg1 ;
-(void)setShowingLinkPreview:(char)arg1 ;
-(void)addCurrentPageToBookmarks;
-(void)repostNotificationInViewService:(id)arg1 ;
-(void)_requestToShowActionSheetForURL:(id)arg1 title:(id)arg2 fromRect:(CGRect)arg3 ;
-(void)_updateStatusBarAppearance;
-(void)_notifyInitialLoadDidFinish:(char)arg1 ;
-(char)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2 ;
-(void)_didLoadWebView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setTintColor:(id)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)_dismiss;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
@end

