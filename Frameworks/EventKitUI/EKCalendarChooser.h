/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:03 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>

@protocol EKCalendarChooserDelegate, EKStyleProvider;
@class NSMutableSet, EKEventStore, UITableView, NSMutableArray, NSMutableDictionary, NSIndexPath, EKSource, _UIAccessDeniedView, UIRefreshControl, NSSet, EKCalendar;

@interface EKCalendarChooser : UIViewController {

	char _disableCalendarEditing;
	char _showsDeclinedEventsSetting;
	char _showDetailAccessories;
	char _showDefaultCalendarExplanatoryText;
	struct {
		unsigned listIsFlat : 1;
		unsigned showAll : 1;
		unsigned showColors : 1;
		unsigned allSelected : 1;
		unsigned allowsRotation : 1;
		unsigned allowsEdit : 1;
		unsigned showsDoneButton : 1;
		unsigned showsCancelButton : 1;
		unsigned showsWritableCalendarsOnly : 1;
		unsigned showsRefreshButton : 1;
		unsigned allowsPullToRefresh : 1;
	}  _flags;
	int _style;
	NSMutableSet* _selectedCalendars;
	id<EKCalendarChooserDelegate> _delegate;
	int _chooserMode;
	unsigned _entityType;
	int _lastAuthorizationStatus;
	EKEventStore* _eventStore;
	UITableView* _tableView;
	NSMutableArray* _groups;
	NSMutableDictionary* _storeGroupMap;
	NSMutableDictionary* _customGroupMap;
	NSIndexPath* _checkedRow;
	id<EKStyleProvider> _styleProvider;
	EKSource* _limitedToSource;
	_UIAccessDeniedView* _accessDeniedView;
	int _refreshCounter;
	UIRefreshControl* _refreshControl;

}

