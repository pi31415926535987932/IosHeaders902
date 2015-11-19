/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPLEngineStorageImplementation <CPLPlatformImplementation>
@required
-(id)status;
-(char)openWithError:(id*)arg1;
-(char)closeWithError:(id*)arg1;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(char)_checkSuperWasCalled;
-(id)statusDictionary;

@end
