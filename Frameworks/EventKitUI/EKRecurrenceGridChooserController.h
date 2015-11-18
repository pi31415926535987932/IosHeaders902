/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKRecurrenceChooserController.h>
#import <libobjc.A.dylib/EKUIDividedGridViewControllerDelegate.h>

@class EKUIDividedGridViewTableViewCell, NSString;

@interface EKRecurrenceGridChooserController : EKRecurrenceChooserController <EKUIDividedGridViewControllerDelegate> {

	EKUIDividedGridViewTableViewCell* _tableViewCell;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refreshCells;
-(id)allCells;
-(id)cellLabels;
-(int)gridViewType;
-(void)selectCell:(id)arg1 atIndex:(int)arg2 ;
-(id)tableViewCell;
-(id)cellForRow:(int)arg1 ;
-(float)heightForRow:(int)arg1 ;
-(char)drawBackgroundForRow:(int)arg1 ;
-(void)dividedGridViewControllerDidLayout:(id)arg1 ;
-(void)dividedGridViewController:(id)arg1 didSelectCell:(id)arg2 atIndex:(int)arg3 ;
-(void)prepareForDisplay;
@end

