/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/EKEditItemViewControllerDelegate.h>
#import <libobjc.A.dylib/EKCalendarItemInlineEditItem.h>

@class UITableViewCell, EKUILocationEditItemCell, UIView, EKRequestAvailabilityOperation, NSArray, EKParticipant, NSString;

@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKCalendarItemInlineEditItem> {

	UITableViewCell* _titleCell;
	UITableViewCell* _nonConferenceLocationCell;
	EKUILocationEditItemCell* _conferenceLocationCell;
	UITableViewCell* _mapCell;
	char _sourceSupportsAvailabilityRequests;
	UIView* _clearButtonView;
	EKRequestAvailabilityOperation* _availabilityRequest;
	NSArray* _availabilitySpansForLocation;
	EKParticipant* _conferenceRoom;
	int _conferenceRoomAvailabilityType;
	char _showsLocation;
	int _mostRecentStringLengthDelta;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfSubitems;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)_updateAvailabilityInformation;
-(char)_showsMap;
-(void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(char)isSubitemAtIndexSaveable:(unsigned)arg1 ;
-(id)_makeCell:(unsigned)arg1 ;
-(char)_showConferenceLocationCell;
-(void)_clearButtonTapped;
-(void)_refreshConferenceRoomCell;
-(id)_clearButtonView;
-(void)_setNewStructuredLocation:(id)arg1 ;
-(void)_updateLocationWithStructuredLocation:(id)arg1 ;
-(void)_updateLocationWithConferenceRoom:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(char)editItemViewControllerCommit:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(char)isInline;
-(char)usesDetailViewControllerForSubitem:(unsigned)arg1 ;
-(char)saveAndDismissWithForce:(char)arg1 ;
-(char)forceRefreshStartAndEndDatesOnCommit;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldClear:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(char)isSaveable;
-(id)initWithLocation:(char)arg1 ;
@end

