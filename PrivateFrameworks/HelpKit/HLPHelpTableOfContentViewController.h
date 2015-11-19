/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HelpKit/HelpKit-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchControllerDelegate.h>

@protocol HLPHelpTableOfContentViewControllerDelegate;
@class UILabel, UIButton, NSMutableArray, NSLayoutConstraint, HLPHelpSearchResultTableViewController, NSArray, HLPHelpLocale, HLPHelpBookController, HLPHelpUsageController, UISearchController, UIView, HLPHelpSearchIndexController, NSString;

@interface HLPHelpTableOfContentViewController : UITableViewController <UISearchBarDelegate, UISearchResultsUpdating, UISearchControllerDelegate> {

	char _searching;
	float _minNameLabelHeight;
	UILabel* _copyrightFooterLabel;
	UIButton* _footerViewOverlayButton;
	NSMutableArray* _openSections;
	NSMutableArray* _displayHelpItems;
	NSLayoutConstraint* _copyrightFooterLabelHeightConstraint;
	NSLayoutConstraint* _copyrightFooterLabelTopConstraint;
	HLPHelpSearchResultTableViewController* _searchResultTableViewController;
	id<HLPHelpTableOfContentViewControllerDelegate> _delegate;
	NSArray* _searchTerms;
	HLPHelpLocale* _locale;
	HLPHelpBookController* _helpBookController;
	HLPHelpUsageController* _usageController;
	UISearchController* _searchController;
	UIView* _tableFooterView;
	HLPHelpSearchIndexController* _helpSearchIndexController;

}

@property (assign,nonatomic,__weak) id<HLPHelpTableOfContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * searchTerms;                                                        //@synthesize searchTerms=_searchTerms - In the implementation block
@property (nonatomic,retain) HLPHelpLocale * locale;                                                       //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) HLPHelpBookController * helpBookController;                                   //@synthesize helpBookController=_helpBookController - In the implementation block
@property (nonatomic,retain) HLPHelpUsageController * usageController;                                     //@synthesize usageController=_usageController - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                        //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) UIView * tableFooterView;                                                     //@synthesize tableFooterView=_tableFooterView - In the implementation block
@property (nonatomic,retain) HLPHelpSearchIndexController * helpSearchIndexController;                     //@synthesize helpSearchIndexController=_helpSearchIndexController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setDelegate:(id<HLPHelpTableOfContentViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<HLPHelpTableOfContentViewControllerDelegate>)delegate;
-(id)initWithStyle:(int)arg1 ;
-(void)setTableFooterView:(UIView *)arg1 ;
-(UIView *)tableFooterView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setLocale:(HLPHelpLocale *)arg1 ;
-(HLPHelpLocale *)locale;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(UISearchController *)searchController;
-(void)willPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)updateNameLabelMetadata;
-(void)scrollToHelpItem:(id)arg1 deselectImmediately:(char)arg2 animated:(char)arg3 ;
-(void)deselectCurrentRow;
-(void)copyrightButtonTapped;
-(void)showHelpBookInfo;
-(void)openHelpItem:(id)arg1 animated:(char)arg2 ;
-(void)showTopicItem:(id)arg1 fromTableView:(id)arg2 ;
-(void)updateFooterViewLayout;
-(void)appendChildrenForSectionItem:(id)arg1 ;
-(HLPHelpSearchIndexController *)helpSearchIndexController;
-(void)updateCellSelectionWithScollPosition:(int)arg1 helpItem:(id)arg2 animated:(char)arg3 ;
-(void)closeSectionItem:(id)arg1 ;
-(int)numberOfVisibleHelpItemForSectionItem:(id)arg1 ;
-(void)updateWithHelpBookController:(id)arg1 ;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(HLPHelpBookController *)helpBookController;
-(void)setHelpBookController:(HLPHelpBookController *)arg1 ;
-(HLPHelpUsageController *)usageController;
-(void)setUsageController:(HLPHelpUsageController *)arg1 ;
-(void)setHelpSearchIndexController:(HLPHelpSearchIndexController *)arg1 ;
-(NSArray *)searchTerms;
@end

