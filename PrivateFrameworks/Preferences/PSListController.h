/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSViewController.h>
#import <UIKit/UIAppearance.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PSSpecifierObserver.h>
#import <libobjc.A.dylib/PSViewControllerOffsetProtocol.h>

@protocol PSSpecifierDataSource;
@class NSMutableArray, NSMutableDictionary, PSListContainerView, UITableView, NSArray, NSString, UIKeyboard, NSIndexPath, NSDictionary, UIColor;

@interface PSListController : PSViewController <UIAppearance, UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, UIPopoverPresentationControllerDelegate, PSSpecifierObserver, PSViewControllerOffsetProtocol> {

	NSMutableArray* _prequeuedReusablePSTableCells;
	NSMutableDictionary* _cells;
	char _cachesCells;
	char _reusesCells;
	char _forceSynchronousIconLoadForCreatedCells;
	PSListContainerView* _containerView;
	UITableView* _table;
	NSArray* _specifiers;
	NSMutableDictionary* _specifiersByID;
	NSMutableArray* _groups;
	NSString* _specifierID;
	NSMutableArray* _bundleControllers;
	char _bundlesLoaded;
	char _showingSetupController;
	char _keyboardWasVisible;
	UIKeyboard* _keyboard;
	char _popupIsModal;
	char _popupIsDismissing;
	char _hasAppeared;
	float _verticalContentOffset;
	NSString* _offsetItemName;
	CGPoint _contentOffsetWithKeyboard;
	NSString* _highlightItemName;
	char _isVisible;
	id<PSSpecifierDataSource> _dataSource;
	char _requestingSpecifiersFromDataSource;
	char _sectionContentInsetInitialized;
	NSIndexPath* _savedSelectedIndexPath;
	char _edgeToEdgeCells;
	char _usesDarkTheme;
	NSDictionary* _pendingURLResourceDictionary;
	NSString* _specifierIDPendingPush;
	UIColor* _backgroundColor;
	UIColor* _foregroundColor;
	UIColor* _separatorColor;
	UIColor* _cellHighlightColor;
	UIColor* _cellAccessoryColor;
	UIColor* _cellAccessoryHighlightColor;
	UIColor* _textColor;
	UIColor* _altTextColor;
	UIColor* _buttonTextColor;
	UIColor* _editableTextColor;
	UIColor* _editablePlaceholderTextColor;
	UIColor* _editableInsertionPointColor;
	UIColor* _editableSelectionBarColor;
	UIColor* _editableSelectionHighlightColor;
	UIColor* _footerHyperlinkColor;
	UIColor* _segmentedSliderTrackColor;

}

