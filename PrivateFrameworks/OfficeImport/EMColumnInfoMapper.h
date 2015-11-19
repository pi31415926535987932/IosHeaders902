/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class EDColumnInfo;

@interface EMColumnInfoMapper : CMMapper {

	EDColumnInfo* edColumnInfo;
	double columnWidth;
	unsigned columnSpan;

}
-(double)columnWidth;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithEDColumnInfo:(id)arg1 maxSpan:(unsigned)arg2 parent:(id)arg3 ;
-(id)initWithDefaultWidth:(double)arg1 span:(unsigned)arg2 parent:(id)arg3 ;
@end
