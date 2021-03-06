/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/EDReference.h>

@interface EDSheetReference : EDReference {

	unsigned mSheetIndex;

}
+(id)referenceWithSheetIndex:(unsigned)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)sheetIndex;
-(BOOL)isSheedIndexValid;
-(id)initWithSheetIndex:(unsigned)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5 ;
-(char)isEqualToTableReference:(id)arg1 ;
-(BOOL)fullyAdjacentToReference:(id)arg1 ;
-(void)unionWithReference:(id)arg1 ;
@end

