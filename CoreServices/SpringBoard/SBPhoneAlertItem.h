/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBPhoneAlertItem : SBAlertItem {

	NSString* _bodyText;
	NSString* _title;

}
-(id)initWithTitle:(id)arg1 bodyText:(id)arg2 ;
-(void)dealloc;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
@end
