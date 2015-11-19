/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBSynchronizedTransactionGroup.h>
#import <libobjc.A.dylib/FBApplicationProcessLaunchTransactionObserver.h>
#import <libobjc.A.dylib/FBUpdateSceneTransactionObserver.h>

@class FBApplicationProcessLaunchTransaction, NSString, FBSceneManager, FBProcessManager, NSMutableArray, FBApplicationProcess;

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver> {

	FBApplicationProcessLaunchTransaction* _processLaunchTransaction;
	char _processLaunched;
	char _waitsForSceneCommits;
	NSString* _bundleID;
	FBSceneManager* _sceneManager;
	FBProcessManager* _processManager;
	NSMutableArray* _updateSceneTransactions;
	NSMutableArray* _pendingUpdateSceneBlocks;
	FBApplicationProcess* _process;

}

@property (nonatomic,retain,readonly) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain,readonly) FBApplicationProcess * process;              //@synthesize process=_process - In the implementation block
@property (assign,nonatomic) char waitsForSceneCommits;                            //@synthesize waitsForSceneCommits=_waitsForSceneCommits - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bundleID;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(FBApplicationProcess *)process;
-(void)updateSceneWithIdentifier:(id)arg1 display:(id)arg2 newSettings:(id)arg3 transitionContext:(id)arg4 clientProviderProvider:(/*^block*/id)arg5 initialClientSettingsProvider:(/*^block*/id)arg6 ;
-(void)_executeSceneUpdatesIfAppropriate;
-(void)_willAddChildTransaction:(id)arg1 ;
-(void)_didRemoveChildTransaction:(id)arg1 ;
-(void)_willInterruptWithReason:(id)arg1 ;
-(void)_willFailWithReason:(id)arg1 ;
-(void)_didComplete;
-(void)_performSynchronizedCommit:(id)arg1 ;
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2 ;
-(void)transaction:(id)arg1 didLaunchProcess:(id)arg2 ;
-(void)updateSceneTransactionDidCreateScene:(id)arg1 ;
-(void)updateSceneTransactionWillUpdateScene:(id)arg1 ;
-(void)updateSceneTransactionWillCommitUpdate:(id)arg1 ;
-(void)updateSceneTransactionDidCommitUpdate:(id)arg1 ;
-(void)setWaitsForSceneCommits:(char)arg1 ;
-(void)updateSceneWithIdentifier:(id)arg1 display:(id)arg2 newSettings:(id)arg3 transitionContext:(id)arg4 initialClientSettingsProvider:(/*^block*/id)arg5 ;
-(char)_shouldFailForChildTransaction:(id)arg1 ;
-(char)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(char)waitsForSceneCommits;
@end

