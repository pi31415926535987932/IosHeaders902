/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MarkupUI/MarkupUI-Structs.h>
@interface MUImageReader : NSObject
-(void)_readAnnotationsFromDataProvider:(CGDataProviderRef)arg1 toController:(id)arg2 ;
-(id)_readDataFromTagAtPath:(id)arg1 inMetadata:(CGImageMetadataRef)arg2 ;
-(id)_readBaseImageFromDataProvider:(CGDataProviderRef)arg1 providerSource:(id)arg2 baseWasValid:(char*)arg3 ;
-(void)readAnnotationsFromData:(id)arg1 toController:(id)arg2 ;
-(void)readAnnotationsFromImageAtURL:(id)arg1 toController:(id)arg2 ;
-(id)readBaseImageFromData:(id)arg1 baseWasValid:(char*)arg2 ;
-(id)readBaseImageFromImageAtURL:(id)arg1 baseWasValid:(char*)arg2 ;
@end