@property (assign,nonatomic) int selectionStyle;                                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<EKCalendarChooserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsDoneButton; 
@property (assign,nonatomic) char showsCancelButton; 
@property (nonatomic,copy) NSSet * selectedCalendars; 
@property (assign,nonatomic) char allowsRotation; 
@property (nonatomic,retain) EKCalendar * selectedCalendar; 
@property (assign,nonatomic) int chooserMode;                                            //@synthesize chooserMode=_chooserMode - In the implementation block
@property (assign,nonatomic) char allowsEdit; 
@property (assign,nonatomic) char disableCalendarEditing;                                //@synthesize disableCalendarEditing=_disableCalendarEditing - In the implementation block
@property (assign,nonatomic) char showsRefreshButton; 
@property (assign,nonatomic) char allowsPullToRefresh; 
@property (assign,nonatomic) char showsDeclinedEventsSetting;                            //@synthesize showsDeclinedEventsSetting=_showsDeclinedEventsSetting - In the implementation block
@property (assign,nonatomic) char showDetailAccessories;                                 //@synthesize showDetailAccessories=_showDetailAccessories - In the implementation block
@property (assign,nonatomic) char showDefaultCalendarExplanatoryText;                    //@synthesize showDefaultCalendarExplanatoryText=_showDefaultCalendarExplanatoryText - In the implementation block
@property (assign,nonatomic) unsigned entityType;                                        //@synthesize entityType=_entityType - In the implementation block
@property (assign,nonatomic) int lastAuthorizationStatus;                                //@synthesize lastAuthorizationStatus=_lastAuthorizationStatus - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore;                                  //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                    //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSMutableArray * groups;                                    //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * storeGroupMap;                        //@synthesize storeGroupMap=_storeGroupMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * customGroupMap;                       //@synthesize customGroupMap=_customGroupMap - In the implementation block
@property (nonatomic,retain) NSIndexPath * checkedRow;                                   //@synthesize checkedRow=_checkedRow - In the implementation block
@property (nonatomic,retain) id<EKStyleProvider> styleProvider;                          //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) SCD_Struct_EK10 flags;                                      //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSMutableSet * selectedCalendarSet;                         //@synthesize selectedCalendars=_selectedCalendars - In the implementation block
@property (nonatomic,retain) EKSource * limitedToSource;                                 //@synthesize limitedToSource=_limitedToSource - In the implementation block
@property (nonatomic,retain) _UIAccessDeniedView * accessDeniedView;                     //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (assign,nonatomic) int refreshCounter;                                         //@synthesize refreshCounter=_refreshCounter - In the implementation block
@property (nonatomic,retain) UIRefreshControl * refreshControl;                          //@synthesize refreshControl=_refreshControl - In the implementation block
-(id<EKStyleProvider>)styleProvider;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)setSelectedCalendar:(EKCalendar *)arg1 ;
-(EKCalendar *)selectedCalendar;
-(void)_eventStoreChanged:(id)arg1 ;
-(void)setSelectedCalendars:(NSSet *)arg1 ;
-(void)setStyleProvider:(id<EKStyleProvider>)arg1 ;
-(void)calendarEditor:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 entityType:(unsigned)arg3 eventStore:(id)arg4 limitedToSource:(id)arg5 ;
-(NSSet *)selectedCalendars;
-(id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 eventStore:(id)arg3 ;
-(void)setChooserMode:(int)arg1 ;
-(_UIAccessDeniedView *)accessDeniedView;
-(void)setAccessDeniedView:(_UIAccessDeniedView *)arg1 ;
-(id)_viewModeTitle;
-(void)_refreshControlMaximumVisibleTimeElapsed;
-(void)_syncCompletedGracePeriodExpired;
-(id)_loadCalendars;
-(void)_setCalendars:(id)arg1 ;
-(void)refresh:(id)arg1 ;
-(void)_pulledToRefresh:(id)arg1 ;
-(id)_tableHeaderView;
-(char)showDefaultCalendarExplanatoryText;
-(char)_canEnableRefresh;
-(void)_cancelMaximumTimeElapsedTimeout;
-(void)_cancelSyncCompletedTimeout;
-(void)_beginMaximumTimeElapsedTimeout;
-(void)_beginSyncCompletedTimeout;
-(char)disableCalendarEditing;
-(char)_tableShouldDisplayAllCalendarsSection;
-(char)showsDeclinedEventsSetting;
-(char)_calendarAvailableForEditing:(id)arg1 ;
-(char)showDetailAccessories;
-(id)_saveSelection;
-(void)_restoreSelection:(id)arg1 newCalendars:(id)arg2 ;
-(id)_filterCalendars:(id)arg1 ;
-(int)_numSelectedGroups;
-(id)_groupForCustomGroupType:(int)arg1 ;
-(id)_groupForSource:(id)arg1 ;
-(void)_insertStoreIntoByGroupArray:(id)arg1 ;
-(void)_populateGroupsForCalendars:(id)arg1 ;
-(void)_applySelection;
-(id)_indexPathForCalendar:(id)arg1 source:(id)arg2 ;
-(void)setCheckedRow:(NSIndexPath *)arg1 ;
-(char)_tableShouldDisplayNewCalendarCellForGroup:(id)arg1 ;
-(int)_declinedEventsSwitchSection;
-(char)_tableShouldDisplayAllCellForGroup:(id)arg1 ;
-(char)_shouldShowGroupNameInSection:(int)arg1 ;
-(void)declinedEventsSwitchChanged:(id)arg1 ;
-(id)_stringForSharedCalendar:(id)arg1 ;
-(char)_isEllipsisCellForGroup:(id)arg1 rowIndex:(int)arg2 ;
-(id)_cellIdentifierWithSubtitle:(char)arg1 ;
-(void)_selectGroup:(id)arg1 selected:(char)arg2 ;
-(void)_selectAllCalendarsAndStores:(char)arg1 ;
-(void)_selectCalendar:(id)arg1 selected:(char)arg2 ;
-(id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 entityType:(unsigned)arg3 eventStore:(id)arg4 ;
-(void)setShowAll:(char)arg1 ;
-(void)setAllowsEdit:(char)arg1 ;
-(char)showsRefreshButton;
-(char)allowsPullToRefresh;
-(void)setShowsRefreshButton:(char)arg1 ;
-(void)setAllowsPullToRefresh:(char)arg1 ;
-(void)setShowsWritableCalendarsOnly:(char)arg1 ;
-(char)showsWritableCalendarsOnly;
-(void)_syncDidStart;
-(void)_syncDidEnd;
-(NSMutableSet *)selectedCalendarSet;
-(void)setSelectedCalendarSet:(NSMutableSet *)arg1 ;
-(int)chooserMode;
-(void)setDisableCalendarEditing:(char)arg1 ;
-(void)setShowsDeclinedEventsSetting:(char)arg1 ;
-(void)setShowDetailAccessories:(char)arg1 ;
-(void)setShowDefaultCalendarExplanatoryText:(char)arg1 ;
-(int)lastAuthorizationStatus;
-(void)setLastAuthorizationStatus:(int)arg1 ;
-(void)setGroups:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)storeGroupMap;
-(void)setStoreGroupMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)customGroupMap;
-(void)setCustomGroupMap:(NSMutableDictionary *)arg1 ;
-(NSIndexPath *)checkedRow;
-(EKSource *)limitedToSource;
-(void)setLimitedToSource:(EKSource *)arg1 ;
-(int)refreshCounter;
-(void)setRefreshCounter:(int)arg1 ;
-(void)setDelegate:(id<EKCalendarChooserDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<EKCalendarChooserDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(float)marginForTableView:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setAllowsRotation:(char)arg1 ;
-(char)allowsRotation;
-(void)setSelectionStyle:(int)arg1 ;
-(int)selectionStyle;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(void)setShowsCancelButton:(char)arg1 ;
-(char)showsCancelButton;
-(void)done:(id)arg1 ;
-(void)setShowsDoneButton:(char)arg1 ;
-(char)showsDoneButton;
-(void)cancel:(id)arg1 ;
-(NSMutableArray *)groups;
-(void)setEntityType:(unsigned)arg1 ;
-(unsigned)entityType;
-(void)setFlags:(SCD_Struct_EK10)arg1 ;
-(SCD_Struct_EK10)flags;
-(char)allowsEdit;
@end

