/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/MFMailComposeToFieldDelegate.h>
#import <libobjc.A.dylib/NSUserActivityDelegate.h>
#import <libobjc.A.dylib/MFComposeActivityContinuationOperationDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewDelegate.h>
#import <libobjc.A.dylib/MFComposeHeaderViewDelegate.h>
#import <libobjc.A.dylib/MFComposeSubjectViewDelegate.h>
#import <libobjc.A.dylib/MFComposeImageSizeViewDelegate.h>
#import <libobjc.A.dylib/MFComposeRecipientTextViewDelegate.h>
#import <libobjc.A.dylib/MFSecureMIMECompositionManagerDelegate.h>
#import <libobjc.A.dylib/MFComposeTypeFactoryDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/MFGroupDetailViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@protocol MFMailComposeViewControllerDelegate, OS_dispatch_group;
@class MFMailAccountProxyGenerator, _MFMailCompositionContext, NSArray, NSString, UIView, UIBarButtonItem, CNContactPickerViewController, UIImagePickerController, MFMailComposeRecipientView, MFModernComposeRecipientAtom, MFComposeSubjectView, MFComposeImageSizeView, MFComposeBodyField, MFComposeTextContentView, MFMailSignatureController, MFRecentComposeRecipient, MFMailPopoverManager, MFMailMarkup, MFOutgoingMessageDelivery, MFMutableMessageHeaders, MFMailboxUid, MFLock, MFSecureMIMECompositionManager, NSDictionary, MFAddressPickerReformatter, UIKeyCommand, UITapGestureRecognizer, UIAlertController, MFComposeActivityContinuationOperation, UIProgressView, MFMessageContentProgressLayer, MFLANContinuationAgent, NSObject, NSTimer, NSDate, MFComposeRecipient, CNContactViewController;

@interface MFMailComposeController : UIViewController <UINavigationControllerDelegate, CNContactViewControllerDelegate, MFMailComposeToFieldDelegate, NSUserActivityDelegate, MFComposeActivityContinuationOperationDelegate, MFMailComposeViewDelegate, MFComposeHeaderViewDelegate, MFComposeSubjectViewDelegate, MFComposeImageSizeViewDelegate, MFComposeRecipientTextViewDelegate, MFSecureMIMECompositionManagerDelegate, MFComposeTypeFactoryDelegate, UIImagePickerControllerDelegate, UIPopoverPresentationControllerDelegate, MFGroupDetailViewControllerDelegate, CNContactPickerDelegate> {

