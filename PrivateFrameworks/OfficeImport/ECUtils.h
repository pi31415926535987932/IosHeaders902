/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ECUtils : NSObject
+(id)dateFromXlDateTimeNumber:(double)arg1 edWorkbook:(id)arg2 ;
+(id)renameMap;
+(double)timeIntervalFromXlDateTimeNumber:(double)arg1 edWorkbook:(id)arg2 ;
+(unsigned)dateTimeOffsetForBuggy1900Dates:(double)arg1 edWorkbook:(id)arg2 ;
+(char)isRenameFunction:(id)arg1 ;
+(id)renameFunction:(id)arg1 ;
+(id)lassoStyleTableReferenceFromTableId:(id)arg1 ;
+(id)lassoDefaultTableName;
+(BOOL)isValidDateTime:(double)arg1 edWorkbook:(id)arg2 ;
+(BOOL)validDateInExcel:(id)arg1 edWorkbook:(id)arg2 ;
+(double)dateTimeNumberFromNSDate:(id)arg1 edWorkbook:(id)arg2 ;
@end

