/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TTMergeableStringDelegate <NSObject>
@required
-(void)edited:(unsigned)arg1 range:(NSRange)arg2 changeInLength:(int)arg3;
-(void)beginEditing;
-(void)endEditing;
-(void)addUndoCommand:(id)arg1;
-(char)wantsUndoCommands;

@end