	id<MFMailComposeViewControllerDelegate> _delegate;
	id _autorotationDelegate;
	id _remoteViewControllerProxy;
	MFMailAccountProxyGenerator* _accountProxyGenerator;
	_MFMailCompositionContext* _compositionContext;
	unsigned _options;
	NSArray* _toAddresses;
	NSArray* _ccAddresses;
	NSArray* _bccAddresses;
	NSArray* _originalBccAddresses;
	NSString* _subject;
	NSString* _originalSendingEmailAddress;
	NSString* _primaryAddressForForcedSendingAccount;
	NSString* _sendingEmailAddress;
	int _sendingEmailAddressIndex;
	id _content;
	unsigned _initialAttachmentCount;
	UIView* _alternateTitleView;
	UIBarButtonItem* _sendButtonItem;
	UIBarButtonItem* _closeButtonItem;
	CNContactPickerViewController* _peoplePicker;
	UIImagePickerController* _photosImagePickerController;
	MFMailComposeRecipientView* _toField;
	MFMailComposeRecipientView* _ccField;
	MFMailComposeRecipientView* _lastFocusedRecipientView;
	MFModernComposeRecipientAtom* _atomPresentingCard;
	MFComposeSubjectView* _subjectField;
	MFComposeImageSizeView* _imageSizeField;
	MFComposeBodyField* _bodyField;
	MFComposeTextContentView* _bodyTextView;
	MFMailSignatureController* _signatureController;
	MFRecentComposeRecipient* _recentRecipientPresentingCard;
	MFMailPopoverManager* _popoverManager;
	MFMailMarkup* _markupExtension;
	MFOutgoingMessageDelivery* _delivery;
	MFMutableMessageHeaders* _savedHeaders;
	NSString* _lastDraftMessageID;
	MFMailboxUid* _lastDraftMailboxUid;
	NSString* _initialTitle;
	MFLock* _autosaveLock;
	id _autosaveIdentifier;
	MFSecureMIMECompositionManager* _secureCompositionManager;
	NSDictionary* _certificatesByRecipient;
	NSDictionary* _errorsByRecipient;
	NSString* _addressForMissingIdentity;
	int _signingIdentityStatus;
	int _encryptionIdentityStatus;
	char _encryptionStatusIsKnown;
	int _resolution;
	int _recipientFieldWhileViewUnloaded;
	unsigned _isDirty : 1;
	unsigned _bodyTextChanged : 1;
	unsigned _shouldAutosaveWithSuspendInfo : 1;
	unsigned _isSuspended : 1;
	unsigned _viewWasUnloaded : 1;
	unsigned _fromAddressPickerWasVisible : 1;
	unsigned _stillLoading : 1;
	unsigned _hosted : 1;
	unsigned _hasViewAppeared : 1;
	unsigned _rotationSnapshotTaken : 1;
	unsigned _isPopoverVisible : 1;
	unsigned _useSuspended : 1;
	unsigned _didShowNotifyConfirmation : 1;
	unsigned _showingNotifyConfirmation : 1;
	MFAddressPickerReformatter* _addressPickerReformatter;
	char _contentVisible;
	char _allowRestrictedAccounts;
	char _encryptionOverrideSetting;
	UIKeyCommand* _sendKeyCommand;
	UIKeyCommand* _escapeKeyCommand;
	UITapGestureRecognizer* _requestModalTapGestureRecognizer;
	UIAlertController* _notifyConfirmation;
	MFComposeActivityContinuationOperation* _continuationOperation;
	UIProgressView* _continuationProgressView;
	MFMessageContentProgressLayer* _progressIndicatorView;
	MFLANContinuationAgent* _LANContinuationAgent;
	NSObject*<OS_dispatch_group> _imageScalingGroup;
	char _autosaveIsValid;
	unsigned short _lastTypedCharacter;
	NSTimer* _autosaveTimer;
	NSDate* _autosavedDate;
	NSDate* _lastActiveDate;
	NSDictionary* _securityScopes;
	char _isModal;
	char _useMailDrop;
	char _attachmentToMarkupIsLoaded;
	char _delayToShowMarkupHasPassed;
	MFComposeRecipient* _recipientPresentingCard;
	NSString* _originatingBundleID;
	int _sourceAccountManagement;
	UIAlertController* _popoverAlert;
	CNContactViewController* _contactViewController;
	unsigned _markupReplyAttachmentLoadingProgress;

}

