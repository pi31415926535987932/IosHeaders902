/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADTableCell, CMStyle;

@interface PMTableCellMapper : CMMapper {

	OADTableCell* mCell;
	CMStyle* mStyle;
	int mColIndex;
	unsigned mRowIndex;
	float mWidth;

}
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)tableMapper;
-(void)mapBordersWithState:(id)arg1 ;
-(void)mapCellPropertiesWithState:(id)arg1 textAnchor:(unsigned char)arg2 ;
-(id)initWithOadTableCell:(id)arg1 rowIndex:(unsigned)arg2 columnIndex:(int)arg3 parent:(id)arg4 ;
-(float)widthWithState:(id)arg1 ;
-(id)rowMapper;
@end

