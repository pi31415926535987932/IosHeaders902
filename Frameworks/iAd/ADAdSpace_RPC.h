/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:52:30 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADAdSpace_RPC
@required
-(void)_remote_close;
-(void)_remote_dismissViewController;
-(void)_remote_dismissPortraitOnlyViewController;
-(void)_remote_creativeWillLoad;
-(void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1;
-(void)_remote_creativeDidFailWithError:(id)arg1;
-(void)_remote_openURL:(id)arg1;
-(void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2;
-(void)_remote_updateViewControllerSupportedOrientations:(unsigned)arg1;
-(void)_remote_actionViewControllerReadyForPresentation;
-(void)_remote_requestPortraitOnlyViewController;
-(void)_remote_pauseBannerMedia;
-(void)_remote_resumeBannerMedia;

@end
