/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLDirectChangeSession.h>
#import <libobjc.A.dylib/CPLPushChangeSessionImplementation.h>

@class NSString, CPLEngineChangePipe;

@interface CPLDirectPushChangeSession : CPLDirectChangeSession <CPLPushChangeSessionImplementation> {

	char _didPushSomeChange;
	NSString* _lastSeenLibraryVersion;
	CPLEngineChangePipe* _pushQueue;
	CPLEngineChangePipe* _deletePushQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)clientWorkDescription;
-(char)_appendBatchToPushQueues:(id)arg1 error:(id*)arg2 ;
-(void)beginSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finalizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)commitChangeBatch:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

