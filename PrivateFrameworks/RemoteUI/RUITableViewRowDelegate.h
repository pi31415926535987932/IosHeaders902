/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RUITableViewRowDelegate
@required
-(void)rowDidChange:(id)arg1 action:(int)arg2;
-(id)sourceURLForRUITableViewRow;
-(void)rowDidEndEditing:(id)arg1;
-(void)rowIsFirstResponder:(id)arg1;
-(id)textFieldRow:(id)arg1 changeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3;
-(Class)tableCellClassForTableViewRow:(id)arg1;
-(void)row:(id)arg1 activatedElement:(id)arg2;

@end
