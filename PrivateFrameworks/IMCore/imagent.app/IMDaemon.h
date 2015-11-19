/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/imagent.app/imagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <imagent/imagent-Structs.h>
#import <imagent/IMDaemonProtocol.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class IMMessageContext, NSRecursiveLock, NSMutableArray, IMRemoteObjectBroadcaster, NSMutableDictionary, NSPort;

@interface IMDaemon : NSObject <IMDaemonProtocol, IMSystemMonitorListener> {

	NSRecursiveLock* _listenerLock;
	NSMutableArray* _listeners;
	NSMutableArray* _listenerLocalObjects;
	NSMutableArray* _listenerIDs;
	NSMutableArray* _listenerBundleIDs;
	NSMutableArray* _listenerCaps;
	NSMutableArray* _listenerVCCaps;
	NSMutableArray* _listenerProperties;
	NSMutableArray* _listenerAllowedServices;
	NSMutableArray* _listenerDeniedServices;
	IMRemoteObjectBroadcaster* _notifier;
	IMMessageContext* _currentMessageContext;
	id _stateMonitor;
	NSMutableArray* _autoLoggedOffAccounts;
	NSMutableArray* _autoAwayAccounts;
	NSMutableDictionary* _autoAccountsToStatusMessageMap;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _persistentProperties;
	NSPort* _activePort;
	NSMutableDictionary* _invocationQueues;
	char _switchedOut;
	char _pendingCapabilitiesRefresh;
	char _setupComplete;
	int _avToken;
	int _acToken;

}

