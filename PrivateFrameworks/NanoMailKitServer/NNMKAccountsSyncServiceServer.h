/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKAccountsSyncServiceServerDelegate;
@interface NNMKAccountsSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKAccountsSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKAccountsSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<NNMKAccountsSyncServiceServerDelegate>)arg1 ;
-(id<NNMKAccountsSyncServiceServerDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(id)deleteAccount:(id)arg1 ;
-(id)addOrUpdateAccount:(id)arg1 ;
-(id)sendInitialAccountsSync:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(int)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned)arg2 ;
@end

