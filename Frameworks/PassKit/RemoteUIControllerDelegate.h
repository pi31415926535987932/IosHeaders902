/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RemoteUIControllerDelegate <NSObject>
@optional
-(char)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
-(void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(char)arg3;
-(void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
-(void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
-(void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
-(void)remoteUIControllerDidDismiss:(id)arg1;
-(id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(int*)arg3;
-(void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;

@end