@property (assign,nonatomic) char forceSynchronousIconLoadForCreatedCells;              //@synthesize forceSynchronousIconLoadForCreatedCells=_forceSynchronousIconLoadForCreatedCells - In the implementation block
@property (assign,nonatomic) char edgeToEdgeCells;                                      //@synthesize edgeToEdgeCells=_edgeToEdgeCells - In the implementation block
@property (nonatomic,retain) NSDictionary * pendingURLResourceDictionary;               //@synthesize pendingURLResourceDictionary=_pendingURLResourceDictionary - In the implementation block
@property (nonatomic,copy) NSString * specifierIDPendingPush;                           //@synthesize specifierIDPendingPush=_specifierIDPendingPush - In the implementation block
@property (assign,nonatomic) char usesDarkTheme;                                        //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                                 //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                                  //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,retain) UIColor * cellHighlightColor;                              //@synthesize cellHighlightColor=_cellHighlightColor - In the implementation block
@property (nonatomic,retain) UIColor * cellAccessoryColor;                              //@synthesize cellAccessoryColor=_cellAccessoryColor - In the implementation block
@property (nonatomic,retain) UIColor * cellAccessoryHighlightColor;                     //@synthesize cellAccessoryHighlightColor=_cellAccessoryHighlightColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                       //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * altTextColor;                                    //@synthesize altTextColor=_altTextColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonTextColor;                                 //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
@property (nonatomic,retain) UIColor * editableTextColor;                               //@synthesize editableTextColor=_editableTextColor - In the implementation block
@property (nonatomic,retain) UIColor * editablePlaceholderTextColor;                    //@synthesize editablePlaceholderTextColor=_editablePlaceholderTextColor - In the implementation block
@property (nonatomic,retain) UIColor * editableInsertionPointColor;                     //@synthesize editableInsertionPointColor=_editableInsertionPointColor - In the implementation block
@property (nonatomic,retain) UIColor * editableSelectionBarColor;                       //@synthesize editableSelectionBarColor=_editableSelectionBarColor - In the implementation block
@property (nonatomic,retain) UIColor * editableSelectionHighlightColor;                 //@synthesize editableSelectionHighlightColor=_editableSelectionHighlightColor - In the implementation block
@property (nonatomic,retain) UIColor * footerHyperlinkColor;                            //@synthesize footerHyperlinkColor=_footerHyperlinkColor - In the implementation block
@property (nonatomic,retain) UIColor * segmentedSliderTrackColor;                       //@synthesize segmentedSliderTrackColor=_segmentedSliderTrackColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int observerType; 
+(id)appearance;
+(id)appearanceWhenContainedInInstancesOfClasses:(id)arg1 ;
+(id)appearanceWhenContainedIn:(Class)arg1 ;
+(id)appearanceForTraitCollection:(id)arg1 ;
+(id)appearanceForTraitCollection:(id)arg1 whenContainedInInstancesOfClasses:(id)arg2 ;
+(id)appearanceForTraitCollection:(id)arg1 whenContainedIn:(Class)arg2 ;
+(char)displaysButtonBar;
-(int)indexOfGroup:(int)arg1 ;
-(UIColor *)cellHighlightColor;
-(UIColor *)cellAccessoryColor;
-(UIColor *)cellAccessoryHighlightColor;
-(UIColor *)altTextColor;
-(UIColor *)buttonTextColor;
-(UIColor *)editableTextColor;
-(UIColor *)editablePlaceholderTextColor;
-(UIColor *)editableInsertionPointColor;
-(UIColor *)editableSelectionBarColor;
-(UIColor *)editableSelectionHighlightColor;
-(UIColor *)footerHyperlinkColor;
-(id)specifiers;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)description;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)reload;
-(void)loadView;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)viewDidLayoutSubviews;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(id)tableView:(id)arg1 detailTextForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 titleAlignmentForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2 ;
-(void)beginUpdates;
-(void)endUpdates;
-(UIColor *)textColor;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)dismissPopoverAnimated:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_setContentInset:(float)arg1 ;
-(id)table;
-(int)tableViewStyle;
-(id)bundle;
-(void)_keyboardDidHide:(id)arg1 ;
-(char)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(char)usesDarkTheme;
-(int)indexForIndexPath:(id)arg1 ;
-(void)setUsesDarkTheme:(char)arg1 ;
-(void)clearCache;
-(void)reloadSpecifier:(id)arg1 ;
-(void)reloadSpecifiers;
-(void)_updateSectionContentInsetWithAnimation:(char)arg1 ;
-(void)setCachesCells:(char)arg1 ;
-(void)setReusesCells:(char)arg1 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3 ;
-(void)setSpecifierID:(id)arg1 ;
-(id)specifier;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 ;
-(int)indexOfSpecifier:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)prepareSpecifiersMetadata;
-(char)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierAtIndex:(int)arg3 ;
-(id)indexPathForIndex:(int)arg1 ;
-(void)createGroupIndices;
-(id)specifiersInGroup:(int)arg1 ;
-(void)reloadSpecifierAtIndex:(int)arg1 animated:(char)arg2 ;
-(void)reloadSpecifier:(id)arg1 animated:(char)arg2 ;
-(id)specifierForID:(id)arg1 ;
-(void)reloadSpecifierID:(id)arg1 animated:(char)arg2 ;
-(id)specifierAtIndex:(int)arg1 ;
-(char)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifier:(id)arg3 ;
-(char)_getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierAtIndex:(int)arg3 groups:(id)arg4 ;
-(int)rowsForGroup:(int)arg1 ;
-(int)indexOfSpecifierID:(id)arg1 ;
-(void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(char)arg3 ;
-(void)insertSpecifier:(id)arg1 atIndex:(int)arg2 animated:(char)arg3 ;
-(void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(char)arg3 ;
-(void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(char)arg3 ;
-(void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2 animated:(char)arg3 ;
-(void)_addIdentifierForSpecifier:(id)arg1 ;
-(void)_insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(char)arg3 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(char)arg3 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(char)arg3 ;
-(void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2 animated:(char)arg3 ;
-(void)addSpecifier:(id)arg1 animated:(char)arg2 ;
-(void)addSpecifiersFromArray:(id)arg1 animated:(char)arg2 ;
-(void)removeContiguousSpecifiers:(id)arg1 animated:(char)arg2 ;
-(void)removeSpecifier:(id)arg1 animated:(char)arg2 ;
-(void)removeSpecifierID:(id)arg1 animated:(char)arg2 ;
-(void)removeSpecifierAtIndex:(int)arg1 animated:(char)arg2 ;
-(void)removeLastSpecifierAnimated:(char)arg1 ;
-(void)_removeIdentifierForSpecifier:(id)arg1 ;
-(void)_removeContiguousSpecifiers:(id)arg1 animated:(char)arg2 ;
-(void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(char)arg3 ;
-(void)updateSpecifiersInRange:(NSRange)arg1 withSpecifiers:(id)arg2 ;
-(int)_nextGroupInSpecifiersAfterIndex:(int)arg1 inArray:(id)arg2 ;
-(void)dismissConfirmationViewAnimated:(char)arg1 ;
-(void)_unloadBundleControllers;
-(void)_returnKeyPressed:(id)arg1 ;
-(void)contentSizeDidChange:(id)arg1 ;
-(void)contentSizeChangedNotificationPosted:(id)arg1 ;
-(Class)tableViewClass;
-(char)edgeToEdgeCells;
-(char)_isRegularWidth;
-(id)_createGroupIndices:(id)arg1 ;
-(void)migrateSpecifierMetadataFrom:(id)arg1 to:(id)arg2 ;
-(void)setForceSynchronousIconLoadForCreatedCells:(char)arg1 ;
-(id)cachedCellForSpecifier:(id)arg1 ;
-(id)_customViewForSpecifier:(id)arg1 class:(Class)arg2 isHeader:(char)arg3 ;
-(float)_tableView:(id)arg1 heightForCustomInSection:(int)arg2 isHeader:(char)arg3 ;
-(id)_tableView:(id)arg1 viewForCustomInSection:(int)arg2 isHeader:(char)arg3 ;
-(void)_scrollToSpecifierWithID:(id)arg1 animated:(char)arg2 ;
-(void)_loadBundleControllers;
-(char)shouldSelectResponderOnAppearance;
-(id)findFirstVisibleResponder;
-(void)_performHighlightForSpecifierWithID:(id)arg1 tryAgainIfFailed:(char)arg2 ;
-(void)formSheetViewWillDisappear;
-(void)popupViewWillDisappear;
-(void)returnPressedAtEnd;
-(void)confirmationViewAcceptedForSpecifier:(id)arg1 ;
-(void)confirmationViewCancelledForSpecifier:(id)arg1 ;
-(void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(char)arg2 ;
-(char)performConfirmationActionForSpecifier:(id)arg1 ;
-(char)performConfirmationCancelActionForSpecifier:(id)arg1 ;
-(id)controllerForSpecifier:(id)arg1 ;
-(char)performActionForSpecifier:(id)arg1 ;
-(char)performButtonActionForSpecifier:(id)arg1 ;
-(char)performLoadActionForSpecifier:(id)arg1 ;
-(id)indexPathForSpecifier:(id)arg1 ;
-(void)showConfirmationViewForSpecifier:(id)arg1 ;
-(void)showController:(id)arg1 ;
-(void)setEdgeToEdgeCells:(char)arg1 ;
-(void)showController:(id)arg1 animate:(char)arg2 ;
-(char)shouldDeferPushForSpecifierID:(id)arg1 ;
-(void)setPendingURLResourceDictionary:(NSDictionary *)arg1 ;
-(void)setSpecifierIDPendingPush:(NSString *)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)clearPendingURL;
-(void)setDesiredVerticalContentOffset:(float)arg1 ;
-(void)setDesiredVerticalContentOffsetItemNamed:(id)arg1 ;
-(float)verticalContentOffset;
-(void)highlightSpecifierWithID:(id)arg1 ;
-(char)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(char*)arg3 ;
-(void)reloadIconForSpecifierForBundle:(id)arg1 ;
-(float)_getKeyboardIntersectionHeightFromUserInfo:(id)arg1 ;
-(void)_performHighlightForSpecifierWithID:(id)arg1 ;
-(void)performSpecifierUpdates:(id)arg1 ;
-(void)_moveSpecifierAtIndex:(unsigned)arg1 toIndex:(unsigned)arg2 animated:(char)arg3 ;
-(void)dataSource:(id)arg1 performUpdates:(id)arg2 ;
-(void)invalidateSpecifiersForDataSource:(id)arg1 ;
-(int)observerType;
-(void)setSpecifiers:(id)arg1 ;
-(void)reloadSpecifierAtIndex:(int)arg1 ;
-(void)reloadSpecifierID:(id)arg1 ;
-(char)containsSpecifier:(id)arg1 ;
-(id)specifierAtIndexPath:(id)arg1 ;
-(char)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierID:(id)arg3 ;
-(int)indexForRow:(int)arg1 inGroup:(int)arg2 ;
-(NSRange)rangeOfSpecifiersInGroupID:(id)arg1 ;
-(void)insertSpecifier:(id)arg1 atIndex:(int)arg2 ;
-(void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 ;
-(void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 ;
-(void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2 ;
-(void)addSpecifier:(id)arg1 ;
-(void)addSpecifiersFromArray:(id)arg1 ;
-(void)removeSpecifier:(id)arg1 ;
-(void)removeSpecifierID:(id)arg1 ;
-(void)removeSpecifierAtIndex:(int)arg1 ;
-(void)removeLastSpecifier;
-(void)removeContiguousSpecifiers:(id)arg1 ;
-(void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 ;
-(void)updateSpecifiers:(id)arg1 withSpecifiers:(id)arg2 ;
-(id)initForContentSize:(CGSize)arg1 ;
-(void)loseFocus;
-(id)specifierID;
-(id)cachedCellForSpecifierID:(id)arg1 ;
-(void)createPrequeuedPSTableCells:(unsigned)arg1 ;
-(void)_scrollToSpecifierNamed:(id)arg1 ;
-(void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(char)arg2 swapAlertButtons:(char)arg3 ;
-(void)lazyLoadBundle:(id)arg1 ;
-(id)controllerForRowAtIndexPath:(id)arg1 ;
-(id)specifiersForIDs:(id)arg1 ;
-(void)dismissPopover;
-(void)pushController:(id)arg1 animate:(char)arg2 ;
-(char)handlePendingURL;
-(void)selectRowForSpecifier:(id)arg1 ;
-(char)shouldReloadSpecifiersOnResume;
-(void)_setNotShowingSetupController;
-(id)specifierDataSource;
-(char)forceSynchronousIconLoadForCreatedCells;
-(NSDictionary *)pendingURLResourceDictionary;
-(NSString *)specifierIDPendingPush;
-(void)setCellHighlightColor:(UIColor *)arg1 ;
-(void)setCellAccessoryColor:(UIColor *)arg1 ;
-(void)setCellAccessoryHighlightColor:(UIColor *)arg1 ;
-(void)setAltTextColor:(UIColor *)arg1 ;
-(void)setButtonTextColor:(UIColor *)arg1 ;
-(void)setEditableTextColor:(UIColor *)arg1 ;
-(void)setEditablePlaceholderTextColor:(UIColor *)arg1 ;
-(void)setEditableInsertionPointColor:(UIColor *)arg1 ;
-(void)setEditableSelectionBarColor:(UIColor *)arg1 ;
-(void)setEditableSelectionHighlightColor:(UIColor *)arg1 ;
-(void)setFooterHyperlinkColor:(UIColor *)arg1 ;
-(UIColor *)segmentedSliderTrackColor;
-(void)setSegmentedSliderTrackColor:(UIColor *)arg1 ;
-(void)showPINSheet:(id)arg1 allowOptionsButton:(char)arg2 ;
-(void)showPINSheet:(id)arg1 ;
-(id)popupStylePopoverController;
-(int)numberOfGroups;
@end

