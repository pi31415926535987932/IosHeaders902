/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/Support/softwareupdated
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NEFilterDataExtensionProviderHostDelegate <NEExtensionProviderHostDelegate>
@required
-(void)dataExtension:(id)arg1 didFailWithError:(id)arg2;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)dataExtension:(id)arg1 didStartWithError:(id)arg2;

@end
