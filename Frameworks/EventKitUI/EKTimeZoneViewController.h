/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UISearchControllerDelegate.h>

@protocol EKTimeZoneViewControllerDelegate;
@class UISearchController, NSTimeZone, NSArray, NSString;

@interface EKTimeZoneViewController : UITableViewController <UISearchControllerDelegate> {

	UISearchController* _searchController;
	int _style;
	id<EKTimeZoneViewControllerDelegate> _delegate;
	NSTimeZone* _timeZone;
	int _chooserStyle;
	NSArray* _cities;

}

@property (assign,nonatomic,__weak) id<EKTimeZoneViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                                               //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) int chooserStyle;                                                //@synthesize chooserStyle=_chooserStyle - In the implementation block
@property (nonatomic,retain) NSArray * cities;                                                  //@synthesize cities=_cities - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithChooserStyle:(int)arg1 ;
-(int)chooserStyle;
-(NSArray *)cities;
-(void)setCities:(NSArray *)arg1 ;
-(void)setDelegate:(id<EKTimeZoneViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<EKTimeZoneViewControllerDelegate>)delegate;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(NSTimeZone *)timeZone;
-(void)willDismissSearchController:(id)arg1 ;
@end
