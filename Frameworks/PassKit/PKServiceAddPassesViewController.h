/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKNavigationController.h>
#import <libobjc.A.dylib/PKPassGroupStackViewDelegate.h>
#import <libobjc.A.dylib/PKPassGroupStackViewDatasource.h>
#import <libobjc.A.dylib/PKGroupsControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PKServiceAddPassesViewControllerProtocol.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>

@class NSURLConnection, NSMutableData, NSMutableArray, NSArray, PKPassGroupStackView, PKGroupsController, UIProgressView, NSString;

@interface PKServiceAddPassesViewController : PKNavigationController <PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, PKGroupsControllerDelegate, UIScrollViewDelegate, PKServiceAddPassesViewControllerProtocol, PKPaymentSetupViewControllerDelegate> {

	NSURLConnection* _downloadPassURLConnection;
	long long _downloadPassExpectedBytes;
	NSMutableData* _downloadPassData;
	char _allowsPassIngestion;
	char _showAutomaticSelection;
	char _alreadyAdding;
	int _groupLoadState;
	/*^block*/id _loadedGroupsCallback;
	char _haveStartedCardAnimation;
	char _viewAppeared;
	NSMutableArray* _localPasses;
	NSArray* _localPassDatas;
	PKPassGroupStackView* _cardStackView;
	PKGroupsController* _groupsController;
	NSMutableArray* _minimumCardHeightFromHereToTop;
	int _presentationState;
	UIProgressView* _progressView;

}

@property (nonatomic,retain) PKPassGroupStackView * cardStackView;                         //@synthesize cardStackView=_cardStackView - In the implementation block
@property (nonatomic,retain) PKGroupsController * groupsController;                        //@synthesize groupsController=_groupsController - In the implementation block
@property (nonatomic,retain) NSMutableArray * minimumCardHeightFromHereToTop;              //@synthesize minimumCardHeightFromHereToTop=_minimumCardHeightFromHereToTop - In the implementation block
@property (nonatomic,retain) NSMutableArray * localPasses;                                 //@synthesize localPasses=_localPasses - In the implementation block
@property (nonatomic,retain) NSArray * localPassDatas;                                     //@synthesize localPassDatas=_localPassDatas - In the implementation block
@property (assign,nonatomic) char viewAppeared;                                            //@synthesize viewAppeared=_viewAppeared - In the implementation block
@property (assign,nonatomic) char haveStartedCardAnimation;                                //@synthesize haveStartedCardAnimation=_haveStartedCardAnimation - In the implementation block
@property (assign,nonatomic) int presentationState;                                        //@synthesize presentationState=_presentationState - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                //@synthesize progressView=_progressView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_preventsAppearanceProxyCustomization;
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(unsigned)indexOfGroup:(id)arg1 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(unsigned)suppressedContent;
-(unsigned)indexOfSeparationGroup;
-(void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned)arg3 toIndex:(unsigned)arg4 ;
-(void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2 ;
-(void)groupStackViewDidBeginReordering:(id)arg1 ;
-(void)groupStackViewDidEndReordering:(id)arg1 ;
-(char)passesGrowWhenFlipped;
-(void)groupStackView:(id)arg1 didTransitionToState:(int)arg2 animated:(char)arg3 ;
-(void)setPresentationState:(int)arg1 ;
-(void)setAllowsPassIngestion:(char)arg1 ;
-(void)setDisplayPropertiesWithScreenSize:(CGSize)arg1 scale:(float)arg2 ;
-(void)ingestPasses:(id)arg1 ;
-(void)ingestCardAtURL:(id)arg1 ;
-(void)tearDownDownloadConnection;
-(void)updateCancelButton;
-(void)updateAddButton;
-(id)styleTitleUsingPass:(id)arg1 count:(unsigned)arg2 ;
-(id)genericTitleWithCount:(unsigned)arg1 ;
-(void)cancelCard:(id)arg1 ;
-(void)acceptCard:(id)arg1 ;
-(void)showAutomaticSelectionController:(id)arg1 ;
-(void)showDownloadingPassUI;
-(void)setLocalPassDatas:(NSArray *)arg1 ;
-(void)updateNavTitle;
-(void)updateAddButtonAndSettings;
-(void)_acceptCard:(id)arg1 ;
-(void)_addPassesToLibraryWithCompletion:(/*^block*/id)arg1 ;
-(id)addPassViewController;
-(NSMutableArray *)localPasses;
-(void)setLocalPasses:(NSMutableArray *)arg1 ;
-(NSArray *)localPassDatas;
-(char)haveStartedCardAnimation;
-(void)setHaveStartedCardAnimation:(char)arg1 ;
-(PKPassGroupStackView *)cardStackView;
-(void)setCardStackView:(PKPassGroupStackView *)arg1 ;
-(PKGroupsController *)groupsController;
-(void)setGroupsController:(PKGroupsController *)arg1 ;
-(NSMutableArray *)minimumCardHeightFromHereToTop;
-(void)setMinimumCardHeightFromHereToTop:(NSMutableArray *)arg1 ;
-(char)viewAppeared;
-(void)setViewAppeared:(char)arg1 ;
-(void)tearDown;
-(void)dealloc;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)groupAtIndex:(unsigned)arg1 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(int)presentationState;
-(unsigned)numberOfGroups;
@end

