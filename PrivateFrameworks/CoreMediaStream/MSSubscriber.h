/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MSCupidStateMachine.h>
#import <libobjc.A.dylib/MSSubscriber.h>

@protocol MSSubscriber
@property (assign,nonatomic) id<MSSubscriberDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<MSSubscriberDelegate>)delegate;
-(void)stop;
-(void)checkForOutstandingActivities;
-(void)checkForNewAssetCollections;
-(id)subscribedStreams;
-(id)ownSubscribedStream;
-(void)retrieveAssets:(id)arg1;
-(void)abort;
-(void)resetSync;

@end

#import <libobjc.A.dylib/MSSubscribeStreamsProtocolDelegate.h>
#import <libobjc.A.dylib/MSSubscribeStorageProtocolDelegate.h>
#import <libobjc.A.dylib/MSReauthorizationProtocolDelegate.h>

@protocol MSSubscriberDelegate, MSSubscribeStorageProtocol;
@class MSMediaStreamDaemon, MSSubscribeStreamsProtocol, NSMutableDictionary, MSReauthorizationProtocol, MSObjectQueue, NSMutableArray, NSString;

@interface MSSubscriber : MSCupidStateMachine <MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate> {

	id<MSSubscriberDelegate> _delegate;
	MSMediaStreamDaemon* _daemon;
	char _checkOneMoreTime;
	int _state;
	MSSubscribeStreamsProtocol* _protocol;
	NSMutableDictionary* _newSubscriptionsByStreamID;
	int _retrievalState;
	id<MSSubscribeStorageProtocol> _storageProtocol;
	MSReauthorizationProtocol* _reauthProtocol;
	MSObjectQueue* _retrievalQueue;
	NSMutableArray* _assetsBeingRetrieved;
	long long _targetRetrievalByteCount;
	int _retrievalBatchSize;
	int _maxErrorCount;

}

@property (assign,nonatomic) MSMediaStreamDaemon * daemon;                    //@synthesize daemon=_daemon - In the implementation block
@property (assign,nonatomic) long long targetRetrievalByteCount;              //@synthesize targetRetrievalByteCount=_targetRetrievalByteCount - In the implementation block
@property (assign,nonatomic) int retrievalBatchSize;                          //@synthesize retrievalBatchSize=_retrievalBatchSize - In the implementation block
@property (assign,nonatomic) id<MSSubscriberDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nextActivityDate;
+(id)personIDsWithOutstandingActivities;
+(char)isInRetryState;
+(id)subscriberForPersonID:(id)arg1 ;
+(id)existingSubscriberForPersonID:(id)arg1 ;
+(void)stopAllActivities;
+(id)_clearInstantiatedSubscribersByPersonID;
+(id)nextActivityDateForPersonID:(id)arg1 ;
+(void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
+(id)_descriptionForState:(int)arg1 ;
+(id)_descriptionForRetrievalState:(int)arg1 ;
+(void)forgetPersonID:(id)arg1 ;
-(void)setDelegate:(id<MSSubscriberDelegate>)arg1 ;
-(void)dealloc;
-(id<MSSubscriberDelegate>)delegate;
-(void)stop;
-(void)deactivate;
-(void)checkForOutstandingActivities;
-(void)checkForNewAssetCollections;
-(id)subscribedStreams;
-(id)ownSubscribedStream;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(char)_isInRetryState;
-(void)_serverSideConfigurationDidChange:(id)arg1 ;
-(void)_updateMasterManifest;
-(void)_abort;
-(void)_forget;
-(id)_subscriptionsByStreamID;
-(void)_refreshServerSideConfigurationParameters;
-(char)_hasOutstandingPoll;
-(void)_stopOutSubscriberState:(int*)arg1 outRetrievalState:(int*)arg2 ;
-(void)_setHasOutstandingPoll:(char)arg1 ;
-(char)_isAllowedToDownload;
-(void)_changeStateTo:(int)arg1 ;
-(void)_checkForNewAssetCollections;
-(void)_setSubscriptionsByStreamID:(id)arg1 ;
-(void)_didFinishRetrievingSubscriptionUpdate;
-(void)_didReceiveAuthenticationError:(id)arg1 ;
-(void)_retrieveAssets;
-(void)_changeRetrievalStateTo:(int)arg1 ;
-(void)_retrieveNextAssets;
-(void)_reauthorizeAssets;
-(void)retrieveAssets:(id)arg1 ;
-(void)_finishedRetrievingAsset:(id)arg1 ;
-(void)subscribeStreamsProtocol:(id)arg1 willReceiveUpdatesForPersonID:(id)arg2 wasReset:(char)arg3 metadata:(id)arg4 ;
-(void)subscribeStreamsProtocol:(id)arg1 didReceiveAssetCollections:(id)arg2 forPersonID:(id)arg3 ;
-(void)subscribeStreamsProtocol:(id)arg1 didFinishReceivingUpdatesForPersonID:(id)arg2 ctag:(id)arg3 ;
-(void)subscribeStreamsProtocol:(id)arg1 didFindDisappearedSubscriptionForPersonID:(id)arg2 ;
-(void)subscribeStreamsProtocol:(id)arg1 didFindTemporarilyUnavailableSubscriptionForPersonID:(id)arg2 ;
-(void)subscribeStreamsProtocol:(id)arg1 didFindShareState:(id)arg2 ;
-(void)subscribeStreamsProtocol:(id)arg1 didFinishError:(id)arg2 ;
-(void)subscribeStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(void)subscribeStorageProtocol:(id)arg1 didFinishRetrievingAsset:(id)arg2 error:(id)arg3 ;
-(void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)arg1 ;
-(void)reauthorizationProtocol:(id)arg1 reauthorizedAssets:(id)arg2 rejectedAssets:(id)arg3 error:(id)arg4 ;
-(void)reauthorizationProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(long long)targetRetrievalByteCount;
-(void)setTargetRetrievalByteCount:(long long)arg1 ;
-(int)retrievalBatchSize;
-(void)setRetrievalBatchSize:(int)arg1 ;
-(MSMediaStreamDaemon *)daemon;
-(void)setDaemon:(MSMediaStreamDaemon *)arg1 ;
-(void)abort;
-(void)resetSync;
@end