@property (assign,nonatomic) id delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id remoteViewControllerProxy;                                     //@synthesize remoteViewControllerProxy=_remoteViewControllerProxy - In the implementation block
@property (nonatomic,readonly) MFOutgoingMessageDelivery * delivery;                           //@synthesize delivery=_delivery - In the implementation block
@property (nonatomic,readonly) NSString * lastDraftMessageID;                                  //@synthesize lastDraftMessageID=_lastDraftMessageID - In the implementation block
@property (nonatomic,readonly) MFMailboxUid * lastDraftMailboxUid;                             //@synthesize lastDraftMailboxUid=_lastDraftMailboxUid - In the implementation block
@property (nonatomic,copy) NSString * originatingBundleID;                                     //@synthesize originatingBundleID=_originatingBundleID - In the implementation block
@property (assign,nonatomic) int sourceAccountManagement;                                      //@synthesize sourceAccountManagement=_sourceAccountManagement - In the implementation block
@property (assign,nonatomic) char useMailDrop;                                                 //@synthesize useMailDrop=_useMailDrop - In the implementation block
@property (nonatomic,readonly) NSDate * autosavedDate;                                         //@synthesize autosavedDate=_autosavedDate - In the implementation block
@property (nonatomic,retain) id<NSCoding> autosaveIdentifier; 
@property (assign,nonatomic) char isModal;                                                     //@synthesize isModal=_isModal - In the implementation block
@property (nonatomic,retain) UIAlertController * popoverAlert;                                 //@synthesize popoverAlert=_popoverAlert - In the implementation block
@property (nonatomic,retain) CNContactPickerViewController * peoplePicker;                     //@synthesize peoplePicker=_peoplePicker - In the implementation block
@property (nonatomic,retain) CNContactViewController * contactViewController;                  //@synthesize contactViewController=_contactViewController - In the implementation block
@property (nonatomic,retain) MFModernComposeRecipientAtom * atomPresentingCard;                //@synthesize atomPresentingCard=_atomPresentingCard - In the implementation block
@property (nonatomic,retain) MFComposeRecipient * recipientPresentingCard;                     //@synthesize recipientPresentingCard=_recipientPresentingCard - In the implementation block
@property (nonatomic,retain) NSDictionary * certificatesByRecipient;                           //@synthesize certificatesByRecipient=_certificatesByRecipient - In the implementation block
@property (nonatomic,retain) NSDictionary * errorsByRecipient;                                 //@synthesize errorsByRecipient=_errorsByRecipient - In the implementation block
@property (nonatomic,copy) NSString * addressForMissingIdentity;                               //@synthesize addressForMissingIdentity=_addressForMissingIdentity - In the implementation block
@property (assign,nonatomic) char attachmentToMarkupIsLoaded;                                  //@synthesize attachmentToMarkupIsLoaded=_attachmentToMarkupIsLoaded - In the implementation block
@property (assign,nonatomic) char delayToShowMarkupHasPassed;                                  //@synthesize delayToShowMarkupHasPassed=_delayToShowMarkupHasPassed - In the implementation block
@property (assign,nonatomic) unsigned markupReplyAttachmentLoadingProgress;                    //@synthesize markupReplyAttachmentLoadingProgress=_markupReplyAttachmentLoadingProgress - In the implementation block
@property (getter=isVerticallyCompact,nonatomic,readonly) char verticallyCompact; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isSetupForDeliveryAllowingRestrictedAccounts:(char)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
+(id)preferenceForKey:(id)arg1 ;
+(char)isSetupForDeliveryAllowingRestrictedAccounts:(char)arg1 ;
+(void)initialize;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(char)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(CNContactViewController *)contactViewController;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(void)dismissMarkupViewController;
-(CGRect)markupAttachmentBoundsForAttachment:(id)arg1 ;
-(CGRect)markupAttachmentMaskForAttachment:(id)arg1 ;
-(id)attachmentIcon:(id)arg1 ;
-(void)handleMarkupError:(id)arg1 attachment:(id)arg2 ;
-(void)presentMarkupViewController:(id)arg1 ;
-(void)handleMarkupURL:(id)arg1 attachment:(id)arg2 ;
-(void)handleMarkupData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 attachment:(id)arg4 ;
-(void)markupAttachment:(id)arg1 ;
-(void)changeQuoteLevel:(int)arg1 ;
-(void)insertPhotoOrVideo;
-(char)canShowFromField;
-(char)canShowImageSizeField;
-(id)sendingEmailAddressIfExists;
-(id)currentScaleImageSize;
-(void)selectCurrentEntryForFromAddressPickerView:(id)arg1 ;
-(void)scrollToSelectedEntryInFromAddressTableView:(id)arg1 ;
-(void)updateSignature;
-(id)sendingEmailAddress;
-(void)setSendingEmailAddress:(id)arg1 ;
-(char)bccAddressesDirtied;
-(id)sendingAccountProxy;
-(id)bodyField;
-(void)didInsertBodyText:(id)arg1 ;
-(int)compositionType;
-(void)importDocument;
-(id)compositionContext;
-(void)showPhotoPickerWithSourceType:(int)arg1 fromSource:(id)arg2 ;
-(char)canShowAttachmentPicker;
-(void)didInsertAttachment:(id)arg1 ;
-(void)setCaretPosition:(unsigned)arg1 ;
-(void)activityContinuationOperation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)activityContinuationOperation:(id)arg1 didFinishSendingDataWithResult:(unsigned)arg2 ;
-(void)activityContinuationOperationReceivedBytes:(id)arg1 ;
-(void)activityContinuationOperation:(id)arg1 didFinishReceivingData:(id)arg2 ;
-(void)composeSubjectViewDidSelectNotifyButton:(id)arg1 ;
-(void)composeSubjectViewTextFieldDidResignFirstResponder:(id)arg1 ;
-(void)composeSubjectViewTextFieldDidBecomeFirstResponder:(id)arg1 ;
-(void)composeSubjectViewDidRemoveContent:(id)arg1 ;
-(int)sourceAccountManagement;
-(void)setHosted:(char)arg1 ;
-(void)_preferredContentSizeCategoryDidChange:(id)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(id)mailComposeView;
-(void)setPopoverAlert:(UIAlertController *)arg1 ;
-(void)setAddresses:(id)arg1 field:(int)arg2 ;
-(void)setUseMailDrop:(char)arg1 ;
-(void)_requestBecomeModalGestureRecognized:(id)arg1 ;
-(int)composeType;
-(void)_updateNavigationBarTitleAnimated:(char)arg1 ;
-(id)_alternateTitleView;
-(id)navigationBarTitle;
-(void)_resetSecureCompositionManager;
-(char)_secureCompositionManagerHasRecipients;
-(id)_defaultAccount;
-(void)_resetProxyGenerator;
-(id)_emailAddresses;
-(id)_availableAccountProxies;
-(void)setProgressUIVisible:(char)arg1 animated:(char)arg2 ;
-(void)clearAllFields;
-(void)_loadCompositionContext;
-(void)_prepareCompositionContextForLoading:(id)arg1 ;
-(NSString *)originatingBundleID;
-(void)_setupForDraft:(id)arg1 ;
-(void)_setupForExistingNewMessage:(id)arg1 content:(id)arg2 ;
-(void)_setupForOutbox:(id)arg1 ;
-(void)_setupForAutosavedMessage:(id)arg1 ;
-(id)toRecipients;
-(id)ccRecipients;
-(void)_updateSendAndCloseEnabled;
-(void)_checkForReplyAndForwardRestriction;
-(char)_isRestoredComposition;
-(void)_updateOriginalBccStatusForRestoreAddingAddress:(char)arg1 ;
-(void)_setIsLoading:(char)arg1 ;
-(void)_loadingContextDidLoad:(id)arg1 ;
-(void)pickInitialFirstResponder;
-(void)_updateImageSizeTitles;
-(char)_isReplyOrForward;
-(id)savedHeaders;
-(void)setDraftMessageID:(id)arg1 mailbox:(id)arg2 ;
-(void)setCcRecipients:(id)arg1 ;
-(void)setBccRecipients:(id)arg1 ;
-(void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(char)arg2 ;
-(void)_attachmentLoaderFinishedWithOriginalContent:(id)arg1 ;
-(void)_finishedLoadingAllContentAndAttachments;
-(void)_makeComposeUserActivityCurrent;
-(void)_setAutosaveIsValid:(char)arg1 ;
-(void)_autosaveTimerFired:(id)arg1 ;
-(void)_draftContentDidChange;
-(unsigned)markupReplyAttachmentLoadingProgress;
-(id)markupReplacementAttachment;
-(void)setMarkupReplyAttachmentLoadingProgress:(unsigned)arg1 ;
-(char)_setSendingEmailAddress:(id)arg1 addIfNotPresent:(char)arg2 ;
-(void)_resetSecureCompositionManagerUsingNewAccount:(char)arg1 ;
-(CGRect)frameForAttachmentWithIdentifier:(id)arg1 ;
-(id)_addressFieldForField:(int)arg1 ;
-(void)_setRecipients:(id)arg1 forField:(int)arg2 ;
-(id)addressesForField:(int)arg1 ;
-(void)addAddress:(id)arg1 field:(int)arg2 ;
-(void)removeAddressAtIndex:(unsigned)arg1 field:(int)arg2 ;
-(id)_allRecipientViews;
-(char)isVerticallyCompact;
-(CGRect)_optimalRectForPresentingPopoverInWebView:(id)arg1 ;
-(char)_shouldEnableSendButton;
-(char)_shouldEnableCloseButton;
-(char)_isSetupForDelivery;
-(char)_isPopoverOrActionSheetOrAlertVisible;
-(char)_wantsEncryption;
-(void)_scaleImages;
-(id)_attachmentToMarkup;
-(char)delayToShowMarkupHasPassed;
-(void)setAttachmentToMarkupIsLoaded:(char)arg1 ;
-(void)_composeViewDidDraw:(id)arg1 ;
-(unsigned long)_sizeForScale:(unsigned)arg1 imagesOnly:(char)arg2 ;
-(void)_setInitialStateForImageField;
-(void)_setTitleBarSubtitleText:(id)arg1 style:(unsigned)arg2 ;
-(char)_shouldAutosaveAfterTimerFiredWithInterval:(double)arg1 ;
-(void)_prepareForSuspend;
-(void)_saveMessageValues;
-(id)_messageForAutosave;
-(void)_finishedComposing;
-(void)_finishPopoverAlertClosingComposition:(char)arg1 ;
-(void)_setupForSaveAsDraft;
-(void)_leaveMessageInOutbox;
-(void)_displayPopoverAlert:(id)arg1 ;
-(void)_close;
-(id)_outgoingMessageWithSubstituteDocument:(id)arg1 useSuspendInfo:(char)arg2 endingEditing:(char)arg3 ;
-(id)_messageUseSuspendInfo:(char)arg1 endingEditing:(char)arg2 ;
-(char)useMailDrop;
-(Class)_deliveryClass;
-(void)sendMessage;
-(void)_promptForMailDropIfNecessaryWithContinuation:(/*^block*/id)arg1 ;
-(void)_prepareImagesForSendWithContinuation:(/*^block*/id)arg1 ;
-(void)_checkForEmptySubjectWithContinuation:(/*^block*/id)arg1 ;
-(void)_checkForInvalidAddressesWithContinuation:(/*^block*/id)arg1 ;
-(void)_finishModalAlertClosingComposition:(char)arg1 ;
-(void)_presentModalAlert:(id)arg1 ;
-(char)_shouldUseMailDrop;
-(void)_physicallyScaleImagesToScale:(unsigned)arg1 ;
-(unsigned long)_estimateMessageSize;
-(void)finalizeSignature;
-(void)_setUpDeliveryObject;
-(id)_messageForRemoteDelivery;
-(id)_messageForDraft;
-(void)_explainAirplaneMode;
-(char)needsDelivery;
-(int)deliverMessageRemotely;
-(void)_bodyTextChanged:(id)arg1 ;
-(void)_subjectTextChanged:(id)arg1 ;
-(void)_recipientTextChanged:(id)arg1 ;
-(void)attachmentsRemoved:(id)arg1 ;
-(void)attachmentFinishedLoading:(id)arg1 ;
-(void)_focusGained:(id)arg1 ;
-(void)_restoreMessageValues;
-(int)_fieldForAddressField:(id)arg1 ;
-(void)setIsModal:(char)arg1 ;
-(void)setContactViewController:(CNContactViewController *)arg1 ;
-(void)setAtomPresentingCard:(MFModernComposeRecipientAtom *)arg1 ;
-(void)setRecipientPresentingCard:(MFComposeRecipient *)arg1 ;
-(void)setDelayToShowMarkupHasPassed:(char)arg1 ;
-(char)attachmentToMarkupIsLoaded;
-(void)clearInitialTitle;
-(id)popoverManagerCreateIfNeeded:(char)arg1 ;
-(void)_clearMessageValues;
-(void)_finishEnteringRecipients;
-(char)hosted;
-(char)_isActiveComposeController;
-(void)_updateRecipientAtomStyles;
-(void)didBecomeActiveComposeController;
-(void)_popoverWillBePresented:(id)arg1 ;
-(char)_isTabKeyCommandInvocationPossible;
-(void)_tabKeyCommandInvoked:(id)arg1 ;
-(void)_focusBccHeaderCommandInvoked:(id)arg1 ;
-(void)_dismissPersonCard;
-(id)bccRecipients;
-(void)_updateAutoBccSendingAddress:(id)arg1 withNewSendingAddress:(id)arg2 ;
-(void)_updateBodyFieldAutoCorrectionContext;
-(void)_updateSMIMEButtonEnabledForRecipientCount;
-(char)_anyRecipientViewContainsAddress:(id)arg1 ;
-(char)_hasEncryptionIdentityError;
-(unsigned)_defaultAtomPresentationOptions;
-(NSDictionary *)certificatesByRecipient;
-(NSDictionary *)errorsByRecipient;
-(void)_setLastFocusedRecipientView:(id)arg1 ;
-(char)isShowingRecentPersonCard;
-(id)_contactViewControllerForRecipient:(id)arg1 ;
-(void)_updatePersonCard;
-(MFComposeRecipient *)recipientPresentingCard;
-(id)navigationControllerForRecentPersonCard;
-(void)_showPersonCardForRecipient:(id)arg1 showDeleteButton:(char)arg2 ;
-(unsigned)_reloadNumberOfReformattedAddressesWithMaximumWidth:(float)arg1 defaultFontSize:(float)arg2 ;
-(id)_reformattedAddressAtIndex:(unsigned)arg1 ;
-(void)didSelectCellAtRow:(unsigned)arg1 ;
-(void)_updateTableCell:(id)arg1 isChecked:(char)arg2 ;
-(void)setCertificatesByRecipient:(NSDictionary *)arg1 ;
-(void)setErrorsByRecipient:(NSDictionary *)arg1 ;
-(void)setAddressForMissingIdentity:(NSString *)arg1 ;
-(void)_updateSMIMEButtonForEncryptionStatus:(int)arg1 ;
-(void)_updateTitleBarForEncryptionStatus:(int)arg1 ;
-(char)_hasRecipients;
-(void)_showMissingIdentityAlert;
-(NSString *)addressForMissingIdentity;
-(id)_missingIdentityErrorWithFormat:(id)arg1 title:(id)arg2 ;
-(void)_updateIdentityStatus:(int*)arg1 withPolicy:(int)arg2 identity:(SecIdentityRef)arg3 error:(id)arg4 ;
-(void)_hideContinuationProgressViewAnimated:(char)arg1 ;
-(id)_documentForActivityContinuation;
-(void)setCompositionContext:(id)arg1 ;
-(void)_createAndAddContinuationProgressViewIfNecessary;
-(char)shouldShowSMIMEButton;
-(void)tappedSMIMEButton;
-(char)sendingEmailDirtied;
-(id)popoverManager;
-(void)imageSizeView:(id)arg1 changedSelectedScaleTo:(unsigned)arg2 ;
-(void)secureMIMECompositionManager:(id)arg1 signingStatusDidChange:(int)arg2 context:(id)arg3 ;
-(void)secureMIMECompositionManager:(id)arg1 encryptionStatusDidChange:(int)arg2 context:(id)arg3 ;
-(id)accountProxyGenerator;
-(void)setSavedHeaders:(id)arg1 ;
-(char)hasAnyHiddenTrailingEmptyQuote;
-(void)addSignature:(char)arg1 ;
-(id)initWithCompositionContext:(id)arg1 options:(unsigned)arg2 ;
-(void)setInitialTitle:(id)arg1 ;
-(char)_shouldPrependBlankLineForAttachments;
-(void)_tryAddSenderToBccRecipients;
-(void)_updateOriginalBccStatusForRestore;
-(CGRect)rectOfAttachment:(id)arg1 ;
-(void)_unscaleImages;
-(void)serializedPlaceholderForFileName:(id)arg1 fileSize:(int)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)serializedPlaceholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)serializedPlaceholderForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)securityScopeForURL:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)forceSaveAsDraft;
-(char)isSavingAsDraft;
-(void)setRecipientsKeyboardType:(int)arg1 ;
-(void)composeShortcutInvoked:(id)arg1 ;
-(void)hostApplicationDidEnterBackground;
-(void)hostApplicationWillEnterForeground;
-(int)popoverPresentationStyleForViewController:(id)arg1 ;
-(id)_newLegacyAddressBookViewControllerForRecipient:(id)arg1 ;
-(void)handleLargeMessageComposeContinuationWithInputStream:(id)arg1 outputStream:(id)arg2 error:(id)arg3 ;
-(MFModernComposeRecipientAtom *)atomPresentingCard;
-(NSString *)lastDraftMessageID;
-(MFMailboxUid *)lastDraftMailboxUid;
-(MFOutgoingMessageDelivery *)delivery;
-(char)isModal;
-(NSDate *)autosavedDate;
-(void)setOriginatingBundleID:(NSString *)arg1 ;
-(UIAlertController *)popoverAlert;
-(void)send:(id)arg1 ;
-(id)emailAddresses;
-(id)presentationViewController;
-(void)setToRecipients:(id)arg1 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)recipientViewDidBecomeFirstResponder:(id)arg1 ;
-(void)recipientViewDidResignFirstResponder:(id)arg1 ;
-(char)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 showPersonCardForRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 showCorecipients:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3 ;
-(void)composeRecipientViewReturnPressed:(id)arg1 ;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg1 ;
-(char)composeRecipientViewShowingSearchResults:(id)arg1 ;
-(char)presentSearchResultsForComposeRecipientView:(id)arg1 ;
-(void)dismissSearchResultsForComposeRecipientView:(id)arg1 ;
-(void)selectNextSearchResultForComposeRecipientView:(id)arg1 ;
-(void)selectPreviousSearchResultForComposeRecipientView:(id)arg1 ;
-(char)chooseSelectedSearchResultForComposeRecipientView:(id)arg1 ;
-(void)composeHeaderViewDidChangeValue:(id)arg1 ;
-(void)composeHeaderViewDidConfirmValue:(id)arg1 ;
-(void)composeHeaderView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(unsigned)pickerView:(id)arg1 numberOfRowsInComponent:(unsigned)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(int)arg2 forComponent:(int)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(void)applicationWillSuspend;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)updateUserActivityState:(id)arg1 ;
-(void)applicationDidResume;
-(void)userActivity:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3 ;
-(id)keyCommands;
-(void)loadView;
-(char)canBecomeFirstResponder;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillUnload;
-(void)viewDidUnload;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(void)_getRotationContentSettings:(SCD_Struct_MF6*)arg1 ;
-(void)setContentVisible:(char)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(id)attachments;
-(void)setSubject:(id)arg1 ;
-(void)autosaveWithHandler:(/*^block*/id)arg1 ;
-(void)setAutosaveIdentifier:(id<NSCoding>)arg1 ;
-(id)subject;
-(void)setSourceAccountManagement:(int)arg1 ;
-(id<NSCoding>)autosaveIdentifier;
-(CNContactPickerViewController *)peoplePicker;
-(void)setPeoplePicker:(CNContactPickerViewController *)arg1 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)_loadAttachments;
-(void)_removeRecent;
-(unsigned)presentationOptionsForRecipient:(id)arg1 ;
-(void)groupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2 ;
-(void)groupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2 ;
-(void)groupDetailViewControllerDidCancel:(id)arg1 ;
-(char)hasAttachments;
-(void)setRemoteViewControllerProxy:(id)arg1 ;
-(id)remoteViewControllerProxy;
-(void)close:(id)arg1 ;
-(void)_dismissPeoplePicker:(id)arg1 ;
-(char)isDirty;
-(int)resolution;
-(void)dismissSheet;
@end

