/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXCell : NSObject
+(void)initialize;
+(int)edCellTypeFromXmlCellElement:(xmlNode*)arg1 isDate:(BOOL*)arg2 isFmlaStr:(BOOL*)arg3 stringIndex:(BOOL*)arg4 ;
+(BOOL)edBoolFromXmlBoolString:(id)arg1 ;
+(double)dateTimeNumberFromXmlDateString:(id)arg1 state:(id)arg2 ;
+(int)edErrorFromXmlErrorString:(id)arg1 ;
+(void)edCellFromXmlCellElement:(xmlNode*)arg1 edRowInfo:(EDRowInfo*)arg2 edRowBlock:(id)arg3 edRowBlocks:(id)arg4 state:(id)arg5 ;
@end

