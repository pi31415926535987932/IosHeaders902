/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextBlock.h>

@class NSTextTable;

@interface NSTextTableBlock : NSTextBlock {

	NSTextTable* _table;
	int _rowNum;
	int _colNum;
	int _rowSpan;
	int _colSpan;
	void* _tableBlockPrimary;
	void* _tableBlockSecondary;

}
+(void)initialize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)table;
-(int)columnSpan;
-(int)rowSpan;
-(void)drawBackgroundWithFrame:(CGRect)arg1 inView:(id)arg2 characterRange:(NSRange)arg3 layoutManager:(id)arg4 ;
-(int)startingRow;
-(CGRect)rectForLayoutAtPoint:(CGPoint)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterRange:(NSRange)arg4 ;
-(CGRect)boundsRectForContentRect:(CGRect)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterRange:(NSRange)arg4 ;
-(id)initWithTable:(id)arg1 startingRow:(int)arg2 rowSpan:(int)arg3 startingColumn:(int)arg4 columnSpan:(int)arg5 ;
-(int)startingColumn;
-(void)_setRowSpan:(int)arg1 ;
-(void)_setColumnSpan:(int)arg1 ;
@end

