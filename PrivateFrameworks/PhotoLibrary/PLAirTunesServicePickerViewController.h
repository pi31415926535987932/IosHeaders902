/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSDictionary, NSArray, NSString;

@interface PLAirTunesServicePickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	id _delegate;
	UITableView* _table;
	NSDictionary* _selectedRoute;
	NSArray* _availableRoutes;

}

@property (assign,nonatomic) id<PLAirTunesServicePickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * availableRoutes;                                               //@synthesize availableRoutes=_availableRoutes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)availableRoutes;
-(void)setDelegate:(id<PLAirTunesServicePickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<PLAirTunesServicePickerViewControllerDelegate>)delegate;
-(void)loadView;
-(CGSize)contentSizeForViewInPopoverView;
-(void)viewDidAppear:(char)arg1 ;
-(void)_setCell:(id)arg1 checked:(char)arg2 ;
-(int)_indexofRouteWithRouteID:(id)arg1 ;
-(id)initWithAvailableAirplayRoutes:(id)arg1 previouslySelectedRoute:(id)arg2 ;
-(void)setAvailableRoutes:(NSArray *)arg1 ;
@end

