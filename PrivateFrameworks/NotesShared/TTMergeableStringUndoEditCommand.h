/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringUndoCommand.h>

@class NSString;

@interface TTMergeableStringUndoEditCommand : NSObject <TTMergeableStringUndoCommand> {

	vector<TopoIDRange, std::__1::allocator<TopoIDRange> >* _deleteRanges;
	vector<std::__1::pair<TopoIDRange, NSAttributedString *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *> > >* _insertStrings;

}

@property (nonatomic,readonly) vector<TopoIDRange* deleteRanges;                              //@synthesize deleteRanges=_deleteRanges - In the implementation block
@property (nonatomic,readonly) vector<std::__1::pair<TopoIDRange* insertStrings;              //@synthesize insertStrings=_insertStrings - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)applyToString:(id)arg1 ;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(char)hasTopoIDsThatCanChange;
-(void)updateInsertTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(vector<std::__1::pair<TopoIDRange*)insertStrings;
-(vector<TopoIDRange*)deleteRanges;
-(char)coalesceWith:(id)arg1 inString:(id)arg2 ;
@end

