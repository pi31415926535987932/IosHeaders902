/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicMediaDetailViewController.h>
#import <libobjc.A.dylib/MusicJSNativeViewControllerFactory.h>
#import <libobjc.A.dylib/MusicJSProfileNativeViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicMediaProfileHeaderContentViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIModalSourceViewProvider.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>

@protocol MusicEntityProviding;
@class MPMediaItemCollection, MPArtworkCatalog, MusicEntityValueContext, NSString, NSArray, NSMutableArray, UIViewController, NSNumber, MusicClientContext, MusicMediaProfileHeaderContentViewController, MusicMediaDetailHeaderViewController, MusicMediaProfileSplitDetailViewController, MusicMediaProfileSplitMainViewController;

@interface MusicMediaProfileDetailViewController : MusicMediaDetailViewController <MusicJSNativeViewControllerFactory, MusicJSProfileNativeViewControllerDelegate, MusicMediaProfileHeaderContentViewControllerDelegate, SKUIModalSourceViewProvider, UIViewControllerRestoration, MusicClientContextConsuming> {

	MPMediaItemCollection* _artistMediaItemCollection;
	MPArtworkCatalog* _artworkCatalog;
	id<MusicEntityProviding> _containerEntityProvider;
	MusicEntityValueContext* _containerEntityValueContext;
	char _didDispatchLoadEvent;
	NSString* _followerCountText;
	NSString* _followersText;
	char _hasDetailTintInformation;
	char _isAdminEnabled;
	char _isAlbumArtist;
	char _isExpectingRelatedContentDocument;
	char _isUsingHeaderLockupProfileImage;
	char _isUsingUberArtistHeroImage;
	char _isWaitingToPushMoreRelatedContentView;
	NSArray* _jsVisibleSegments;
	char _needsArtworkCatalogUpdate;
	char _needsColorAnalysisUpdate;
	int _numberOfFollowers;
	NSMutableArray* _pendingTintInformationDispatchEvents;
	CGSize _previousMaximumHeaderSize;
	unsigned _profileType;
	UIViewController* _relatedContentViewController;
	NSString* _segmentIdentifierNeedingContent;
	char _socialHidden;
	char _sharingHidden;
	NSNumber* _storeAdamID;
	MusicClientContext* _clientContext;

}

@property (nonatomic,retain) MusicClientContext * clientContext;                                                      //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) MusicMediaProfileHeaderContentViewController * headerContentViewController; 
@property (nonatomic,retain) MusicMediaDetailHeaderViewController * headerViewController; 
@property (nonatomic,readonly) MusicMediaProfileSplitDetailViewController * splitDetailViewController; 
@property (nonatomic,retain) MusicMediaProfileSplitMainViewController * splitMainViewController; 
@property (assign,nonatomic) char shouldAutomaticallySelectMyMusicSegment; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_reloadContainerEntityValueContextProperties;
-(id)initWithContainerEntityProvider:(id)arg1 clientContext:(id)arg2 existingJSProfileNativeViewController:(id)arg3 profileType:(unsigned)arg4 ;
-(void)setShouldAutomaticallySelectMyMusicSegment:(char)arg1 ;
-(id)loadJSNativeViewControllerWithAppContext:(id)arg1 ;
-(void)_containerEntityValueProviderDidInvalidateNotification:(id)arg1 ;
-(void)mediaProfileHeaderContentViewController:(id)arg1 didUpdateFollowingState:(char)arg2 forStoreID:(long long)arg3 ;
-(void)mediaProfileHeaderContentViewController:(id)arg1 didSelectContextualActionsButton:(id)arg2 ;
-(void)mediaProfileHeaderContentViewController:(id)arg1 didSelectEditButton:(id)arg2 ;
-(void)mediaProfileHeaderContentViewController:(id)arg1 didSelectShareButton:(id)arg2 ;
-(void)mediaProfileHeaderContentViewControllerDidSelectProfileTitle:(id)arg1 ;
-(void)_updateColorAnalysisIfNeededWithShouldTemporarilyWait:(char)arg1 ;
-(void)_dispatchNativeViewEventOfType:(int)arg1 withExtraInfo:(id)arg2 forViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)allowsHairline;
-(char)allowsShowingSplitDetailViewController;
-(void)showingSplitDetailViewControllerDidChange;
-(void)updateWithHeaderHeight:(float)arg1 maximumHeaderHeight:(float)arg2 headerVerticalOffset:(float)arg3 transitionProgress:(float)arg4 ;
-(void)_sendPendingTintInformationDispatchEvents;
-(void)_updateFollowText;
-(void)_updateStoreCapabilities;
-(char)_shouldUseAvailableContent;
-(void)_updateHeaderProperties;
-(void)_dispatchNeedsContentForSegmentWithIdentifier:(id)arg1 ;
-(void)_dispatchNeedsContentForDocumentIdentifier:(id)arg1 ;
-(void)_updateProfileTitle;
-(void)supportsSplitDetailViewControllerDidChange;
-(void)_pushMoreRelatedContentDocument:(id)arg1 options:(id)arg2 ;
-(void)_accessMoreRelatedContentDocumentUsingBlock:(/*^block*/id)arg1 ;
-(id)_activeDocumentContainerViewController;
-(char)shouldAutomaticallySelectMyMusicSegment;
-(void)_checkAdminPermissionForCurrentProfile;
-(void)jsProfileNativeViewController:(id)arg1 presentBiographyEditorDocument:(id)arg2 options:(id)arg3 ;
-(void)jsProfileNativeViewController:(id)arg1 presentShareDocument:(id)arg2 options:(id)arg3 ;
-(void)jsProfileNativeViewController:(id)arg1 setMoreRelatedContentDocument:(id)arg2 options:(id)arg3 ;
-(void)jsProfileNativeViewController:(id)arg1 setProfileEntityValueProviderData:(id)arg2 ;
-(void)jsProfileNativeViewController:(id)arg1 setRelatedContentDocument:(id)arg2 options:(id)arg3 ;
-(void)jsProfileNativeViewController:(id)arg1 setReportingInformation:(id)arg2 ;
-(void)jsProfileNativeViewController:(id)arg1 setDocument:(id)arg2 options:(id)arg3 forSegmentIdentifier:(id)arg4 ;
-(void)jsProfileNativeViewController:(id)arg1 setSelectedSegmentIdentifier:(id)arg2 ;
-(void)jsProfileNativeViewController:(id)arg1 setVisibleSegments:(id)arg2 ;
-(void)jsProfileNativeViewController:(id)arg1 setAvailableContentFlags:(id)arg2 ;
-(void)jsProfileNativeViewController:(id)arg1 setNumberOfFollowers:(int)arg2 ;
-(void)jsProfileNativeViewController:(id)arg1 setFollowerCountText:(id)arg2 followersText:(id)arg3 ;
-(void)jsProfileNativeViewController:(id)arg1 setSocialHidden:(char)arg2 ;
-(char)jsProfileNativeViewControllerSupportsRelatedContentDocument:(id)arg1 ;
-(void)mediaProfileSplitMainViewController:(id)arg1 needsContentForSegmentWithIdentifier:(id)arg2 ;
-(void)mediaProfileSplitMainViewControllerSegmentedControlVisibleDidChange:(id)arg1 ;
-(void)_checkAdminPermission;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
-(void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