@property (retain,readonly) NSMutableDictionary * properties;                              //@synthesize properties=_properties - In the implementation block
@property (retain,readonly) NSMutableDictionary * persistentProperties;                    //@synthesize persistentProperties=_persistentProperties - In the implementation block
@property (nonatomic,readonly) char hasListeners; 
@property (nonatomic,readonly) char hasChatListeners; 
@property (nonatomic,readonly) char hasStatusManagingListeners; 
@property (nonatomic,readonly) char hasMessagesListener; 
@property (nonatomic,retain) IMMessageContext * currentMessageContext; 
@property (nonatomic,readonly) char isSetup; 
@property (nonatomic,readonly) unsigned long long vcCapabilities; 
@property (nonatomic,readonly) id<ParentalControlsProtocol> parentalControls; 
-(void)logState;
-(void)_pidSuspended:(int)arg1 ;
-(void)_postAliveNotification;
-(void)_terminate;
-(void)removeListenerObject:(id)arg1 ;
-(void)refreshBundleIDs;
-(void)_removeListener:(id)arg1 ;
-(void)_removeListenerObject:(id)arg1 ;
-(void)_removeLocalListenerObject:(id)arg1 ;
-(void)removeLocalListenerObject:(id)arg1 ;
-(id)listenerWithName:(id)arg1 ;
-(id)broadcasterForTarget:(id)arg1 messageContext:(id)arg2 ;
-(char)daemonInterface:(id)arg1 shouldGrantAccessForPID:(int)arg2 auditToken:(SCD_Struct_IM0)arg3 portName:(id)arg4 listenerConnection:(id)arg5 setupInfo:(id)arg6 setupResponse:(id*)arg7 ;
-(void)authenticateAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)registerAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)unregisterAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)_loadServices;
-(id)_setupInfoForListener:(id)arg1 withContext:(id)arg2 ;
-(char)_setupListenerConnection:(id)arg1 listenerID:(id)arg2 pid:(int)arg3 setupInfo:(id)arg4 setupResponse:(id*)arg5 ;
-(void)_setupComplete;
-(char)_loadDaemon;
-(char)conferencingActive;
-(void)_reallyRefreshServiceCapabilities;
-(id)listenerIDForLocalObject:(id)arg1 requireCapability:(unsigned)arg2 foundIndex:(unsigned*)arg3 ;
-(void)_property:(id)arg1 changedFrom:(id)arg2 to:(id)arg3 ;
-(void)_setValue:(id)arg1 ofProperty:(id)arg2 messageContext:(id)arg3 ;
-(id)broadcasterWithID:(id)arg1 messageContext:(id)arg2 ;
-(unsigned long long)vcCapabilitiesForListenerID:(id)arg1 ;
-(void)_setValue:(id)arg1 ofPersistentProperty:(id)arg2 listenerID:(id)arg3 messageContext:(id)arg4 ;
-(id)broadcasterForPaginatedChatRegistryListenersWithMessageContext:(id)arg1 ;
-(id)broadcasterForAVInvitationListenersWithMessageContext:(id)arg1 ;
-(id)broadcasterForAVConferenceListenersWithMessageContext:(id)arg1 ;
-(id)broadcasterForACConferenceListenersWithMessageContext:(id)arg1 ;
-(char)haveAnyListenersWithCap:(unsigned)arg1 ;
-(char)hasChatListeners;
-(char)hasStatusManagingListeners;
-(char)hasMessagesListener;
-(void)setCurrentMessageContext:(IMMessageContext *)arg1 ;
-(void)_deviceCapabilitiesChanged;
-(void)_importFinished;
-(void)changeMyStatus:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)pruneProperties;
-(void)setValue:(id)arg1 ofProperty:(id)arg2 messageContext:(id)arg3 ;
-(void)_setValue:(id)arg1 ofPersistentProperty:(id)arg2 messageContext:(id)arg3 ;
-(void)setValue:(id)arg1 ofPersistentProperty:(id)arg2 messageContext:(id)arg3 ;
-(void)logInfo;
-(void)markPlayedForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 message:(id)arg4 messageContext:(id)arg5 ;
-(void)markSavedForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 message:(id)arg4 messageContext:(id)arg5 ;
-(void)emptyBroadcasterInvocationQueue:(char)arg1 forCapability:(unsigned)arg2 messageContext:(id)arg3 ;
-(void)storeItem:(id)arg1 inChatGUID:(id)arg2 messageContext:(id)arg3 ;
-(void)markReadForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 messages:(id)arg4 clientUnreadCount:(unsigned)arg5 messageContext:(id)arg6 ;
-(void)markReadForMessageGUID:(id)arg1 messageContext:(id)arg2 ;
-(void)markPlayedForMessageGUID:(id)arg1 messageContext:(id)arg2 ;
-(void)markSavedForMessageGUID:(id)arg1 messageContext:(id)arg2 ;
-(void)markHasHadSuccessfulQueryForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 messageContext:(id)arg4 ;
-(void)removeChat:(id)arg1 messageContext:(id)arg2 ;
-(void)chat:(id)arg1 updateDisplayName:(id)arg2 messageContext:(id)arg3 ;
-(void)chat:(id)arg1 updateIsFiltered:(char)arg2 messageContext:(id)arg3 ;
-(void)chat:(id)arg1 updateProperties:(id)arg2 messageContext:(id)arg3 ;
-(void)silenceChat:(id)arg1 untilDate:(id)arg2 messageContext:(id)arg3 ;
-(void)updateMessage:(id)arg1 messageContext:(id)arg2 ;
-(void)requestPendingMessagesWithMessageContext:(id)arg1 ;
-(void)loadChatWithChatIdentifier:(id)arg1 messageContext:(id)arg2 ;
-(void)deleteFileTransferWithGUID:(id)arg1 messageContext:(id)arg2 ;
-(void)sendStandaloneFileTransfer:(id)arg1 messageContext:(id)arg2 ;
-(void)fileTransfer:(id)arg1 createdWithProperties:(id)arg2 messageContext:(id)arg3 ;
-(void)fileTransfer:(id)arg1 updatedWithProperties:(id)arg2 messageContext:(id)arg3 ;
-(void)fileTransfer:(id)arg1 acceptedWithPath:(id)arg2 autoRename:(char)arg3 overwrite:(char)arg4 messageContext:(id)arg5 ;
-(void)fileTransferStopped:(id)arg1 messageContext:(id)arg2 ;
-(void)fileTransferRemoved:(id)arg1 messageContext:(id)arg2 ;
-(void)updateUnformattedID:(id)arg1 forBuddyID:(id)arg2 onService:(id)arg3 messageContext:(id)arg4 ;
-(void)loadMessageWithGUID:(id)arg1 queryID:(id)arg2 messageContext:(id)arg3 ;
-(void)loadHistoryForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 limit:(unsigned)arg4 beforeGUID:(id)arg5 afterGUID:(id)arg6 chatID:(id)arg7 queryID:(id)arg8 messageContext:(id)arg9 ;
-(void)loadAttachmentsForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 chatID:(id)arg4 queryID:(id)arg5 messageContext:(id)arg6 ;
-(void)deleteMessageWithGUIDs:(id)arg1 queryID:(id)arg2 messageContext:(id)arg3 ;
-(void)clearHistoryForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 beforeGUID:(id)arg4 afterGUID:(id)arg5 chatID:(id)arg6 queryID:(id)arg7 messageContext:(id)arg8 ;
-(void)markAsSpamForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 messageContext:(id)arg4 ;
-(void)cleanupAttachmentsWithMessageContext:(id)arg1 ;
-(void)loadFrequentRepliesForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 limit:(unsigned)arg4 chatID:(id)arg5 queryID:(id)arg6 messageContext:(id)arg7 ;
-(void)loadUnreadForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 limit:(unsigned)arg4 fallbackGUID:(id)arg5 chatId:(id)arg6 queryID:(id)arg7 messageContext:(id)arg8 ;
-(unsigned long long)_vcCapabilities;
-(char)_conferencingAvailable;
-(char)shouldBlockCamera;
-(char)shouldBlockMic;
-(char)shouldBlockARD;
-(void)setVCCapabilities:(unsigned long long)arg1 messageContext:(id)arg2 ;
-(void)requestPendingVCInvitesWithMessageContext:(id)arg1 ;
-(void)requestPendingACInvitesWithMessageContext:(id)arg1 ;
-(void)account:(id)arg1 avAction:(unsigned)arg2 withArguments:(id)arg3 toAVChat:(id)arg4 isVideo:(char)arg5 messageContext:(id)arg6 ;
-(id)_invocationQueueForCapability:(unsigned)arg1 create:(char)arg2 ;
-(char)_allowInvocationQueuesForListenerCapability:(unsigned)arg1 ;
-(id)_listenersWithCapabilities:(unsigned)arg1 allowedListenerIDs:(id)arg2 forService:(id)arg3 ;
-(char)_alwaysUseInvocationQueuesForListenerCapability:(unsigned)arg1 ;
-(id)_broadcasterForListenersWithCapabilities:(unsigned)arg1 messageContext:(id)arg2 ;
-(id)broadcasterWithID:(id)arg1 forService:(id)arg2 messageContext:(id)arg3 ;
-(void)emptyBroadcasterInvocationQueues:(char)arg1 messageContext:(id)arg2 ;
-(char)shouldQueueBroadcasterInvocationsForCapability:(unsigned)arg1 ;
-(char)haveAnyListenersWithID:(id)arg1 ;
-(char)shouldLaunchTextAppForInvocation:(id)arg1 shouldDumpInvocation:(char*)arg2 ;
-(char)shouldLaunchVCAppForInvocation:(id)arg1 shouldDumpInvocation:(char*)arg2 ;
-(void)autoLoginActiveAccountsIfNecessaryWithMessageContext:(id)arg1 ;
-(void)loginAllAccountsWithMessageContext:(id)arg1 ;
-(void)logoutAllAccountsWithMessageContext:(id)arg1 ;
-(void)addAccount:(id)arg1 defaults:(id)arg2 service:(id)arg3 messageContext:(id)arg4 ;
-(void)removeAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)activateAccounts:(id)arg1 messageContext:(id)arg2 ;
-(void)deactivateAccounts:(id)arg1 messageContext:(id)arg2 ;
-(void)writeAccount:(id)arg1 defaults:(id)arg2 messageContext:(id)arg3 ;
-(void)requestBuddyPicturesAndPropertiesForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)_postSetupToListener:(id)arg1 withContext:(id)arg2 messageContext:(id)arg3 ;
-(void)setListenerCapabilities:(unsigned)arg1 messageContext:(id)arg2 ;
-(char)_setupPlugInListenerConnection:(id)arg1 listenerID:(id)arg2 pid:(int)arg3 setupInfo:(id)arg4 setupResponse:(id*)arg5 ;
-(char)daemonInterface:(id)arg1 shouldGrantPlugInAccessForPID:(int)arg2 auditToken:(SCD_Struct_IM0)arg3 portName:(id)arg4 listenerConnection:(id)arg5 setupInfo:(id)arg6 setupResponse:(id*)arg7 ;
-(void)autoLoginAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)autoReconnectAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)loginAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)logoutAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)holdBuddyUpdatesAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)resumeBuddyUpdatesAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)requestGroupsAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)changeGroups:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)changeGroup:(id)arg1 changes:(id)arg2 account:(id)arg3 messageContext:(id)arg4 ;
-(void)renameGroup:(id)arg1 to:(id)arg2 account:(id)arg3 messageContext:(id)arg4 ;
-(void)acceptSubscriptionRequest:(char)arg1 from:(id)arg2 account:(id)arg3 messageContext:(id)arg4 ;
-(void)requestSubscriptionTo:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)startWatchingBuddy:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)stopWatchingBuddy:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)requestProperty:(id)arg1 ofPerson:(id)arg2 account:(id)arg3 messageContext:(id)arg4 ;
-(void)setValue:(id)arg1 ofProperty:(id)arg2 ofPerson:(id)arg3 account:(id)arg4 messageContext:(id)arg5 ;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 account:(id)arg3 messageContext:(id)arg4 ;
-(void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 joinProperties:(id)arg6 account:(id)arg7 messageContext:(id)arg8 ;
-(void)leaveChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 messageContext:(id)arg5 ;
-(void)removeChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 messageContext:(id)arg5 ;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 account:(id)arg6 messageContext:(id)arg7 ;
-(void)removePersonInfo:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 account:(id)arg5 messageContext:(id)arg6 ;
-(void)declineInvitationToChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 messageContext:(id)arg5 ;
-(void)sendMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 account:(id)arg5 messageContext:(id)arg6 ;
-(void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 account:(id)arg5 messageContext:(id)arg6 ;
-(void)sendPlayedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 account:(id)arg5 messageContext:(id)arg6 ;
-(void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 account:(id)arg5 messageContext:(id)arg6 ;
-(void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 account:(id)arg6 messageContext:(id)arg7 ;
-(void)setBlockingMode:(unsigned)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)setAllowList:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)setBlockList:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)setBlockIdleStatus:(char)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)passwordUpdatedAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 account:(id)arg4 toChatID:(id)arg5 identifier:(id)arg6 style:(unsigned char)arg7 messageContext:(id)arg8 ;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 account:(id)arg4 messageContext:(id)arg5 ;
-(void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 account:(id)arg4 messageContext:(id)arg5 ;
-(void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 account:(id)arg4 messageContext:(id)arg5 ;
-(void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 account:(id)arg4 messageContext:(id)arg5 ;
-(void)sendCounterProposalToPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 account:(id)arg4 messageContext:(id)arg5 ;
-(void)sendVCUpdate:(id)arg1 toPerson:(id)arg2 conference:(id)arg3 account:(id)arg4 messageContext:(id)arg5 ;
-(void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned)arg2 type:(unsigned)arg3 userInfo:(id)arg4 conference:(id)arg5 account:(id)arg6 messageContext:(id)arg7 ;
-(void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3 account:(id)arg4 messageContext:(id)arg5 ;
-(void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3 account:(id)arg4 messageContext:(id)arg5 ;
-(void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3 account:(id)arg4 messageContext:(id)arg5 ;
-(void)addAliases:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)removeAliases:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)validateAliases:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)unvalidateAliases:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)validateProfileAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 account:(id)arg3 messageContext:(id)arg4 ;
-(void)enrollDeviceForSMSRelay:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)unEnrollDeviceForSMSRelay:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)enrollSelfDeviceForSMSRelay:(id)arg1 messageContext:(id)arg2 ;
-(void)terminate;
-(void)dealloc;
-(id)init;
-(NSMutableDictionary *)properties;
-(void)_loadAccounts;
-(void)removeListener:(id)arg1 ;
-(void)systemWillShutdown;
-(char)isSetup;
-(id)valueOfProperty:(id)arg1 ;
-(id)valueOfPersistentProperty:(id)arg1 ;
-(unsigned long long)vcCapabilities;
-(NSMutableDictionary *)persistentProperties;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(id)broadcasterForService:(id)arg1 messageContext:(id)arg2 ;
-(id)broadcasterForTarget:(id)arg1 forService:(id)arg2 messageContext:(id)arg3 ;
-(IMMessageContext *)currentMessageContext;
-(id)broadcasterForListenersWithCapabilities:(unsigned)arg1 forService:(id)arg2 messageContext:(id)arg3 ;
-(void)refreshServiceCapabilities;
-(id)broadcasterWithMessageContext:(id)arg1 ;
-(char)launchListenerForCapability:(unsigned)arg1 ;
-(id)broadcasterForChatListenersWithMessageContext:(id)arg1 ;
-(id)broadcasterForChatDatabaseListenersWithMessageContext:(id)arg1 ;
-(id)broadcasterForListenersWithCapabilities:(unsigned)arg1 messageContext:(id)arg2 ;
-(void)postSetupToAllListeners;
-(char)hasListeners;
-(void)_setValue:(id)arg1 ofPersistentProperty:(id)arg2 ;
-(char)queue:(id)arg1 shouldInvoke:(id)arg2 ;
-(unsigned)queue:(id)arg1 optionsForInvocation:(id)arg2 ;
-(void)shutdown;
-(id<ParentalControlsProtocol>)parentalControls;
@end

