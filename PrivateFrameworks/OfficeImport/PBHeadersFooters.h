/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBHeadersFooters : NSObject
+(PptHeadersFootersAtom*)headersFootersAtomWithHeadersFootersContainer:(id)arg1 ;
+(void)readHeaderFooterTextFromHeadersFootersContainer:(id)arg1 toPlaceholderShape:(id)arg2 ;
+(id)headersFootersContainerWithSlideContainer:(id)arg1 state:(id)arg2 ;
+(void)addCopyOfHeaderFooterPlaceholderOfType:(int)arg1 toDrawables:(id)arg2 slideBase:(id)arg3 headersFootersContainer:(id)arg4 state:(id)arg5 ;
+(void)readHeadersFootersFromSlideContainer:(id)arg1 toMasterSlide:(id)arg2 drawables:(id)arg3 state:(id)arg4 ;
+(void)readHeadersFootersToSlideLayout:(id)arg1 drawables:(id)arg2 state:(id)arg3 ;
+(void)readHeadersFootersFromSlideContainer:(id)arg1 toSlide:(id)arg2 drawables:(id)arg3 state:(id)arg4 ;
@end

