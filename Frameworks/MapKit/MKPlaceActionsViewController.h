/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:29 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>
#import <libobjc.A.dylib/MKHideableBottomSeparator.h>

@protocol MKPlaceActionsViewControllerDelegate;
@class NSArray, MKMapItem, NSString;

@interface MKPlaceActionsViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse, MKHideableBottomSeparator> {

	char _showContactActions;
	char _showRemovePin;
	char _showReportAProblem;
	char _showSharing;
	char _showSimulateLocation;
	char _showOpenInSkyline;
	char _viewShouldHideBottommostSeparator;
	NSArray* _actions;
	id<MKPlaceActionsViewControllerDelegate> _actionDelegate;
	MKMapItem* _mapItem;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                         //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceActionsViewControllerDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic) char showContactActions;                                                     //@synthesize showContactActions=_showContactActions - In the implementation block
@property (assign,nonatomic) char showRemovePin;                                                          //@synthesize showRemovePin=_showRemovePin - In the implementation block
@property (assign,nonatomic) char showReportAProblem;                                                     //@synthesize showReportAProblem=_showReportAProblem - In the implementation block
@property (assign,nonatomic) char showSharing;                                                            //@synthesize showSharing=_showSharing - In the implementation block
@property (assign,nonatomic) char showSimulateLocation;                                                   //@synthesize showSimulateLocation=_showSimulateLocation - In the implementation block
@property (assign,nonatomic) char showOpenInSkyline;                                                      //@synthesize showOpenInSkyline=_showOpenInSkyline - In the implementation block
@property (nonatomic,retain) NSArray * actions;                                                           //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char requiresPreferredContentSizeInStackingView; 
@property (assign,nonatomic) char viewShouldHideBottommostSeparator;                                      //@synthesize viewShouldHideBottommostSeparator=_viewShouldHideBottommostSeparator - In the implementation block
-(void)setShowReportAProblem:(char)arg1 ;
-(char)showSimulateLocation;
-(char)showOpenInSkyline;
-(void)setShowOpenInSkyline:(char)arg1 ;
-(void)setShowSimulateLocation:(char)arg1 ;
-(char)showContactActions;
-(char)showRemovePin;
-(char)showReportAProblem;
-(void)setShowContactActions:(char)arg1 ;
-(void)setShowRemovePin:(char)arg1 ;
-(char)requiresPreferredContentSizeInStackingView;
-(void)setViewShouldHideBottommostSeparator:(char)arg1 ;
-(char)viewShouldHideBottommostSeparator;
-(char)showSharing;
-(void)setShowSharing:(char)arg1 ;
-(void)updateActions;
-(id<MKPlaceActionsViewControllerDelegate>)actionDelegate;
-(void)setActionDelegate:(id<MKPlaceActionsViewControllerDelegate>)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(NSArray *)actions;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

