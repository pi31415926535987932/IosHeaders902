/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKUIStorePageSectionsDelegate.h>
#import <libobjc.A.dylib/SKUIViewControllerTesting.h>
#import <libobjc.A.dylib/SKUIMetricsViewController.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol SKUIStorePageDelegate;
@class SKUIClientContext, NSString, SSMetricsPageEvent, NSURLRequest, SSVLoadURLOperation, NSOperationQueue, SKUIMetricsController, NSDictionary, SKUIColorScheme, UIRefreshControl, SKUIStorePageSectionsViewController, SKUIStorePage;

@interface SKUIStorePageViewController : UIViewController <SKUIStorePageSectionsDelegate, SKUIViewControllerTesting, SKUIMetricsViewController, UIViewControllerRestoration> {

	SKUIClientContext* _clientContext;
	id<SKUIStorePageDelegate> _delegate;
	NSString* _lastDataConsumerClassName;
	SSMetricsPageEvent* _lastPageEvent;
	NSURLRequest* _lastRequest;
	char _loadOnAppear;
	SSVLoadURLOperation* _loadOperation;
	NSOperationQueue* _operationQueue;
	SKUIMetricsController* _metricsController;
	NSString* _performanceTestName;
	NSDictionary* _performanceTestOptions;
	SKUIColorScheme* _placeholderColorScheme;
	UIRefreshControl* _refreshControl;
	SKUIStorePageSectionsViewController* _sectionsViewController;
	SKUIStorePage* _storePage;

}

@property (getter=isLoading,nonatomic,readonly) char loading; 
@property (nonatomic,copy) SKUIStorePage * storePage;                                //@synthesize storePage=_storePage - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                      //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIStorePageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                      //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) UIRefreshControl * refreshControl;                      //@synthesize refreshControl=_refreshControl - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(char)_shouldForwardViewWillTransitionToSize;
-(void)setDelegate:(id<SKUIStorePageDelegate>)arg1 ;
-(void)dealloc;
-(id<SKUIStorePageDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(char)isLoading;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(NSOperationQueue *)operationQueue;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)_colorScheme;
-(SKUIClientContext *)clientContext;
-(void)_setMetricsController:(id)arg1 ;
-(void)sectionsViewControllerDidDismissOverlayController:(id)arg1 ;
-(char)performTestWithName:(id)arg1 options:(id)arg2 ;
-(void)setMetricsController:(id)arg1 ;
-(char)sectionsViewController:(id)arg1 showProductPageForItem:(id)arg2 ;
-(char)sectionsViewController:(id)arg1 showStorePageForURL:(id)arg2 ;
-(id)_sectionsViewController;
-(void)_metricsEnterEventNotification:(id)arg1 ;
-(void)loadURLRequest:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadURLRequest:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_loadWithOperation:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_reloadStorePage;
-(void)_setStorePage:(id)arg1 error:(id)arg2 ;
-(void)_recordMetricsPageEvent:(id)arg1 forStorePage:(id)arg2 ;
-(void)_runScrollTestWithName:(id)arg1 options:(id)arg2 ;
-(void)_showProductPage:(id)arg1 withPageEvent:(id)arg2 ;
-(void)_runPerformanceTestAfterPageLoad;
-(void)cancelPageLoad;
-(id)activeMetricsController;
-(void)loadURL:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadURL:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setStorePage:(SKUIStorePage *)arg1 ;
-(void)loadWithJSONData:(id)arg1 fromOperation:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_runPerformanceTestAfterIdle;
-(SKUIStorePage *)storePage;
@end

