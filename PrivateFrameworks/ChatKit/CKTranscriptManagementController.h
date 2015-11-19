/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <libobjc.A.dylib/FMFMapViewControllerDelegate.h>
#import <libobjc.A.dylib/CKAttachmentViewControllerDelegate.h>
#import <libobjc.A.dylib/CKTranscriptManagementNameFieldDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class CKConversation, FMFMapViewController, CKTranscriptManagementView, CKAttachmentViewController, CKTranscriptManagementNameField, NSString;

@interface CKTranscriptManagementController : CKViewController <FMFMapViewControllerDelegate, CKAttachmentViewControllerDelegate, CKTranscriptManagementNameFieldDelegate, UIGestureRecognizerDelegate> {

	char _mapHidden;
	char _initialLoad;
	char _removeMapViewAfterScrollAnimation;
	CKConversation* _conversation;
	FMFMapViewController* _mapController;
	CKTranscriptManagementView* _managementView;
	CKAttachmentViewController* _attachmentsController;
	CKTranscriptManagementNameField* _nameField;

}

@property (nonatomic,retain) CKConversation * conversation;                                   //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) FMFMapViewController * mapController;                            //@synthesize mapController=_mapController - In the implementation block
@property (nonatomic,retain) CKTranscriptManagementView * managementView;                     //@synthesize managementView=_managementView - In the implementation block
@property (nonatomic,retain) CKAttachmentViewController * attachmentsController;              //@synthesize attachmentsController=_attachmentsController - In the implementation block
@property (nonatomic,retain) CKTranscriptManagementNameField * nameField;                     //@synthesize nameField=_nameField - In the implementation block
@property (assign,nonatomic) char mapHidden;                                                  //@synthesize mapHidden=_mapHidden - In the implementation block
@property (assign,getter=isInitialLoad,nonatomic) char initialLoad;                           //@synthesize initialLoad=_initialLoad - In the implementation block
@property (assign,nonatomic) char removeMapViewAfterScrollAnimation;                          //@synthesize removeMapViewAfterScrollAnimation=_removeMapViewAfterScrollAnimation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(CKTranscriptManagementNameField *)nameField;
-(void)setNameField:(CKTranscriptManagementNameField *)arg1 ;
-(void)setInitialLoad:(char)arg1 ;
-(void)setMapHidden:(char)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKConversation *)conversation;
-(void)_handleFriendshipStatusChangedNotification:(id)arg1 ;
-(void)_handleLocationChangedNotification:(id)arg1 ;
-(void)_handleDisplayNameChangedNotification:(id)arg1 ;
-(void)_conversationJoinStateDidChange:(id)arg1 ;
-(CKAttachmentViewController *)attachmentsController;
-(FMFMapViewController *)mapController;
-(void)setManagementView:(CKTranscriptManagementView *)arg1 ;
-(void)setMapHidden:(char)arg1 animated:(char)arg2 ;
-(id)initWithConversation:(id)arg1 ;
-(void)setAttachmentsController:(CKAttachmentViewController *)arg1 ;
-(CKTranscriptManagementView *)managementView;
-(void)_mapViewTouched:(id)arg1 ;
-(char)mapHidden;
-(char)_conversationHasLeft;
-(UIEdgeInsets)_navigationBarInsets;
-(char)isInitialLoad;
-(void)_scrollAttachmentsToTopAnimated:(char)arg1 ;
-(void)_updateMapInsets;
-(void)_updateAttachmentsInsets;
-(char)removeMapViewAfterScrollAnimation;
-(void)setMapController:(FMFMapViewController *)arg1 ;
-(void)setRemoveMapViewAfterScrollAnimation:(char)arg1 ;
-(float)_mapHeightForCurrentBounds;
-(id)fmfMapHandles:(id)arg1 ;
-(void)fmfMapViewController:(id)arg1 didSelectHandle:(id)arg2 ;
-(void)fmfMapViewController:(id)arg1 didDeselectHandle:(id)arg2 ;
-(void)fmfMapViewController:(id)arg1 regionWillChangeAnimated:(char)arg2 ;
-(void)fmfMapViewController:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(id)annotationImageForHandle:(id)arg1 ;
-(void*)annotationABRecordForHandle:(id)arg1 ;
-(void)attachmentsController:(id)arg1 collectionViewWillBeginDragging:(id)arg2 ;
-(void)attachmentsController:(id)arg1 collectionViewDidScroll:(id)arg2 ;
-(void)attachmentsController:(id)arg1 collectionViewDidEndScrollingAnimation:(id)arg2 ;
-(void)attachmentsController:(id)arg1 collectionViewDidChangeEditState:(id)arg2 ;
-(void)nameField:(id)arg1 didCommitGroupName:(id)arg2 ;
@end

