/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>
#import <UIKit/UITextFieldDelegate.h>

@class EKEventDetailCommentCell, NSString;

@interface EKEventCommentDetailItem : EKEventDetailItem <UITextFieldDelegate> {

	EKEventDetailCommentCell* _cell;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(char)configureWithCalendar:(id)arg1 preview:(char)arg2 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(void)reset;
-(void)textFieldDidEndEditing:(id)arg1 ;
@end

