/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:03 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKUIInviteesViewConflictResolutionSection.h>

@class NSString, NSMutableSet, NSArray, EKUIInviteeAlternativeTimeSearcher;

@interface EKUIInviteesViewAlternativeTimeSection : NSObject <EKUIInviteesViewConflictResolutionSection> {

	char _hasCheckedRow;
	char _availabilityRequestInProgress;
	char _initialSearchInProgress;
	char _searchExhausted;
	/*^block*/id _showMoreAlternativeTimesTapped;
	NSString* _cachedTimeCellReuseIdentifier;
	NSString* _cachedConflictSearchCellReuseIdentifier;
	unsigned _reuseIdentifierVersion;
	/*^block*/id _tableViewCellHook;
	/*^block*/id _newTimeChosen;
	/*^block*/id _showPreviewOfEventAtTime;
	NSMutableSet* _rowsShowingAllParticipants;
	NSArray* _alternativeTimes;
	int _lastCheckedRow;
	unsigned _maximumNumberOfTimeSlotsToShow;
	EKUIInviteeAlternativeTimeSearcher* _availabilitySearcher;

}

@property (nonatomic,copy) id showMoreAlternativeTimesTapped;                                        //@synthesize showMoreAlternativeTimesTapped=_showMoreAlternativeTimesTapped - In the implementation block
@property (nonatomic,readonly) unsigned initialNumberOfTimeSlotsToShow; 
@property (nonatomic,readonly) NSArray * searcherTimeSlots; 
@property (nonatomic,readonly) Class customTimeCellClass; 
@property (nonatomic,readonly) char searchingForMoreTimes; 
@property (nonatomic,retain) NSString * cachedTimeCellReuseIdentifier;                               //@synthesize cachedTimeCellReuseIdentifier=_cachedTimeCellReuseIdentifier - In the implementation block
@property (nonatomic,retain) NSString * cachedConflictSearchCellReuseIdentifier;                     //@synthesize cachedConflictSearchCellReuseIdentifier=_cachedConflictSearchCellReuseIdentifier - In the implementation block
@property (assign,nonatomic) unsigned reuseIdentifierVersion;                                        //@synthesize reuseIdentifierVersion=_reuseIdentifierVersion - In the implementation block
@property (nonatomic,copy) id tableViewCellHook;                                                     //@synthesize tableViewCellHook=_tableViewCellHook - In the implementation block
@property (nonatomic,copy) id newTimeChosen;                                                         //@synthesize newTimeChosen=_newTimeChosen - In the implementation block
@property (nonatomic,copy) id showPreviewOfEventAtTime;                                              //@synthesize showPreviewOfEventAtTime=_showPreviewOfEventAtTime - In the implementation block
@property (nonatomic,retain) NSMutableSet * rowsShowingAllParticipants;                              //@synthesize rowsShowingAllParticipants=_rowsShowingAllParticipants - In the implementation block
@property (nonatomic,retain) NSArray * alternativeTimes;                                             //@synthesize alternativeTimes=_alternativeTimes - In the implementation block
@property (assign,nonatomic) int lastCheckedRow;                                                     //@synthesize lastCheckedRow=_lastCheckedRow - In the implementation block
@property (assign,nonatomic) char hasCheckedRow;                                                     //@synthesize hasCheckedRow=_hasCheckedRow - In the implementation block
@property (assign,nonatomic) char availabilityRequestInProgress;                                     //@synthesize availabilityRequestInProgress=_availabilityRequestInProgress - In the implementation block
@property (assign,nonatomic) unsigned maximumNumberOfTimeSlotsToShow;                                //@synthesize maximumNumberOfTimeSlotsToShow=_maximumNumberOfTimeSlotsToShow - In the implementation block
@property (nonatomic,retain) EKUIInviteeAlternativeTimeSearcher * availabilitySearcher;              //@synthesize availabilitySearcher=_availabilitySearcher - In the implementation block
@property (assign,nonatomic) char initialSearchInProgress;                                           //@synthesize initialSearchInProgress=_initialSearchInProgress - In the implementation block
@property (assign,nonatomic) char searchExhausted;                                                   //@synthesize searchExhausted=_searchExhausted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)availabilityRequestInProgress;
-(void)setAvailabilityRequestInProgress:(char)arg1 ;
-(char)_isValidRow:(int)arg1 ;
-(unsigned)reuseIdentifierVersion;
-(void)setReuseIdentifierVersion:(unsigned)arg1 ;
-(id)debugTitle;
-(char)sectionShouldBeShown;
-(id)cellForIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)reloadAndRegisterReusableCellsWithTableView:(id)arg1 ;
-(char)canSelectRow:(id)arg1 ;
-(void)selectRow:(id)arg1 ;
-(float)estimatedHeightForRow:(id)arg1 ;
-(char)canEditRow:(id)arg1 ;
-(int)editingStyleForRow:(id)arg1 ;
-(id)titleForDeleteConfirmationButtonForRow:(id)arg1 ;
-(void)commitEditingStyle:(int)arg1 forRow:(id)arg2 ;
-(void)setTableViewCellHook:(id)arg1 ;
-(void)cancelOutstandingOperations;
-(id)tableViewCellHook;
-(void)setAvailabilitySearcher:(EKUIInviteeAlternativeTimeSearcher *)arg1 ;
-(void)clearCheckmark;
-(EKUIInviteeAlternativeTimeSearcher *)availabilitySearcher;
-(void)setShowPreviewOfEventAtTime:(id)arg1 ;
-(void)setNewTimeChosen:(id)arg1 ;
-(void)setShowMoreAlternativeTimesTapped:(id)arg1 ;
-(void)availabilitySearcherChangedState:(int)arg1 ;
-(char)injectNewRowsBeforeLastExistingRow;
-(void)refreshCellsAfterStateChange;
-(id)showPreviewOfEventAtTime;
-(void)setRowsShowingAllParticipants:(NSMutableSet *)arg1 ;
-(NSMutableSet *)rowsShowingAllParticipants;
-(id)newTimeChosen;
-(unsigned)initialNumberOfTimeSlotsToShow;
-(NSArray *)searcherTimeSlots;
-(Class)customTimeCellClass;
-(char)searchingForMoreTimes;
-(void)searchForMoreTimes;
-(unsigned)_numberOfTimeSlotsShown;
-(char)initialSearchInProgress;
-(char)searchExhausted;
-(char)_isConflictSearchRow:(int)arg1 ;
-(NSString *)cachedConflictSearchCellReuseIdentifier;
-(NSString *)cachedTimeCellReuseIdentifier;
-(char)hasCheckedRow;
-(int)lastCheckedRow;
-(id)_alternativeTimeAtIndex:(int)arg1 ;
-(void)setCachedTimeCellReuseIdentifier:(NSString *)arg1 ;
-(void)setCachedConflictSearchCellReuseIdentifier:(NSString *)arg1 ;
-(NSArray *)alternativeTimes;
-(unsigned)maximumNumberOfTimeSlotsToShow;
-(void)setMaximumNumberOfTimeSlotsToShow:(unsigned)arg1 ;
-(id)showMoreAlternativeTimesTapped;
-(void)setHasCheckedRow:(char)arg1 ;
-(void)setLastCheckedRow:(int)arg1 ;
-(void)setAlternativeTimes:(NSArray *)arg1 ;
-(void)setSearchExhausted:(char)arg1 ;
-(void)setInitialSearchInProgress:(char)arg1 ;
-(id)init;
-(unsigned)numberOfRows;
-(id)headerTitle;
@end

