/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/EDProcessor.h>

@interface CHPCategoryAndSeriesReordering : EDProcessor
-(BOOL)isObjectSupported:(id)arg1 ;
-(void)applyProcessorToObject:(id)arg1 sheet:(id)arg2 ;
-(void)reorderCategoryAndSeries:(id)arg1 sheet:(id)arg2 clearAxisReversedFlag:(BOOL)arg3 ;
-(void)applyCategoryReorderingPreprocessor:(id)arg1 ;
-(BOOL)isObjectSupportedForSeriesReorderingPreprocessor:(id)arg1 isCategoryOrderReversed:(BOOL)arg2 ;
-(void)applySeriesReorderingPreprocessor:(id)arg1 ;
-(void)reorderSeriesCategory:(id)arg1 dataPointCount:(unsigned)arg2 byRow:(BOOL)arg3 ;
-(void)reorderData:(id)arg1 dataPointCount:(unsigned)arg2 byRow:(BOOL)arg3 ;
-(void)reorderValueProperties:(id)arg1 dataPointCount:(unsigned)arg2 ;
-(void)reorderDataValues:(id)arg1 dataPointCount:(unsigned)arg2 ;
-(void)reorderDataFormula:(id)arg1 dataPointCount:(unsigned)arg2 byRow:(BOOL)arg3 ;
@end

