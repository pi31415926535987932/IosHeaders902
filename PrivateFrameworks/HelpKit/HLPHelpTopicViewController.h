/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/HLPHelpTopicViewControllerDelegate.h>

@protocol HLPHelpTopicViewControllerDelegate;
@class HLPURLSession, HLPHelpBookController, NSCache, NSMutableArray, UIBarButtonItem, UITapGestureRecognizer, NSURL, WKWebView, HLPHelpTopicHistoryItem, HLPHelpLoadingView, HLPHelpUsageController, NSArray, NSString;

@interface HLPHelpTopicViewController : UIViewController <UIGestureRecognizerDelegate, WKNavigationDelegate, HLPHelpTopicViewControllerDelegate> {

	char _webViewLoaded;
	char _RTL;
	HLPURLSession* _URLSession;
	HLPHelpBookController* _helpBookController;
	NSCache* _topicCache;
	NSMutableArray* _topicHistory;
	UIBarButtonItem* _tocBarButtonItem;
	UIBarButtonItem* _backBarButtonItem;
	UIBarButtonItem* _forwardBarButtonItem;
	UITapGestureRecognizer* _tapGestureRecognizer;
	char _displayHelpTopicsOnly;
	char _hideDoneButton;
	id<HLPHelpTopicViewControllerDelegate> _delegate;
	NSURL* _helpBookURL;
	WKWebView* _webView;
	HLPHelpTopicHistoryItem* _currentTopicHistoryItem;
	HLPHelpLoadingView* _loadingView;
	HLPHelpUsageController* _usageController;
	NSArray* _searchTerms;

}

@property (assign,nonatomic,__weak) id<HLPHelpTopicViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char displayHelpTopicsOnly;                                          //@synthesize displayHelpTopicsOnly=_displayHelpTopicsOnly - In the implementation block
@property (assign,nonatomic) char hideDoneButton;                                                 //@synthesize hideDoneButton=_hideDoneButton - In the implementation block
@property (nonatomic,retain) NSURL * helpBookURL;                                                 //@synthesize helpBookURL=_helpBookURL - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                                                 //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) HLPHelpBookController * helpBookController;                          //@synthesize helpBookController=_helpBookController - In the implementation block
@property (nonatomic,retain) HLPHelpTopicHistoryItem * currentTopicHistoryItem;                   //@synthesize currentTopicHistoryItem=_currentTopicHistoryItem - In the implementation block
@property (nonatomic,retain) HLPHelpLoadingView * loadingView;                                    //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) HLPHelpUsageController * usageController;                            //@synthesize usageController=_usageController - In the implementation block
@property (nonatomic,retain) NSArray * searchTerms;                                               //@synthesize searchTerms=_searchTerms - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateDoneButton;
-(void)setDelegate:(id<HLPHelpTopicViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<HLPHelpTopicViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(WKWebView *)webView;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)dismiss;
-(void)updateNavigationButtons;
-(NSURL *)helpBookURL;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(HLPHelpBookController *)helpBookController;
-(void)setHelpBookController:(HLPHelpBookController *)arg1 ;
-(HLPHelpUsageController *)usageController;
-(void)setUsageController:(HLPHelpUsageController *)arg1 ;
-(void)setHelpBookURL:(NSURL *)arg1 ;
-(char)displayHelpTopicsOnly;
-(void)setDisplayHelpTopicsOnly:(char)arg1 ;
-(void)setHideDoneButton:(char)arg1 ;
-(void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 ;
-(void)reloadCurrentTopic;
-(void)helpTopicViewControllerDoneButtonTapped:(id)arg1 ;
-(void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2 ;
-(char)hideDoneButton;
-(void)setLoadingView:(HLPHelpLoadingView *)arg1 ;
-(void)showWebViewDelay;
-(void)showTableOfContent;
-(void)backButtonTapped;
-(void)forwardButtonTapped;
-(void)updateScrollPositionForCurrentTopicItem;
-(void)saveCurrentTopicItem;
-(void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 topicAccessType:(int)arg3 ;
-(void)dismissWelcomeHelpTopic;
-(void)loadHTMLString:(id)arg1 ;
-(HLPHelpTopicHistoryItem *)currentTopicHistoryItem;
-(void)setCurrentTopicHistoryItem:(HLPHelpTopicHistoryItem *)arg1 ;
-(NSArray *)searchTerms;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(HLPHelpLoadingView *)loadingView;
@end

