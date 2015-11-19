/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicEntityPlaybackStatusControllerObserving.h>
#import <libobjc.A.dylib/MusicEntityEditableVerticalLockupViewDelegate.h>
#import <libobjc.A.dylib/MusicVerticalScrollingContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/MusicMediaDetailSplitViewController.h>

@protocol MusicEntityProviding, MusicMediaProductSplitDetailViewControllerDelegate;
@class MusicClientContext, MusicEntityValueContext, MusicEntityPlaybackStatusController, MPAVController, MusicEntityEditableVerticalLockupView, MusicVerticalScrollingContainerViewController, UIImage, NSString, MusicMediaDetailTintInformation, UIViewController;

@interface MusicMediaProductSplitDetailViewController : UIViewController <MusicEntityPlaybackStatusControllerObserving, MusicEntityEditableVerticalLockupViewDelegate, MusicVerticalScrollingContainerViewControllerDelegate, MusicClientContextConsuming, MusicMediaDetailSplitViewController> {

	id<MusicEntityProviding> _containerEntityProvider;
	MusicEntityValueContext* _containerEntityValueContext;
	MusicClientContext* _clientContext;
	MusicEntityPlaybackStatusController* _playbackStatusController;
	MPAVController* _player;
	MusicEntityEditableVerticalLockupView* _verticalLockupView;
	MusicVerticalScrollingContainerViewController* _verticalScrollingContainerViewController;
	UIImage* _editedContentArtworkImage;
	NSString* _lockupArtworkProperty;
	MusicMediaDetailTintInformation* _mediaDetailTintInformation;
	id<MusicMediaProductSplitDetailViewControllerDelegate> _mediaSplitViewControllerDelegate;
	UIViewController* _relatedContentViewController;

}

@property (nonatomic,retain) MusicClientContext * clientContext;                                                                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) UIImage * editedContentArtworkImage;                                                                         //@synthesize editedContentArtworkImage=_editedContentArtworkImage - In the implementation block
@property (nonatomic,copy) NSString * lockupArtworkProperty;                                                                              //@synthesize lockupArtworkProperty=_lockupArtworkProperty - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * mediaDetailTintInformation;                                                  //@synthesize mediaDetailTintInformation=_mediaDetailTintInformation - In the implementation block
@property (assign,nonatomic,__weak) id<MusicMediaProductSplitDetailViewControllerDelegate> mediaSplitViewControllerDelegate;              //@synthesize mediaSplitViewControllerDelegate=_mediaSplitViewControllerDelegate - In the implementation block
@property (nonatomic,retain) UIViewController * relatedContentViewController;                                                             //@synthesize relatedContentViewController=_relatedContentViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(id)contentScrollView;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)viewDidLoad;
-(void)verticalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned)arg2 ;
-(void)_reloadContainerEntityValueContextProperties;
-(void)_containerEntityProviderDidInvalidateNotification:(id)arg1 ;
-(UIEdgeInsets)_calculateArtworkDescriptorEdgeInsets;
-(void)_updateVerticalLockupViewSize;
-(void)_applyTintInformation;
-(void)_reloadVerticalScrollingContainerItems;
-(void)_updatePlaybackStatusForLockupView;
-(id<MusicMediaProductSplitDetailViewControllerDelegate>)mediaSplitViewControllerDelegate;
-(void)playbackStatusControllerPlaybackStatusDidChange:(id)arg1 ;
-(void)editableVerticalLockupView:(id)arg1 didSelectCameraButton:(id)arg2 ;
-(void)verticalScrollingContainerViewControllerDidScroll:(id)arg1 ;
-(void)verticalScrollingContainerViewControllerContentSizeDidChange:(id)arg1 ;
-(void)verticalScrollingContainerViewController:(id)arg1 willEndDraggingWithVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(void)setMediaSplitViewControllerDelegate:(id<MusicMediaProductSplitDetailViewControllerDelegate>)arg1 ;
-(id)initWithContainerEntityProvider:(id)arg1 clientContext:(id)arg2 ;
-(void)setEditedContentArtworkImage:(UIImage *)arg1 ;
-(void)setLockupArtworkProperty:(NSString *)arg1 ;
-(void)setRelatedContentViewController:(UIViewController *)arg1 ;
-(void)cancelEditing;
-(void)commitEditing;
-(UIImage *)editedContentArtworkImage;
-(NSString *)lockupArtworkProperty;
-(MusicMediaDetailTintInformation *)mediaDetailTintInformation;
-(UIViewController *)relatedContentViewController;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
@end
