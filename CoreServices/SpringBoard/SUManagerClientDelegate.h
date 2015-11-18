/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUManagerClientDelegate <NSObject>
@optional
-(void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2;
-(void)client:(id)arg1 scanRequestDidFinishForOptions:(id)arg2 update:(id)arg3 error:(id)arg4;
-(void)client:(id)arg1 scanDidCompleteWithNewUpdateAvailable:(id)arg2 error:(id)arg3;
-(void)client:(id)arg1 automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2;
-(void)client:(id)arg1 downloadDidStart:(id)arg2;
-(void)client:(id)arg1 downloadProgressDidChange:(id)arg2;
-(void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 downloadDidFinish:(id)arg2;
-(void)client:(id)arg1 installDidStart:(id)arg2;
-(void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 installDidFinish:(id)arg2;

@end

