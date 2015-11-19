/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSString, UIView, UITableView, BFFPaneHeaderView;

@interface CDPTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSString* _headerTitle;
	NSString* _headerSubTitle;
	/*^block*/id _completionHandler;
	UIView* _containerView;
	UITableView* _tableView;
	BFFPaneHeaderView* _headerView;

}

@property (nonatomic,copy,readonly) NSString * headerTitle;                 //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerSubTitle;              //@synthesize headerSubTitle=_headerSubTitle - In the implementation block
@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceClass; 
@property (nonatomic,retain) UIView * containerView;                        //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) BFFPaneHeaderView * headerView;                //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) char isIPad; 
@property (nonatomic,readonly) char isiPhone5OrSmaller; 
@property (nonatomic,readonly) char uiTestMode; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(UIView *)containerView;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)loadView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(float)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(BFFPaneHeaderView *)headerView;
-(void)setHeaderView:(BFFPaneHeaderView *)arg1 ;
-(NSString *)headerTitle;
-(NSString *)deviceClass;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 ;
-(char)isIPad;
-(char)isiPhone5OrSmaller;
-(char)uiTestMode;
-(NSString *)headerSubTitle;
@end

