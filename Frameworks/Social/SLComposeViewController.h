/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:36 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SLRemoteComposeViewControllerDelegateProtocol.h>

@class NSExtension, NSString, NSArray, NSLayoutConstraint, UIView, UIViewController;

@interface SLComposeViewController : UIViewController <SLRemoteComposeViewControllerDelegateProtocol> {

	NSExtension* _extension;
	NSString* _initialText;
	NSArray* _itemProviders;
	NSArray* _extensionItems;
	NSLayoutConstraint* _keyboardTopConstraint;
	UIView* _keyboardTrackingView;
	int _savedStatusBarStyle;
	char _wasPresented;
	/*^block*/id _completionHandler;
	char _didFailLoadingRemoteViewController;
	char _didCompleteSheet;
	int _maximumImageCount;
	int _maximumURLCount;
	int _maximumVideoCount;
	int _numVideosAdded;
	int _numImagesAdded;
	int _numURLsAdded;
	NSString* _serviceType;
	UIViewController* _remoteViewController;

}

@property (nonatomic,readonly) NSString * serviceType;                   //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) UIViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
+(id)composeViewControllerForServiceType:(id)arg1 ;
+(id)_serviceTypeToExtensionIdentifierMap;
+(id)_serviceTypeForExtensionIdentifier:(id)arg1 ;
+(char)_isAvailableForService:(id)arg1 ;
+(char)_isAvailableForMediaShareExtension:(id)arg1 ;
+(char)_isServiceType:(id)arg1 ;
+(id)_extensionIdentifierForServiceType:(id)arg1 ;
+(id)_shareExtensionWithIdentifier:(id)arg1 ;
+(char)isAvailableForExtensionIdentifier:(id)arg1 ;
+(id)composeViewControllerForExtensionIdentifier:(id)arg1 ;
+(id)extensionIdentifierForActivityType:(id)arg1 ;
+(char)isAvailableForExtension:(id)arg1 ;
+(id)composeViewControllerForExtension:(id)arg1 ;
+(char)isAvailableForServiceType:(id)arg1 ;
-(char)addAttachment:(id)arg1 ;
-(void)userDidCancel;
-(void)userDidPost;
-(id)initWithServiceType:(id)arg1 ;
-(void)completeWithResult:(int)arg1 ;
-(id)initWithExtension:(id)arg1 requestedServiceType:(id)arg2 ;
-(char)canAddContent;
-(id)_urlForUntypedAsset:(id)arg1 ;
-(char)_addImageAsset:(id)arg1 preview:(id)arg2 ;
-(char)supportsImageAsset:(id)arg1 ;
-(char)_addImageJPEGData:(id)arg1 preview:(id)arg2 ;
-(char)supportsVideoAsset:(id)arg1 ;
-(char)_addURL:(id)arg1 type:(int)arg2 preview:(id)arg3 ;
-(char)_addVideoData:(id)arg1 preview:(id)arg2 ;
-(char)_addVideoAsset:(id)arg1 preview:(id)arg2 ;
-(void)_handleRemoteViewFailure;
-(void)didLoadSheetViewController;
-(void)remoteController:(id)arg1 didLoadWithError:(id)arg2 ;
-(void)remoteViewController:(id)arg1 didTerminateWithError:(id)arg2 ;
-(id)initWithExtensionIdentifier:(id)arg1 ;
-(char)addImageAsset:(id)arg1 ;
-(/*^block*/id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1 ;
-(void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3 ;
-(void)remoteViewControllerLoadDidTimeout;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(UIViewController *)remoteViewController;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)_useCustomDimmingView;
-(char)addImage:(id)arg1 ;
-(char)removeAllImages;
-(void)setRemoteViewController:(UIViewController *)arg1 ;
-(char)addItemProvider:(id)arg1 ;
-(char)addExtensionItem:(id)arg1 ;
-(char)addURL:(id)arg1 ;
-(char)setInitialText:(id)arg1 ;
-(NSString *)serviceType;
-(char)removeAllURLs;
-(char)canSendTweet;
-(char)addURL:(id)arg1 withPreviewImage:(id)arg2 ;
@end
