/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferAgent.app/IMTransferAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSMutableDictionary, NSString;

@interface IMTransferAgentIDSInterface : NSObject <IDSServiceDelegate> {

	IDSService* _idsService;
	NSMutableDictionary* _uniqueIDToTransferCompletionBlockMap;
	int _numTransfers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(char)_sendIDSMessage:(id)arg1 ;
-(char)isLocalDevicePresent;
-(id)localCompanionDevice;
-(void)remoteUploadFileRequest:(id)arg1 topic:(id)arg2 transferID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_sendUploadRequest:(id)arg1 topic:(id)arg2 transferID:(id)arg3 allowReauthorize:(char)arg4 ;
-(void)decrementTransferCount;
-(void)incrementTransferCount;
-(void)_sendUploadResponse:(id)arg1 success:(char)arg2 error:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 requestURLString:(id)arg6 transferID:(id)arg7 ;
-(void)_handleUploadRequest:(id)arg1 ;
-(void)_handleUploadResponse:(id)arg1 ;
-(int)currentTransfers;
-(void)dealloc;
-(id)init;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
@end

