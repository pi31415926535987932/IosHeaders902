/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/Support/nanoappregistryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SYStoreDelegate <NSObject>
@optional
-(void)syncStoreWillUpdate:(id)arg1;
-(void)syncStoreWillUpdate:(id)arg1 objectCount:(unsigned)arg2;
-(void)syncStoreDidUpdate:(id)arg1;
-(void)syncStoreDidCompleteFullSync:(id)arg1;
-(void)syncStoreAllObjectsDeleted:(id)arg1;
-(id)syncStoreAllObjects:(id)arg1;
-(char)syncStoreShouldPerformInitialFullSync:(id)arg1;
-(/*^block*/id)beginSyncingAllObjectsForStore:(id)arg1;
-(char)syncStoreShouldDeleteRemoteObjectsOnFailedFullSync:(id)arg1;
-(void)syncStore:(id)arg1 encounteredErrorInFullSync:(id)arg2;
-(void)syncStore:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;
-(void)syncStoreDidSetupAfterPairing:(id)arg1;
-(void)syncStoreDidUnpair:(id)arg1;
-(void)syncStore:(id)arg1 sentMessageWithContext:(id)arg2;
-(void)syncStore:(id)arg1 peerFinishedProcessingMessageWithContext:(id)arg2;
-(void)syncStoreEnqueuedAllFullSyncMessages:(id)arg1 context:(id)arg2;

@required
-(void)syncStore:(id)arg1 objectAdded:(id)arg2;
-(void)syncStore:(id)arg1 objectUpdated:(id)arg2;
-(void)syncStore:(id)arg1 objectDeleted:(id)arg2;

@end

