/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIWebBrowserLoadingControllerDelegate <NSObject>
@optional
-(void)browserLoadingControllerDidUpdateBackForward:(id)arg1;
-(void)browserLoadingControllerDidUpdateLoadingState:(id)arg1;
-(void)browserLoadingControllerDidUpdateEstimatedProgress:(id)arg1;
-(void)browserLoadingControllerWillStartUserDrivenLoad:(id)arg1;
-(id)browserLoadingController:(id)arg1 userVisibleStringForURL:(id)arg2;
-(void)browserLoadingControllerDidUpdateURLString:(id)arg1;
-(void)browserLoadingControllerDidUpdateTitle:(id)arg1;
-(void)browserLoadingControllerDidUpdateURL:(id)arg1;
-(char)browserLoadingControllerShouldShowProvisionalURLs:(id)arg1;
-(void)browserLoadingControllerDidStartLoading:(id)arg1;
-(void)browserLoadingController:(id)arg1 didFinishLoadingWithError:(id)arg2 dataSource:(id)arg3;
-(void)browserLoadingController:(id)arg1 willLoadRequest:(id)arg2 userDriven:(char)arg3;
-(void)browserLoadingControllerDidUpdateSecurity:(id)arg1;
-(void)browserLoadingController:(id)arg1 failedToStartLoadingRequest:(id)arg2 error:(id)arg3;

@end

