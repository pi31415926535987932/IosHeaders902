/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/CKTranscriptCollectionViewDelegate.h>
#import <libobjc.A.dylib/CKMovieBalloonViewDelegate.h>
#import <libobjc.A.dylib/CKLocationShareBalloonViewDelegate.h>
#import <libobjc.A.dylib/CKTitledImageBalloonViewDelegate.h>
#import <libobjc.A.dylib/CKAudioControllerDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@protocol CKTranscriptCollectionViewControllerDelegate, CKGradientReferenceView, OS_dispatch_group;
@class NSArray, CKConversation, CKTranscriptCollectionView, UIView, NSObject, NSIndexSet, UITapGestureRecognizer, CKAudioController, NSString, IMChat;

@interface CKTranscriptCollectionViewController : CKViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIAlertViewDelegate, CKTranscriptCollectionViewDelegate, CKMovieBalloonViewDelegate, CKLocationShareBalloonViewDelegate, CKTitledImageBalloonViewDelegate, CKAudioControllerDelegate, CNAvatarViewDelegate> {

	char _initialLoad;
	char _shouldLoadDefaultConversationViewingMessageCountOnAppear;
	char _peeking;
	char _hasHiddenItems;
	char _isLoadingEarlierMessages;
	char _sizedFullTranscript;
	char _filterAllButFirstMessage;
	char _transcriptUpdateAnimated;
	NSArray* _chatItems;
	CKConversation* _conversation;
	CKTranscriptCollectionView* _collectionView;
	float _balloonMaxWidth;
	id<CKTranscriptCollectionViewControllerDelegate> _delegate;
	UIView*<CKGradientReferenceView> _gradientReferenceView;
	NSObject*<OS_dispatch_group> _updateAnimationGroup;
	NSIndexSet* _hiddenItems;
	UITapGestureRecognizer* _loggingTapGestureRecognizer;
	CKAudioController* _audioController;
	/*^block*/id _alertHandler;
	NSString* _speakerTransferGUID;
	float _firstBalloonAlignmentTopInset;
	/*^block*/id _transcriptUpdateCompletion;
	CGPoint _peekSampleTranslation;
	UIEdgeInsets _marginInsets;

}

