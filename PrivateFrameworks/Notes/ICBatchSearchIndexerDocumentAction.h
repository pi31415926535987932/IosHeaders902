/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICSearchIndexableIdentifiers;

@interface ICBatchSearchIndexerDocumentAction : NSObject

@property (nonatomic,readonly) char shouldProcessImmediately; 
@property (nonatomic,copy,readonly) ICSearchIndexableIdentifiers * searchIndexableIdentifiers; 
-(char)shouldProcessImmediately;
-(ICSearchIndexableIdentifiers *)searchIndexableIdentifiers;
-(id)processedIdentifiersByPerformingWithBatchSearchIndexer:(id)arg1 ;
@end

