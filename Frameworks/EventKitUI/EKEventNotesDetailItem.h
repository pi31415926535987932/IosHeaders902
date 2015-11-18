/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, UITextView;

@interface EKEventNotesDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	UITableViewCell* _moreButtonCell;
	UITextView* _notesView;
	char _cellNeedsUpdate;

}
-(void)setCellPosition:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(void)_updateCellIfNeeded;
-(unsigned)numberOfSubitems;
-(char)configureWithCalendar:(id)arg1 preview:(char)arg2 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(char)hasDetailViewControllerAtIndex:(unsigned)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(char)requiresLayoutForSubitemCount;
-(unsigned)maximumNumberOfSubItems;
-(void)reset;
@end