@property (nonatomic,retain) CKConversation * conversation;                                                //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain,readonly) IMChat * chat; 
@property (nonatomic,retain) CKTranscriptCollectionView * collectionView;                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,copy) NSArray * chatItems;                                                            //@synthesize chatItems=_chatItems - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                    //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,nonatomic) float balloonMaxWidth;                                                        //@synthesize balloonMaxWidth=_balloonMaxWidth - In the implementation block
@property (assign,nonatomic) id<CKTranscriptCollectionViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView*<CKGradientReferenceView> gradientReferenceView;                       //@synthesize gradientReferenceView=_gradientReferenceView - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> updateAnimationGroup;                            //@synthesize updateAnimationGroup=_updateAnimationGroup - In the implementation block
@property (nonatomic,copy) NSIndexSet * hiddenItems;                                                       //@synthesize hiddenItems=_hiddenItems - In the implementation block
@property (assign,getter=isInitialLoad,nonatomic) char initialLoad;                                        //@synthesize initialLoad=_initialLoad - In the implementation block
@property (assign,nonatomic) char shouldLoadDefaultConversationViewingMessageCountOnAppear;                //@synthesize shouldLoadDefaultConversationViewingMessageCountOnAppear=_shouldLoadDefaultConversationViewingMessageCountOnAppear - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * loggingTapGestureRecognizer;                         //@synthesize loggingTapGestureRecognizer=_loggingTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) CKAudioController * audioController;                                          //@synthesize audioController=_audioController - In the implementation block
@property (nonatomic,copy) id alertHandler;                                                                //@synthesize alertHandler=_alertHandler - In the implementation block
@property (assign,nonatomic) CGPoint peekSampleTranslation;                                                //@synthesize peekSampleTranslation=_peekSampleTranslation - In the implementation block
@property (assign,getter=isPeeking,nonatomic) char peeking;                                                //@synthesize peeking=_peeking - In the implementation block
@property (assign,nonatomic) char hasHiddenItems;                                                          //@synthesize hasHiddenItems=_hasHiddenItems - In the implementation block
@property (assign,nonatomic) char isLoadingEarlierMessages;                                                //@synthesize isLoadingEarlierMessages=_isLoadingEarlierMessages - In the implementation block
@property (nonatomic,copy) NSString * speakerTransferGUID;                                                 //@synthesize speakerTransferGUID=_speakerTransferGUID - In the implementation block
@property (assign,nonatomic) char sizedFullTranscript;                                                     //@synthesize sizedFullTranscript=_sizedFullTranscript - In the implementation block
@property (assign,nonatomic) float firstBalloonAlignmentTopInset;                                          //@synthesize firstBalloonAlignmentTopInset=_firstBalloonAlignmentTopInset - In the implementation block
@property (assign,nonatomic) char filterAllButFirstMessage;                                                //@synthesize filterAllButFirstMessage=_filterAllButFirstMessage - In the implementation block
@property (assign,getter=isTranscriptUpdateAnimated,nonatomic) char transcriptUpdateAnimated;              //@synthesize transcriptUpdateAnimated=_transcriptUpdateAnimated - In the implementation block
@property (nonatomic,copy) id transcriptUpdateCompletion;                                                  //@synthesize transcriptUpdateCompletion=_transcriptUpdateCompletion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CKTranscriptCollectionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id<CKTranscriptCollectionViewControllerDelegate>)delegate;
-(id)collectionViewLayout;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)loadView;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CKTranscriptCollectionView *)collectionView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setCollectionView:(CKTranscriptCollectionView *)arg1 ;
-(id)selectedItems;
-(void)setSelectedItems:(id)arg1 ;
-(void)setInitialLoad:(char)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKConversation *)conversation;
-(IMChat *)chat;
-(char)isInitialLoad;
-(void)viewDidAppearDeferredSetup;
-(NSArray *)chatItems;
-(UITapGestureRecognizer *)loggingTapGestureRecognizer;
-(void)__handleLoggingTapped:(id)arg1 ;
-(void)setLoggingTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(char)_shouldShowUILogging;
-(char)_shouldShowInternalUILogging;
-(id)_remoteLogDumpButtonTitle;
-(id)_localLogDumpButtonTitle;
-(void)_performLocalLogDump;
-(void)_performRemoteLogDump;
-(void)setAlertHandler:(id)arg1 ;
-(void)_showLoggingAlertIfNecessary;
-(void)_setupLoggingTapGestureRecognizer;
-(void)_tearDownLoggingTapGestureRecognizer;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(char)balloonView:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3 ;
-(void)balloonViewWillResignFirstResponder:(id)arg1 ;
-(void)balloonViewTapped:(id)arg1 ;
-(char)shouldShowMenuForBalloonView:(id)arg1 ;
-(id)menuItemsForBalloonView:(id)arg1 ;
-(CGRect)calloutTargetRectForBalloonView:(id)arg1 ;
-(void)balloonView:(id)arg1 performAction:(SEL)arg2 withSender:(id)arg3 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(float)balloonMaxWidth;
-(void)invalidateChatItemLayoutWithBalloonMaxWidth:(float)arg1 marginInsets:(UIEdgeInsets)arg2 ;
-(void)performResumeDeferredSetup;
-(void)setScrollAnchor:(float)arg1 ;
-(void)prepareForSuspend;
-(id)initWithConversation:(id)arg1 balloonMaxWidth:(float)arg2 marginInsets:(UIEdgeInsets)arg3 ;
-(void)setGradientReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(void)setShouldLoadDefaultConversationViewingMessageCountOnAppear:(char)arg1 ;
-(void)raiseGestureRecognized:(id)arg1 ;
-(void)deleteSelectedItems:(id)arg1 ;
-(char)canRaiseToListen;
-(char)canRaiseToTalk;
-(UIView*<CKGradientReferenceView>)gradientReferenceView;
-(void)updateTranscript:(/*^block*/id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHiddenItems:(NSIndexSet *)arg1 ;
-(void)configureCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)sizeFullTranscriptIfNecessary;
-(NSObject*<OS_dispatch_group>)updateAnimationGroup;
-(void)stopPlayingAudio;
-(id)alertHandler;
-(char)wantsDrawerLayout;
-(void)previewDidChange:(id)arg1 ;
-(void)transferUpdated:(id)arg1 ;
-(void)balloonViewTitleTapped:(id)arg1 ;
-(void)balloonView:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(char)shouldLoadDefaultConversationViewingMessageCountOnAppear;
-(void)scrollToTopOfLastBubbleCellAnimated:(char)arg1 ;
-(CKAudioController *)audioController;
-(void)setBalloonMaxWidth:(float)arg1 ;
-(id)chatItemsWithIMChatItems:(id)arg1 ;
-(void)setSizedFullTranscript:(char)arg1 ;
-(void)setChatItems:(NSArray *)arg1 ;
-(char)sizedFullTranscript;
-(void)_refreshLocationsForRecipientsIfNecessary;
-(void)setUpdateAnimationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setTranscriptUpdateAnimated:(char)arg1 ;
-(void)transferRestored:(id)arg1 ;
-(void)locationStringDidChange:(id)arg1 ;
-(void)addressBookChanged:(id)arg1 ;
-(void)snapshotTaken:(id)arg1 ;
-(void)chatItemsDidChange:(id)arg1 ;
-(void)chatRegistryDidLoad:(id)arg1 ;
-(void)setHasHiddenItems:(char)arg1 ;
-(void)reconfigureVisibleSpeakerButtonCells;
-(void)setTranscriptUpdateCompletion:(id)arg1 ;
-(void)setAudioController:(CKAudioController *)arg1 ;
-(void)setPeeking:(char)arg1 ;
-(void)setPeekSampleTranslation:(CGPoint)arg1 ;
-(void)loadEarlierMessagesIfNeeded;
-(char)isPeeking;
-(CGPoint)peekSampleTranslation;
-(id)indexPathForBalloonView:(id)arg1 ;
-(void)balloonView:(id)arg1 copy:(id)arg2 ;
-(void)balloonView:(id)arg1 export:(id)arg2 ;
-(void)balloonView:(id)arg1 sendAsTextMessage:(id)arg2 ;
-(void)balloonView:(id)arg1 more:(id)arg2 ;
-(void)setSpeakerTransferGUID:(NSString *)arg1 ;
-(void)touchUpInsideCellFailureButton:(id)arg1 ;
-(void)touchUpInsideCellStatusButton:(id)arg1 ;
-(void)touchUpInsideCellReportSpamButton:(id)arg1 ;
-(void)configureSpeakerButtonCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(char)hasHiddenItems;
-(NSIndexSet *)hiddenItems;
-(id)chatItemWithIMChatItem:(id)arg1 ;
-(void)_setIsFirstChatItemOnFirstChatItem:(char)arg1 ;
-(NSString *)speakerTransferGUID;
-(void)setIsLoadingEarlierMessages:(char)arg1 ;
-(char)isLoadingEarlierMessages;
-(void)loadEarlierMessages;
-(id)messagePartForBalloonView:(id)arg1 ;
-(void)_downgradeMessageAtIndexPath:(id)arg1 ;
-(void)_resendMessageAtIndexPath:(id)arg1 ;
-(char)isTranscriptUpdateAnimated;
-(id)transcriptUpdateCompletion;
-(void)updateTranscriptChatItems:(id)arg1 inserted:(id)arg2 removed:(id)arg3 reload:(id)arg4 regenerate:(id)arg5 animated:(char)arg6 completion:(/*^block*/id)arg7 ;
-(void)touchUpInsideCellSpeakerButton:(id)arg1 ;
-(void)collectionViewWillScroll:(id)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(void)collectionViewWillProgrammaticallyScroll:(id)arg1 ;
-(void)collectionViewWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2 ;
-(void)collectionViewDidInset:(id)arg1 ;
-(char)collectionView:(id)arg1 isEditableItemAtIndexPath:(id)arg2 ;
-(void)balloonViewDidFinishDataDetectorAction:(id)arg1 ;
-(void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)locationShareBalloonViewShareButtonTapped:(id)arg1 ;
-(void)locationShareBalloonViewIgnoreButtonTapped:(id)arg1 ;
-(void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)audioControllerDidPause:(id)arg1 ;
-(void)audioControllerDidStop:(id)arg1 ;
-(void)audioControllerPlayingDidChange:(id)arg1 ;
-(void)collectionViewLayoutRestingDidChange:(id)arg1 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 chatItemForItemAtIndexPath:(id)arg3 ;
-(void)collectionViewLayout:(id)arg1 sizeDidChange:(CGSize)arg2 ;
-(float)firstBalloonAlignmentTopInset;
-(void)setFirstBalloonAlignmentTopInset:(float)arg1 ;
-(char)filterAllButFirstMessage;
-(void)setFilterAllButFirstMessage:(char)arg1 ;
@end

