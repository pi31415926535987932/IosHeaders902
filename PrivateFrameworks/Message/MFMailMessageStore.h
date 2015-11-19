/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <MIME/MFMessageStore.h>

@class MFMailboxUid, MailAccount, MFActivityMonitor;

@interface MFMailMessageStore : MFMessageStore {

	unsigned _state;
	struct {
		unsigned isReadOnly : 1;
		unsigned hasUnsavedChangesToMessageData : 1;
		unsigned haveOpenLockFile : 1;
		unsigned compacting : 1;
		unsigned cancelInvalidation : 1;
		unsigned forceInvalidation : 1;
		unsigned isWritingChangesToDisk : 1;
		unsigned isTryingToClose : 1;
		unsigned compactOnClose : 1;
		unsigned reserved : 23;
	}  _flags;
	MFMailboxUid* _mailboxUid;
	MailAccount* _account;
	unsigned _deletedMessagesSize;
	unsigned _deletedMessageCount;
	unsigned _unreadMessageCount;
	unsigned _generationNumber;
	unsigned _lastFetchCount;
	MFActivityMonitor* _openMonitor;

}
+(char)createEmptyStoreForPath:(id)arg1 ;
+(char)createEmptyStoreIfNeededForPath:(id)arg1 ;
+(char)storeAtPathIsWritable:(id)arg1 ;
+(Class)classForMimePart;
+(id)copyMessageWithSelection:(id)arg1 toMailbox:(id)arg2 markAsRead:(char)arg3 deleteOriginals:(char)arg4 isDeletion:(char)arg5 ;
+(Class)headersClass;
-(void)setLibrary:(id)arg1 ;
-(void)deleteMessages:(id)arg1 moveToTrash:(char)arg2 ;
-(void)undeleteMessages:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)close;
-(id)displayName;
-(id)status;
-(unsigned)unreadCount;
-(void)openSynchronously;
-(void)updateUserInfoToLatestValues;
-(void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2 ;
-(id)mailboxUid;
-(unsigned)nonDeletedCountIncludingServerSearch:(char)arg1 andThreadSearch:(char)arg2 ;
-(unsigned)serverUnreadOnlyOnServerCount;
-(unsigned)serverMessageCount;
-(unsigned)allNonDeletedCountIncludingServerSearch:(char)arg1 andThreadSearch:(char)arg2 ;
-(char)hasMoreFetchableMessages;
-(unsigned)fetchWindow;
-(id)copyOfAllMessagesWithOptions:(unsigned)arg1 ;
-(id)copyOfAllMessages;
-(id)copyMessagesMatchingText:(id)arg1 options:(unsigned)arg2 ;
-(id)_defaultRouterDestination;
-(unsigned)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 ;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setFlag:(id)arg1 state:(char)arg2 forMessages:(id)arg3 ;
-(unsigned)appendMessageSelections:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 ;
-(unsigned)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 ;
-(unsigned)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 ;
-(unsigned)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 ;
-(id)messageForMessageID:(id)arg1 options:(unsigned)arg2 ;
-(id)lastViewedMessageDate;
-(id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(char)arg2 ;
-(char)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(char)arg3 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg1 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(char)arg2 isEncrypted:(char)arg3 forMessage:(id)arg4 ;
-(int)fetchNumMessages:(unsigned)arg1 preservingUID:(id)arg2 options:(unsigned)arg3 ;
-(int)fetchMobileSynchronously:(unsigned)arg1 preservingUID:(id)arg2 options:(unsigned)arg3 ;
-(void)messageFlagsDidChange:(id)arg1 flags:(id)arg2 ;
-(void)_flushAllMessageData;
-(char)supportsArchiving;
-(id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(char)arg3 ;
-(void)updateBodyFlagsForMessage:(id)arg1 body:(id)arg2 ;
-(void)_setFlagsForMessages:(id)arg1 ;
-(char)_shouldChangeComponentMessageFlagsForMessage:(id)arg1 ;
-(char)_shouldChangeComponentMessageFlags;
-(id)initWithMailboxUid:(id)arg1 readOnly:(char)arg2 ;
-(void)openAsynchronously;
-(void)didOpen;
-(void)cancelOpen;
-(void)writeUpdatedMessageDataToDisk;
-(char)isOpened;
-(id)storePathRelativeToAccount;
-(char)isDrafts;
-(void)allMessageFlagsDidChange:(id)arg1 ;
-(void)structureDidChange;
-(void)messagesWereAdded:(id)arg1 ;
-(void)messagesWereCompacted:(id)arg1 ;
-(void)messagesWillBeCompacted:(id)arg1 ;
-(void)deletedCount:(unsigned*)arg1 andSize:(unsigned*)arg2 ;
-(unsigned)serverUnreadCount;
-(char)shouldGrowFetchWindow;
-(void)invalidateFetchWindow;
-(unsigned)growFetchWindow;
-(void)purgeMessagesBeyondLimit:(unsigned)arg1 keepingMessage:(id)arg2 ;
-(unsigned)unreadCountMatchingCriterion:(id)arg1 ;
-(char)hasMessageForAccount:(id)arg1 ;
-(unsigned)indexOfMessage:(id)arg1 ;
-(id)copyOfMessagesInRange:(NSRange)arg1 ;
-(id)mutableCopyOfAllMessages;
-(id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned)arg1 limit:(unsigned)arg2 ;
-(id)copyMessagesMatchingText:(id)arg1 ;
-(id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 ;
-(char)canFetchSearchResults;
-(int)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned)arg2 error:(id*)arg3 ;
-(id)remoteIDsMatchingSearchText:(id)arg1 limit:(unsigned)arg2 error:(id*)arg3 ;
-(id)remoteIDsFromUniqueRemoteIDs:(id)arg1 ;
-(char)canFetchMessageIDs;
-(int)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2 ;
-(int)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2 ;
-(id)finishRoutingMessages:(id)arg1 routed:(id)arg2 ;
-(char)canCompact;
-(void)doCompact;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(char)arg2 ;
-(void)messagesWereDeleted:(id)arg1 ;
-(char)allowsAppend;
-(id)messageForRemoteID:(id)arg1 ;
-(id)lastViewedMessageWithOptions:(unsigned)arg1 ;
-(id)uniqueRemoteIDsForMessages:(id)arg1 ;
-(id)headerDataForMessage:(id)arg1 downloadIfNecessary:(char)arg2 ;
-(char)hasCachedDataForMimePart:(id)arg1 ;
-(id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2 ;
-(void)setFlagForAllMessages:(id)arg1 state:(char)arg2 ;
-(int)fetchMobileSynchronously:(unsigned)arg1 ;
-(char)setPreferredEncoding:(unsigned long)arg1 forMessage:(id)arg2 ;
-(id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(char)arg3 ;
-(char)shouldDownloadBodyDataForMessage:(id)arg1 ;
-(id)loadMeetingExternalIDForMessage:(id)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg1 ;
-(id)loadMeetingMetadataForMessage:(id)arg1 ;
-(char)shouldSetSummaryForMessage:(id)arg1 ;
-(char)canDeleteMessage:(id)arg1 ;
-(char)shouldDeleteInPlace;
-(char)shouldArchive;
-(int)archiveDestination;
-(void)_rebuildTableOfContentsSynchronously;
-(void)updateMessages:(id)arg1 updateNumberOfAttachments:(char)arg2 ;
-(id)messageIdRollCall:(id)arg1 ;
-(unsigned)totalCount;
-(char)isReadOnly;
-(id)account;
@end

