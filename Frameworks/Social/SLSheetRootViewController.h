/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:37 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/SLComposeSheetConfigurationItemObserving.h>

@class NSArray, UITableViewController, SLSheetTitleView, UINavigationItem, UIViewController, SLComposeServiceViewController, UIView, UIImage, UITableView, NSString;

@interface SLSheetRootViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SLComposeSheetConfigurationItemObserving> {

	NSArray* _configurationItems;
	UITableViewController* _tableViewController;
	SLSheetTitleView* _titleView;
	UINavigationItem* _navItem;
	UIViewController* _autoCompletionViewController;
	SLComposeServiceViewController* _delegate;
	UIView* _contentView;
	UIImage* _serviceIconImage;

}

@property (assign,nonatomic,__weak) SLComposeServiceViewController * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIImage * serviceIconImage;                                    //@synthesize serviceIconImage=_serviceIconImage - In the implementation block
@property (nonatomic,readonly) UITableView * tableView; 
@property (nonatomic,copy) NSArray * configurationItems; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)serviceIconImage;
-(NSArray *)configurationItems;
-(void)resetConfigurationItems;
-(float)_preferredTableViewHeight;
-(void)setServiceIconImage:(UIImage *)arg1 ;
-(void)_updateCellForConfigurationItem:(id)arg1 ;
-(void)observeConfigurationItems:(id)arg1 ;
-(void)_updateCell:(id)arg1 withConfigurationItem:(id)arg2 ;
-(void)configurationItemDidChange:(id)arg1 ;
-(void)setPostButtonTitle:(id)arg1 ;
-(void)setPostButtonEnabled:(char)arg1 ;
-(void)updateContentViewSize:(CGSize)arg1 ;
-(void)presentAutoCompletionViewController:(id)arg1 apparentContentHeight:(float)arg2 contentViewChangeBlock:(/*^block*/id)arg3 ;
-(void)dismissAutoCompletionViewControllerWithContentViewChangeBlock:(/*^block*/id)arg1 ;
-(void)setConfigurationItems:(NSArray *)arg1 ;
-(void)setDelegate:(SLComposeServiceViewController *)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(SLComposeServiceViewController *)delegate;
-(id)navigationItem;
-(void)loadView;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)viewDidLoad;
@end

